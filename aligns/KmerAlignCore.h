


#ifndef _KMERALIGNCORE_H_
#define _KMERALIGNCORE_H_


#include "analysis/DNAVector.h"


//==========================================
class TranslateBasesToNumber
{
 public:
  TranslateBasesToNumber() {m_range = 12;}
  virtual ~TranslateBasesToNumber() {}

  virtual void SetSize(int i) {
    m_range = i;
  }

  virtual int BasesToNumber(const DNAVector & b, int from) const = 0;
  
  virtual int GetRange() const {return m_range;}
  virtual int GetSize() const = 0;
  virtual int GetBoundValue() const {
    int i;
    int m = 1;
    for (i=0; i<m_range; i++) {
      m = (m << 2);
    }
    //cout << "Table size: " << m << endl;
    return m;
  }
  
 protected:
  int m_range;
};

// Derived classes
class TranslateBasesToNumberExact : public TranslateBasesToNumber
{
 public:
  virtual ~TranslateBasesToNumberExact() {}

  virtual int BasesToNumber(const DNAVector & b, int from) const {
    int i;
    int num = 0;
    int shift = 1;
    for (i=from; i<from+m_range; i++) {
      char v = NucIndex(b[i]);
      if (v == -1 || v == 4)
	return -1;

      num += (int)v * shift;
      shift = (shift << 2);
    }
    //cout << "Translated sequence into " << num << endl;
    return num;
  }

  virtual int GetSize() const {return m_range;}
  
};



// Derived classes
class TranslateBasesToNumberProtein : public TranslateBasesToNumber
{
 public:
  TranslateBasesToNumberProtein() {
    SetSize(3);
  }

  virtual ~TranslateBasesToNumberProtein() {
  }

  virtual void SetSize(int i) {
    m_range = i;
    m_bounds = 1;
    for (int j=0; j<m_range; j++) {
      m_bounds *= 21;
    }
  }

  virtual int BasesToNumber(const DNAVector & b, int from) const {
    int i;
    int num = 0;
    int shift = 1;
    for (i=from; i<from+m_range; i++) {
      char v = AminoAcidIndex(b[i]);
      if (v == -1)
	return -1;

      num += (int)v * shift;
      shift *= 21;
    }
    //cout << "Translated sequence into " << num << endl;
    return num;

  }
  virtual int GetBoundValue() const {return m_bounds;}

  virtual int GetSize() const {
    return m_range;
  }
  
  private:
    int m_bounds;
};

class TranslateBasesToNumberDoubleComb : public TranslateBasesToNumber
{
 public:
  virtual ~TranslateBasesToNumberDoubleComb() {}

  virtual int BasesToNumber(const DNAVector & b, int from) const {
    int i;
    int num = 0;
    
    int shift = 1;
    int pos = from;
    for (i=0; i<m_range; i+=2) {
      char v = NucIndex(b[pos]);
      if (v == -1 || v == 4)
	return -1;
      num += (int)v * shift;
      shift = (shift << 2);
      v = b[pos+1];
      num += (int)v * shift;
      shift = (shift << 2);
      pos+=2;
    }
    return num;
  }

  virtual int GetSize() const {
    return m_range * 2 - 2;
  }
  virtual int GetBoundValue() const {
    int i;
    int m = 1;
    for (i=0; i<m_range; i++) {
      m = (m << 2);
    }
    //cout << "Table size: " << m << endl;
    return m;
  }

};

class KmerAlignCoreRecord
{
 public:
  KmerAlignCoreRecord():m_contig(-1), m_pos(-1) {}

  //Needs to accept three arguments to accord with class templates that use it
  void Set(int contig, int position, int temp=0) { 
    m_contig = contig;
    m_pos = position;
  }

  int GetContig() const   { return m_contig; }
  int GetPosition() const { return m_pos;    }
  int GetScore() const    { return -1;       }

  bool operator < (const KmerAlignCoreRecord & k) const {
    if (m_contig == k.m_contig)
      return (m_pos < k.m_pos);
    return (m_contig < k.m_contig);
  }

  bool operator <= (const KmerAlignCoreRecord & k) const {
    if (m_contig == k.m_contig)
      return (m_pos <= k.m_pos);
    return (m_contig <= k.m_contig);
  }
  bool operator == (const KmerAlignCoreRecord & k) const {
    if (m_contig == k.m_contig)
      return (m_pos == k.m_pos);
    return false;
  }

 private:
  int m_contig;
  int m_pos;
};

// Avoiding virtual table to keep memory usage low as 
// this object is used heavily (not using inheritance)
class KmerAlignCoreRecordWithScore
{
public:
  KmerAlignCoreRecordWithScore():m_rec(), m_score(0) {}

  void Set(int contig, int position, int score=0) { 
    m_rec.Set(contig, position);
    m_score  = score;
  }

  int GetContig() const   { return m_rec.GetContig();   }
  int GetPosition() const { return m_rec.GetPosition(); }
  int GetScore() const    { return m_score;             }

  bool operator < (const KmerAlignCoreRecordWithScore & k) const {
    return (m_rec < k.m_rec);
  }
  bool operator <= (const KmerAlignCoreRecordWithScore & k) const {
    return (m_rec <= k.m_rec);
  }
  bool operator == (const KmerAlignCoreRecordWithScore & k) const {
    return (m_rec == k.m_rec);
  }
  KmerAlignCoreRecordWithScore & operator =(const KmerAlignCoreRecordWithScore & r) {
    m_rec.Set(r.GetContig(), r.GetPosition());
    if (r.m_score < m_score)
      m_score = r.m_score;
    return *this;
  }

 private:
  KmerAlignCoreRecord m_rec;
  int m_score;
};

template<class DataType>
class KmerAlignCoreRecordStore
{
 public:
  KmerAlignCoreRecordStore() {}

  int GetNumRecords() {return m_data.isize();}

  const DataType & GetRecord(int i) const {return m_data[i];}
  
  void Add(int contig, int pos) {
    DataType tmp;
    tmp.Set(contig, pos);
    m_data.push_back(tmp);
  }

  void Add(int contig, int pos, int n, int score = 0) {
    m_data[n].Set(contig, pos, score);
  }

  void Sort() {::Sort(m_data);}
  void UniqueSort() {::UniqueSort(m_data);}
  
  void Resize(int n) {m_data.resize(n);}
  int GetSize() const {return m_data.isize();}
  const DataType & Get(int i) const {return m_data[i];}

  const svec<DataType> & GetData() const {return m_data;}


 private:
  svec<DataType> m_data;
};


template<class DataType>
class KmerAlignCoreRecordStoreTable
{
 public:
  void SetSize(int i) {
    m_table.resize(i);
  }

  int GetSize() const {return m_table.isize();}

  KmerAlignCoreRecordStore<DataType> & operator[] (int i) {return m_table[i];}
  const KmerAlignCoreRecordStore<DataType> & operator[] (int i) const {return m_table[i];}

 private:
  svec< KmerAlignCoreRecordStore<DataType> > m_table;
};


template<class DataType>
class KmerAlignCore
{
public:
  KmerAlignCore();

  void SetMax12Mer(int i) {   m_max12 = i; }
  void AddData(const vecDNAVector & b, bool filterLowComplexity, int stepSize);
  void AddData(const vecDNAVector & b, const vecNumVector & tags, 
               int min, bool filterLowComplexity, int stepSize);
  void AddData(const DNAVector & b, int contig, int offset = 0, bool bSort = false);
  void SortAll();
  void SetTranslator(TranslateBasesToNumber * p) {
    m_pTrans = p;   
    m_table.SetSize(m_pTrans->GetBoundValue());
  }
  bool GetMatches(svec<DataType> & matches, const DNAVector & b, int start = 0);
  const svec<DataType> & GetMatchesDirectly(const DNAVector & b, int start = 0);
  void SetNumTables(int i) {  m_numTables = i; }
  int GetWordSize() const {return m_numTables * m_pTrans->GetSize();}
  void SetLookAhead(int i) {m_lookAhead = i;}
  int GetLookAhead() const {return m_lookAhead;}
  void SetLAMaxFreq(int i) {m_lookAheadMaxFreq = i;}

private:
  bool IsRepeat(const NumVector & t, int i, int size, int min);
  bool IsLowComplexity(const DNAVector & seq, int startIdx, int numOfBases);
  void MergeSortFilter(svec<DataType> & result,
		       const svec<DataType> & one,
		       const svec<DataType> & two);

  int m_numTables;
  int m_lookAhead;
  int m_max12;
  int m_lookAheadMaxFreq;
  KmerAlignCoreRecordStoreTable<DataType> m_table;
  TranslateBasesToNumber* m_pTrans;
};


#endif //_KMERALIGNCORE_H_
