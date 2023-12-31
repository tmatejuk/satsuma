// Copyright (c) 2000-2003 Whitehead Institute for Biomedical Research

#include <iostream>

#include "visual/Color.h"
#include <iostream>
#include <fstream>

ostream& operator<<( ostream& o, const color& c )
{ 
  int old_precision = o.precision( 3 );   
  o << " " << c.r_ << " " << c.g_ << " " << c.b_ << " setrgbcolor";   
  o.precision( old_precision );
  return o;
}


// More colors!!
  const color color_snow(0.996094, 0.976562, 0.976562);
  const color color_ghost(0.968750, 0.968750, 0.996094);
  const color color_GhostWhite(0.968750, 0.968750, 0.996094);
  const color color_white(0.957031, 0.957031, 0.957031);
  const color color_WhiteSmoke(0.957031, 0.957031, 0.957031);
  const color color_gainsboro(0.859375, 0.859375, 0.859375);
  const color color_floral(0.996094, 0.976562, 0.937500);
  const color color_FloralWhite(0.996094, 0.976562, 0.937500);
  const color color_old(0.988281, 0.957031, 0.898438);
  const color color_OldLace(0.988281, 0.957031, 0.898438);
  const color color_linen(0.976562, 0.937500, 0.898438);
  const color color_antique(0.976562, 0.917969, 0.839844);
  const color color_AntiqueWhite(0.976562, 0.917969, 0.839844);
  const color color_papaya(0.996094, 0.933594, 0.832031);
  const color color_PapayaWhip(0.996094, 0.933594, 0.832031);
  const color color_blanched(0.996094, 0.917969, 0.800781);
  const color color_BlanchedAlmond(0.996094, 0.917969, 0.800781);
  const color color_bisque(0.996094, 0.890625, 0.765625);
  const color color_peach(0.996094, 0.851562, 0.722656);
  const color color_PeachPuff(0.996094, 0.851562, 0.722656);
  const color color_navajo(0.996094, 0.867188, 0.675781);
  const color color_NavajoWhite(0.996094, 0.867188, 0.675781);
  const color color_moccasin(0.996094, 0.890625, 0.707031);
  const color color_cornsilk(0.996094, 0.968750, 0.859375);
  const color color_ivory(0.996094, 0.996094, 0.937500);
  const color color_lemon(0.996094, 0.976562, 0.800781);
  const color color_LemonChiffon(0.996094, 0.976562, 0.800781);
  const color color_seashell(0.996094, 0.957031, 0.929688);
  const color color_honeydew(0.937500, 0.996094, 0.937500);
  const color color_mint(0.957031, 0.996094, 0.976562);
  const color color_MintCream(0.957031, 0.996094, 0.976562);
  const color color_azure(0.937500, 0.996094, 0.996094);
  const color color_alice(0.937500, 0.968750, 0.996094);
  const color color_AliceBlue(0.937500, 0.968750, 0.996094);
  const color color_lavender(0.898438, 0.898438, 0.976562);
  const color color_LavenderBlush(0.996094, 0.937500, 0.957031);
  const color color_misty(0.996094, 0.890625, 0.878906);
  const color color_MistyRose(0.996094, 0.890625, 0.878906);
  const color color_black(0.000000, 0.000000, 0.000000);
  const color color_dark(0.183594, 0.308594, 0.308594);
  const color color_DarkSlateGray(0.183594, 0.308594, 0.308594);
  const color color_DarkSlateGrey(0.183594, 0.308594, 0.308594);
  const color color_dim(0.410156, 0.410156, 0.410156);
  const color color_DimGray(0.410156, 0.410156, 0.410156);
  const color color_DimGrey(0.410156, 0.410156, 0.410156);
  const color color_slate(0.437500, 0.500000, 0.562500);
  const color color_SlateGray(0.437500, 0.500000, 0.562500);
  const color color_SlateGrey(0.437500, 0.500000, 0.562500);
  const color color_light(0.464844, 0.531250, 0.597656);
  const color color_LightSlateGray(0.464844, 0.531250, 0.597656);
  const color color_LightSlateGrey(0.464844, 0.531250, 0.597656);
  const color color_gray(0.742188, 0.742188, 0.742188);
  const color color_grey(0.742188, 0.742188, 0.742188);
  const color color_LightGrey(0.824219, 0.824219, 0.824219);
  const color color_LightGray(0.824219, 0.824219, 0.824219);
  const color color_midnight(0.097656, 0.097656, 0.437500);
  const color color_MidnightBlue(0.097656, 0.097656, 0.437500);
  const color color_navy(0.000000, 0.000000, 0.500000);
  const color color_NavyBlue(0.000000, 0.000000, 0.500000);
  const color color_cornflower(0.390625, 0.582031, 0.925781);
  const color color_CornflowerBlue(0.390625, 0.582031, 0.925781);
  const color color_DarkSlateBlue(0.281250, 0.238281, 0.542969);
  const color color_SlateBlue(0.414062, 0.351562, 0.800781);
  const color color_medium(0.480469, 0.406250, 0.929688);
  const color color_MediumSlateBlue(0.480469, 0.406250, 0.929688);
  const color color_LightSlateBlue(0.515625, 0.437500, 0.996094);
  const color color_MediumBlue(0.000000, 0.000000, 0.800781);
  const color color_royal(0.253906, 0.410156, 0.878906);
  const color color_RoyalBlue(0.253906, 0.410156, 0.878906);
  const color color_blue(0.000000, 0.000000, 0.996094);
  const color color_dodger(0.117188, 0.562500, 0.996094);
  const color color_DodgerBlue(0.117188, 0.562500, 0.996094);
  const color color_deep(0.000000, 0.746094, 0.996094);
  const color color_DeepSkyBlue(0.000000, 0.746094, 0.996094);
  const color color_sky(0.527344, 0.804688, 0.917969);
  const color color_SkyBlue(0.527344, 0.804688, 0.917969);
  const color color_LightSkyBlue(0.527344, 0.804688, 0.976562);
  const color color_steel(0.273438, 0.507812, 0.703125);
  const color color_SteelBlue(0.273438, 0.507812, 0.703125);
  const color color_LightSteelBlue(0.687500, 0.765625, 0.867188);
  const color color_LightBlue(0.675781, 0.843750, 0.898438);
  const color color_powder(0.687500, 0.875000, 0.898438);
  const color color_PowderBlue(0.687500, 0.875000, 0.898438);
  const color color_pale(0.683594, 0.929688, 0.929688);
  const color color_PaleTurquoise(0.683594, 0.929688, 0.929688);
  const color color_DarkTurquoise(0.000000, 0.804688, 0.816406);
  const color color_MediumTurquoise(0.281250, 0.816406, 0.796875);
  const color color_turquoise(0.250000, 0.875000, 0.812500);
  const color color_cyan(0.000000, 0.996094, 0.996094);
  const color color_LightCyan(0.875000, 0.996094, 0.996094);
  const color color_cadet(0.371094, 0.617188, 0.625000);
  const color color_CadetBlue(0.371094, 0.617188, 0.625000);
  const color color_MediumAquamarine(0.398438, 0.800781, 0.664062);
  const color color_aquamarine(0.496094, 0.996094, 0.828125);
  const color color_DarkGreen(0.000000, 0.390625, 0.000000);
  const color color_DarkOliveGreen(0.332031, 0.417969, 0.183594);
  const color color_DarkSeaGreen(0.558594, 0.734375, 0.558594);
  const color color_sea(0.179688, 0.542969, 0.339844);
  const color color_SeaGreen(0.179688, 0.542969, 0.339844);
  const color color_MediumSeaGreen(0.234375, 0.699219, 0.441406);
  const color color_LightSeaGreen(0.125000, 0.695312, 0.664062);
  const color color_PaleGreen(0.593750, 0.980469, 0.593750);
  const color color_spring(0.000000, 0.996094, 0.496094);
  const color color_SpringGreen(0.000000, 0.996094, 0.496094);
  const color color_lawn(0.484375, 0.984375, 0.000000);
  const color color_LawnGreen(0.484375, 0.984375, 0.000000);
  const color color_green(0.000000, 0.996094, 0.000000);
  const color color_chartreuse(0.496094, 0.996094, 0.000000);
  const color color_MediumSpringGreen(0.000000, 0.976562, 0.601562);
  const color color_GreenYellow(0.675781, 0.996094, 0.183594);
  const color color_lime(0.195312, 0.800781, 0.195312);
  const color color_LimeGreen(0.195312, 0.800781, 0.195312);
  const color color_yellow(0.601562, 0.800781, 0.195312);
  const color color_YellowGreen(0.601562, 0.800781, 0.195312);
  const color color_forest(0.132812, 0.542969, 0.132812);
  const color color_ForestGreen(0.132812, 0.542969, 0.132812);
  const color color_olive(0.417969, 0.554688, 0.136719);
  const color color_OliveDrab(0.417969, 0.554688, 0.136719);
  const color color_DarkKhaki(0.738281, 0.714844, 0.417969);
  const color color_khaki(0.937500, 0.898438, 0.546875);
  const color color_PaleGoldenrod(0.929688, 0.906250, 0.664062);
  const color color_LightGoldenrodYellow(0.976562, 0.976562, 0.820312);
  const color color_LightYellow(0.996094, 0.996094, 0.875000);
  const color color_gold(0.996094, 0.839844, 0.000000);
  const color color_LightGoldenrod(0.929688, 0.863281, 0.507812);
  const color color_goldenrod(0.851562, 0.644531, 0.125000);
  const color color_DarkGoldenrod(0.718750, 0.523438, 0.042969);
  const color color_rosy(0.734375, 0.558594, 0.558594);
  const color color_RosyBrown(0.734375, 0.558594, 0.558594);
  const color color_indian(0.800781, 0.359375, 0.359375);
  const color color_IndianRed(0.800781, 0.359375, 0.359375);
  const color color_saddle(0.542969, 0.269531, 0.074219);
  const color color_SaddleBrown(0.542969, 0.269531, 0.074219);
  const color color_sienna(0.625000, 0.320312, 0.175781);
  const color color_peru(0.800781, 0.519531, 0.246094);
  const color color_burlywood(0.867188, 0.718750, 0.527344);
  const color color_beige(0.957031, 0.957031, 0.859375);
  const color color_wheat(0.957031, 0.867188, 0.699219);
  const color color_sandy(0.953125, 0.640625, 0.375000);
  const color color_SandyBrown(0.953125, 0.640625, 0.375000);
  const color color_tan(0.820312, 0.703125, 0.546875);
  const color color_chocolate(0.820312, 0.410156, 0.117188);
  const color color_firebrick(0.695312, 0.132812, 0.132812);
  const color color_brown(0.644531, 0.164062, 0.164062);
  const color color_DarkSalmon(0.910156, 0.585938, 0.476562);
  const color color_salmon(0.976562, 0.500000, 0.445312);
  const color color_LightSalmon(0.996094, 0.625000, 0.476562);
  const color color_orange(0.996094, 0.644531, 0.000000);
  const color color_DarkOrange(0.996094, 0.546875, 0.000000);
  const color color_coral(0.996094, 0.496094, 0.312500);
  const color color_LightCoral(0.937500, 0.500000, 0.500000);
  const color color_tomato(0.996094, 0.386719, 0.277344);
  const color color_OrangeRed(0.996094, 0.269531, 0.000000);
  const color color_red(0.996094, 0.000000, 0.000000);
  const color color_hot(0.996094, 0.410156, 0.703125);
  const color color_HotPink(0.996094, 0.410156, 0.703125);
  const color color_DeepPink(0.996094, 0.078125, 0.574219);
  const color color_pink(0.996094, 0.750000, 0.792969);
  const color color_LightPink(0.996094, 0.710938, 0.753906);
  const color color_PaleVioletRed(0.855469, 0.437500, 0.574219);
  const color color_maroon(0.687500, 0.187500, 0.375000);
  const color color_MediumVioletRed(0.777344, 0.082031, 0.519531);
  const color color_violet(0.812500, 0.125000, 0.562500);
  const color color_VioletRed(0.812500, 0.125000, 0.562500);
  const color color_magenta(0.996094, 0.000000, 0.996094);
  const color color_plum(0.863281, 0.625000, 0.863281);
  const color color_orchid(0.851562, 0.437500, 0.835938);
  const color color_MediumOrchid(0.726562, 0.332031, 0.824219);
  const color color_DarkOrchid(0.597656, 0.195312, 0.796875);
  const color color_DarkViolet(0.578125, 0.000000, 0.824219);
  const color color_BlueViolet(0.539062, 0.167969, 0.882812);
  const color color_purple(0.625000, 0.125000, 0.937500);
  const color color_MediumPurple(0.574219, 0.437500, 0.855469);
  const color color_thistle(0.843750, 0.746094, 0.843750);
  const color color_snow1(0.996094, 0.976562, 0.976562);
  const color color_snow2(0.929688, 0.910156, 0.910156);
  const color color_snow3(0.800781, 0.785156, 0.785156);
  const color color_snow4(0.542969, 0.535156, 0.535156);
  const color color_seashell1(0.996094, 0.957031, 0.929688);
  const color color_seashell2(0.929688, 0.894531, 0.867188);
  const color color_seashell3(0.800781, 0.769531, 0.746094);
  const color color_seashell4(0.542969, 0.523438, 0.507812);
  const color color_AntiqueWhite1(0.996094, 0.933594, 0.855469);
  const color color_AntiqueWhite2(0.929688, 0.871094, 0.796875);
  const color color_AntiqueWhite3(0.800781, 0.750000, 0.687500);
  const color color_AntiqueWhite4(0.542969, 0.511719, 0.468750);
  const color color_bisque1(0.996094, 0.890625, 0.765625);
  const color color_bisque2(0.929688, 0.832031, 0.714844);
  const color color_bisque3(0.800781, 0.714844, 0.617188);
  const color color_bisque4(0.542969, 0.488281, 0.417969);
  const color color_PeachPuff1(0.996094, 0.851562, 0.722656);
  const color color_PeachPuff2(0.929688, 0.792969, 0.675781);
  const color color_PeachPuff3(0.800781, 0.683594, 0.582031);
  const color color_PeachPuff4(0.542969, 0.464844, 0.394531);
  const color color_NavajoWhite1(0.996094, 0.867188, 0.675781);
  const color color_NavajoWhite2(0.929688, 0.808594, 0.628906);
  const color color_NavajoWhite3(0.800781, 0.699219, 0.542969);
  const color color_NavajoWhite4(0.542969, 0.472656, 0.367188);
  const color color_LemonChiffon1(0.996094, 0.976562, 0.800781);
  const color color_LemonChiffon2(0.929688, 0.910156, 0.746094);
  const color color_LemonChiffon3(0.800781, 0.785156, 0.644531);
  const color color_LemonChiffon4(0.542969, 0.535156, 0.437500);
  const color color_cornsilk1(0.996094, 0.968750, 0.859375);
  const color color_cornsilk2(0.929688, 0.906250, 0.800781);
  const color color_cornsilk3(0.800781, 0.781250, 0.691406);
  const color color_cornsilk4(0.542969, 0.531250, 0.468750);
  const color color_ivory1(0.996094, 0.996094, 0.937500);
  const color color_ivory2(0.929688, 0.929688, 0.875000);
  const color color_ivory3(0.800781, 0.800781, 0.753906);
  const color color_ivory4(0.542969, 0.542969, 0.511719);
  const color color_honeydew1(0.937500, 0.996094, 0.937500);
  const color color_honeydew2(0.875000, 0.929688, 0.875000);
  const color color_honeydew3(0.753906, 0.800781, 0.753906);
  const color color_honeydew4(0.511719, 0.542969, 0.511719);
  const color color_LavenderBlush1(0.996094, 0.937500, 0.957031);
  const color color_LavenderBlush2(0.929688, 0.875000, 0.894531);
  const color color_LavenderBlush3(0.800781, 0.753906, 0.769531);
  const color color_LavenderBlush4(0.542969, 0.511719, 0.523438);
  const color color_MistyRose1(0.996094, 0.890625, 0.878906);
  const color color_MistyRose2(0.929688, 0.832031, 0.820312);
  const color color_MistyRose3(0.800781, 0.714844, 0.707031);
  const color color_MistyRose4(0.542969, 0.488281, 0.480469);
  const color color_azure1(0.937500, 0.996094, 0.996094);
  const color color_azure2(0.875000, 0.929688, 0.929688);
  const color color_azure3(0.753906, 0.800781, 0.800781);
  const color color_azure4(0.511719, 0.542969, 0.542969);
  const color color_SlateBlue1(0.511719, 0.433594, 0.996094);
  const color color_SlateBlue2(0.476562, 0.402344, 0.929688);
  const color color_SlateBlue3(0.410156, 0.347656, 0.800781);
  const color color_SlateBlue4(0.277344, 0.234375, 0.542969);
  const color color_RoyalBlue1(0.281250, 0.460938, 0.996094);
  const color color_RoyalBlue2(0.261719, 0.429688, 0.929688);
  const color color_RoyalBlue3(0.226562, 0.371094, 0.800781);
  const color color_RoyalBlue4(0.152344, 0.250000, 0.542969);
  const color color_blue1(0.000000, 0.000000, 0.996094);
  const color color_blue2(0.000000, 0.000000, 0.929688);
  const color color_blue3(0.000000, 0.000000, 0.800781);
  const color color_blue4(0.000000, 0.000000, 0.542969);
  const color color_DodgerBlue1(0.117188, 0.562500, 0.996094);
  const color color_DodgerBlue2(0.109375, 0.523438, 0.929688);
  const color color_DodgerBlue3(0.093750, 0.453125, 0.800781);
  const color color_DodgerBlue4(0.062500, 0.304688, 0.542969);
  const color color_SteelBlue1(0.386719, 0.718750, 0.996094);
  const color color_SteelBlue2(0.359375, 0.671875, 0.929688);
  const color color_SteelBlue3(0.308594, 0.578125, 0.800781);
  const color color_SteelBlue4(0.210938, 0.390625, 0.542969);
  const color color_DeepSkyBlue1(0.000000, 0.746094, 0.996094);
  const color color_DeepSkyBlue2(0.000000, 0.695312, 0.929688);
  const color color_DeepSkyBlue3(0.000000, 0.601562, 0.800781);
  const color color_DeepSkyBlue4(0.000000, 0.406250, 0.542969);
  const color color_SkyBlue1(0.527344, 0.804688, 0.996094);
  const color color_SkyBlue2(0.492188, 0.750000, 0.929688);
  const color color_SkyBlue3(0.421875, 0.648438, 0.800781);
  const color color_SkyBlue4(0.289062, 0.437500, 0.542969);
  const color color_LightSkyBlue1(0.687500, 0.882812, 0.996094);
  const color color_LightSkyBlue2(0.640625, 0.824219, 0.929688);
  const color color_LightSkyBlue3(0.550781, 0.710938, 0.800781);
  const color color_LightSkyBlue4(0.375000, 0.480469, 0.542969);
  const color color_SlateGray1(0.773438, 0.882812, 0.996094);
  const color color_SlateGray2(0.722656, 0.824219, 0.929688);
  const color color_SlateGray3(0.621094, 0.710938, 0.800781);
  const color color_SlateGray4(0.421875, 0.480469, 0.542969);
  const color color_LightSteelBlue1(0.789062, 0.878906, 0.996094);
  const color color_LightSteelBlue2(0.734375, 0.820312, 0.929688);
  const color color_LightSteelBlue3(0.632812, 0.707031, 0.800781);
  const color color_LightSteelBlue4(0.429688, 0.480469, 0.542969);
  const color color_LightBlue1(0.746094, 0.933594, 0.996094);
  const color color_LightBlue2(0.695312, 0.871094, 0.929688);
  const color color_LightBlue3(0.601562, 0.750000, 0.800781);
  const color color_LightBlue4(0.406250, 0.511719, 0.542969);
  const color color_LightCyan1(0.875000, 0.996094, 0.996094);
  const color color_LightCyan2(0.816406, 0.929688, 0.929688);
  const color color_LightCyan3(0.703125, 0.800781, 0.800781);
  const color color_LightCyan4(0.476562, 0.542969, 0.542969);
  const color color_PaleTurquoise1(0.730469, 0.996094, 0.996094);
  const color color_PaleTurquoise2(0.679688, 0.929688, 0.929688);
  const color color_PaleTurquoise3(0.585938, 0.800781, 0.800781);
  const color color_PaleTurquoise4(0.398438, 0.542969, 0.542969);
  const color color_CadetBlue1(0.593750, 0.957031, 0.996094);
  const color color_CadetBlue2(0.554688, 0.894531, 0.929688);
  const color color_CadetBlue3(0.476562, 0.769531, 0.800781);
  const color color_CadetBlue4(0.324219, 0.523438, 0.542969);
  const color color_turquoise1(0.000000, 0.957031, 0.996094);
  const color color_turquoise2(0.000000, 0.894531, 0.929688);
  const color color_turquoise3(0.000000, 0.769531, 0.800781);
  const color color_turquoise4(0.000000, 0.523438, 0.542969);
  const color color_cyan1(0.000000, 0.996094, 0.996094);
  const color color_cyan2(0.000000, 0.929688, 0.929688);
  const color color_cyan3(0.000000, 0.800781, 0.800781);
  const color color_cyan4(0.000000, 0.542969, 0.542969);
  const color color_DarkSlateGray1(0.589844, 0.996094, 0.996094);
  const color color_DarkSlateGray2(0.550781, 0.929688, 0.929688);
  const color color_DarkSlateGray3(0.472656, 0.800781, 0.800781);
  const color color_DarkSlateGray4(0.320312, 0.542969, 0.542969);
  const color color_aquamarine1(0.496094, 0.996094, 0.828125);
  const color color_aquamarine2(0.460938, 0.929688, 0.773438);
  const color color_aquamarine3(0.398438, 0.800781, 0.664062);
  const color color_aquamarine4(0.269531, 0.542969, 0.453125);
  const color color_DarkSeaGreen1(0.753906, 0.996094, 0.753906);
  const color color_DarkSeaGreen2(0.703125, 0.929688, 0.703125);
  const color color_DarkSeaGreen3(0.605469, 0.800781, 0.605469);
  const color color_DarkSeaGreen4(0.410156, 0.542969, 0.410156);
  const color color_SeaGreen1(0.328125, 0.996094, 0.621094);
  const color color_SeaGreen2(0.304688, 0.929688, 0.578125);
  const color color_SeaGreen3(0.261719, 0.800781, 0.500000);
  const color color_SeaGreen4(0.179688, 0.542969, 0.339844);
  const color color_PaleGreen1(0.601562, 0.996094, 0.601562);
  const color color_PaleGreen2(0.562500, 0.929688, 0.562500);
  const color color_PaleGreen3(0.484375, 0.800781, 0.484375);
  const color color_PaleGreen4(0.328125, 0.542969, 0.328125);
  const color color_SpringGreen1(0.000000, 0.996094, 0.496094);
  const color color_SpringGreen2(0.000000, 0.929688, 0.460938);
  const color color_SpringGreen3(0.000000, 0.800781, 0.398438);
  const color color_SpringGreen4(0.000000, 0.542969, 0.269531);
  const color color_green1(0.000000, 0.996094, 0.000000);
  const color color_green2(0.000000, 0.929688, 0.000000);
  const color color_green3(0.000000, 0.800781, 0.000000);
  const color color_green4(0.000000, 0.542969, 0.000000);
  const color color_chartreuse1(0.496094, 0.996094, 0.000000);
  const color color_chartreuse2(0.460938, 0.929688, 0.000000);
  const color color_chartreuse3(0.398438, 0.800781, 0.000000);
  const color color_chartreuse4(0.269531, 0.542969, 0.000000);
  const color color_OliveDrab1(0.750000, 0.996094, 0.242188);
  const color color_OliveDrab2(0.699219, 0.929688, 0.226562);
  const color color_OliveDrab3(0.601562, 0.800781, 0.195312);
  const color color_OliveDrab4(0.410156, 0.542969, 0.132812);
  const color color_DarkOliveGreen1(0.789062, 0.996094, 0.437500);
  const color color_DarkOliveGreen2(0.734375, 0.929688, 0.406250);
  const color color_DarkOliveGreen3(0.632812, 0.800781, 0.351562);
  const color color_DarkOliveGreen4(0.429688, 0.542969, 0.238281);
  const color color_khaki1(0.996094, 0.960938, 0.558594);
  const color color_khaki2(0.929688, 0.898438, 0.519531);
  const color color_khaki3(0.800781, 0.773438, 0.449219);
  const color color_khaki4(0.542969, 0.523438, 0.304688);
  const color color_LightGoldenrod1(0.996094, 0.921875, 0.542969);
  const color color_LightGoldenrod2(0.929688, 0.859375, 0.507812);
  const color color_LightGoldenrod3(0.800781, 0.742188, 0.437500);
  const color color_LightGoldenrod4(0.542969, 0.503906, 0.296875);
  const color color_LightYellow1(0.996094, 0.996094, 0.875000);
  const color color_LightYellow2(0.929688, 0.929688, 0.816406);
  const color color_LightYellow3(0.800781, 0.800781, 0.703125);
  const color color_LightYellow4(0.542969, 0.542969, 0.476562);
  const color color_yellow1(0.996094, 0.996094, 0.000000);
  const color color_yellow2(0.929688, 0.929688, 0.000000);
  const color color_yellow3(0.800781, 0.800781, 0.000000);
  const color color_yellow4(0.542969, 0.542969, 0.000000);
  const color color_gold1(0.996094, 0.839844, 0.000000);
  const color color_gold2(0.929688, 0.785156, 0.000000);
  const color color_gold3(0.800781, 0.675781, 0.000000);
  const color color_gold4(0.542969, 0.457031, 0.000000);
  const color color_goldenrod1(0.996094, 0.753906, 0.144531);
  const color color_goldenrod2(0.929688, 0.703125, 0.132812);
  const color color_goldenrod3(0.800781, 0.605469, 0.113281);
  const color color_goldenrod4(0.542969, 0.410156, 0.078125);
  const color color_DarkGoldenrod1(0.996094, 0.722656, 0.058594);
  const color color_DarkGoldenrod2(0.929688, 0.675781, 0.054688);
  const color color_DarkGoldenrod3(0.800781, 0.582031, 0.046875);
  const color color_DarkGoldenrod4(0.542969, 0.394531, 0.031250);
  const color color_RosyBrown1(0.996094, 0.753906, 0.753906);
  const color color_RosyBrown2(0.929688, 0.703125, 0.703125);
  const color color_RosyBrown3(0.800781, 0.605469, 0.605469);
  const color color_RosyBrown4(0.542969, 0.410156, 0.410156);
  const color color_IndianRed1(0.996094, 0.414062, 0.414062);
  const color color_IndianRed2(0.929688, 0.386719, 0.386719);
  const color color_IndianRed3(0.800781, 0.332031, 0.332031);
  const color color_IndianRed4(0.542969, 0.226562, 0.226562);
  const color color_sienna1(0.996094, 0.507812, 0.277344);
  const color color_sienna2(0.929688, 0.472656, 0.257812);
  const color color_sienna3(0.800781, 0.406250, 0.222656);
  const color color_sienna4(0.542969, 0.277344, 0.148438);
  const color color_burlywood1(0.996094, 0.824219, 0.605469);
  const color color_burlywood2(0.929688, 0.769531, 0.566406);
  const color color_burlywood3(0.800781, 0.664062, 0.488281);
  const color color_burlywood4(0.542969, 0.449219, 0.332031);
  const color color_wheat1(0.996094, 0.902344, 0.726562);
  const color color_wheat2(0.929688, 0.843750, 0.679688);
  const color color_wheat3(0.800781, 0.726562, 0.585938);
  const color color_wheat4(0.542969, 0.492188, 0.398438);
  const color color_tan1(0.996094, 0.644531, 0.308594);
  const color color_tan2(0.929688, 0.601562, 0.285156);
  const color color_tan3(0.800781, 0.519531, 0.246094);
  const color color_tan4(0.542969, 0.351562, 0.167969);
  const color color_chocolate1(0.996094, 0.496094, 0.140625);
  const color color_chocolate2(0.929688, 0.460938, 0.128906);
  const color color_chocolate3(0.800781, 0.398438, 0.113281);
  const color color_chocolate4(0.542969, 0.269531, 0.074219);
  const color color_firebrick1(0.996094, 0.187500, 0.187500);
  const color color_firebrick2(0.929688, 0.171875, 0.171875);
  const color color_firebrick3(0.800781, 0.148438, 0.148438);
  const color color_firebrick4(0.542969, 0.101562, 0.101562);
  const color color_brown1(0.996094, 0.250000, 0.250000);
  const color color_brown2(0.929688, 0.230469, 0.230469);
  const color color_brown3(0.800781, 0.199219, 0.199219);
  const color color_brown4(0.542969, 0.136719, 0.136719);
  const color color_salmon1(0.996094, 0.546875, 0.410156);
  const color color_salmon2(0.929688, 0.507812, 0.382812);
  const color color_salmon3(0.800781, 0.437500, 0.328125);
  const color color_salmon4(0.542969, 0.296875, 0.222656);
  const color color_LightSalmon1(0.996094, 0.625000, 0.476562);
  const color color_LightSalmon2(0.929688, 0.582031, 0.445312);
  const color color_LightSalmon3(0.800781, 0.503906, 0.382812);
  const color color_LightSalmon4(0.542969, 0.339844, 0.257812);
  const color color_orange1(0.996094, 0.644531, 0.000000);
  const color color_orange2(0.929688, 0.601562, 0.000000);
  const color color_orange3(0.800781, 0.519531, 0.000000);
  const color color_orange4(0.542969, 0.351562, 0.000000);
  const color color_DarkOrange1(0.996094, 0.496094, 0.000000);
  const color color_DarkOrange2(0.929688, 0.460938, 0.000000);
  const color color_DarkOrange3(0.800781, 0.398438, 0.000000);
  const color color_DarkOrange4(0.542969, 0.269531, 0.000000);
  const color color_coral1(0.996094, 0.445312, 0.335938);
  const color color_coral2(0.929688, 0.414062, 0.312500);
  const color color_coral3(0.800781, 0.355469, 0.269531);
  const color color_coral4(0.542969, 0.242188, 0.183594);
  const color color_tomato1(0.996094, 0.386719, 0.277344);
  const color color_tomato2(0.929688, 0.359375, 0.257812);
  const color color_tomato3(0.800781, 0.308594, 0.222656);
  const color color_tomato4(0.542969, 0.210938, 0.148438);
  const color color_OrangeRed1(0.996094, 0.269531, 0.000000);
  const color color_OrangeRed2(0.929688, 0.250000, 0.000000);
  const color color_OrangeRed3(0.800781, 0.214844, 0.000000);
  const color color_OrangeRed4(0.542969, 0.144531, 0.000000);
  const color color_red1(0.996094, 0.000000, 0.000000);
  const color color_red2(0.929688, 0.000000, 0.000000);
  const color color_red3(0.800781, 0.000000, 0.000000);
  const color color_red4(0.542969, 0.000000, 0.000000);
  const color color_DeepPink1(0.996094, 0.078125, 0.574219);
  const color color_DeepPink2(0.929688, 0.070312, 0.535156);
  const color color_DeepPink3(0.800781, 0.062500, 0.460938);
  const color color_DeepPink4(0.542969, 0.039062, 0.312500);
  const color color_HotPink1(0.996094, 0.429688, 0.703125);
  const color color_HotPink2(0.929688, 0.414062, 0.652344);
  const color color_HotPink3(0.800781, 0.375000, 0.562500);
  const color color_HotPink4(0.542969, 0.226562, 0.382812);
  const color color_pink1(0.996094, 0.707031, 0.769531);
  const color color_pink2(0.929688, 0.660156, 0.718750);
  const color color_pink3(0.800781, 0.566406, 0.617188);
  const color color_pink4(0.542969, 0.386719, 0.421875);
  const color color_LightPink1(0.996094, 0.679688, 0.722656);
  const color color_LightPink2(0.929688, 0.632812, 0.675781);
  const color color_LightPink3(0.800781, 0.546875, 0.582031);
  const color color_LightPink4(0.542969, 0.371094, 0.394531);
  const color color_PaleVioletRed1(0.996094, 0.507812, 0.667969);
  const color color_PaleVioletRed2(0.929688, 0.472656, 0.621094);
  const color color_PaleVioletRed3(0.800781, 0.406250, 0.535156);
  const color color_PaleVioletRed4(0.542969, 0.277344, 0.363281);
  const color color_maroon1(0.996094, 0.203125, 0.699219);
  const color color_maroon2(0.929688, 0.187500, 0.652344);
  const color color_maroon3(0.800781, 0.160156, 0.562500);
  const color color_maroon4(0.542969, 0.109375, 0.382812);
  const color color_VioletRed1(0.996094, 0.242188, 0.585938);
  const color color_VioletRed2(0.929688, 0.226562, 0.546875);
  const color color_VioletRed3(0.800781, 0.195312, 0.468750);
  const color color_VioletRed4(0.542969, 0.132812, 0.320312);
  const color color_magenta1(0.996094, 0.000000, 0.996094);
  const color color_magenta2(0.929688, 0.000000, 0.929688);
  const color color_magenta3(0.800781, 0.000000, 0.800781);
  const color color_magenta4(0.542969, 0.000000, 0.542969);
  const color color_orchid1(0.996094, 0.511719, 0.976562);
  const color color_orchid2(0.929688, 0.476562, 0.910156);
  const color color_orchid3(0.800781, 0.410156, 0.785156);
  const color color_orchid4(0.542969, 0.277344, 0.535156);
  const color color_plum1(0.996094, 0.730469, 0.996094);
  const color color_plum2(0.929688, 0.679688, 0.929688);
  const color color_plum3(0.800781, 0.585938, 0.800781);
  const color color_plum4(0.542969, 0.398438, 0.542969);
  const color color_MediumOrchid1(0.875000, 0.398438, 0.996094);
  const color color_MediumOrchid2(0.816406, 0.371094, 0.929688);
  const color color_MediumOrchid3(0.703125, 0.320312, 0.800781);
  const color color_MediumOrchid4(0.476562, 0.214844, 0.542969);
  const color color_DarkOrchid1(0.746094, 0.242188, 0.996094);
  const color color_DarkOrchid2(0.695312, 0.226562, 0.929688);
  const color color_DarkOrchid3(0.601562, 0.195312, 0.800781);
  const color color_DarkOrchid4(0.406250, 0.132812, 0.542969);
  const color color_purple1(0.605469, 0.187500, 0.996094);
  const color color_purple2(0.566406, 0.171875, 0.929688);
  const color color_purple3(0.488281, 0.148438, 0.800781);
  const color color_purple4(0.332031, 0.101562, 0.542969);
  const color color_MediumPurple1(0.667969, 0.507812, 0.996094);
  const color color_MediumPurple2(0.621094, 0.472656, 0.929688);
  const color color_MediumPurple3(0.535156, 0.406250, 0.800781);
  const color color_MediumPurple4(0.363281, 0.277344, 0.542969);
  const color color_thistle1(0.996094, 0.878906, 0.996094);
  const color color_thistle2(0.929688, 0.820312, 0.929688);
  const color color_thistle3(0.800781, 0.707031, 0.800781);
  const color color_thistle4(0.542969, 0.480469, 0.542969);
  const color color_gray0(0.000000, 0.000000, 0.000000);
  const color color_grey0(0.000000, 0.000000, 0.000000);
  const color color_gray1(0.011719, 0.011719, 0.011719);
  const color color_grey1(0.011719, 0.011719, 0.011719);
  const color color_gray2(0.019531, 0.019531, 0.019531);
  const color color_grey2(0.019531, 0.019531, 0.019531);
  const color color_gray3(0.031250, 0.031250, 0.031250);
  const color color_grey3(0.031250, 0.031250, 0.031250);
  const color color_gray4(0.039062, 0.039062, 0.039062);
  const color color_grey4(0.039062, 0.039062, 0.039062);
  const color color_gray5(0.050781, 0.050781, 0.050781);
  const color color_grey5(0.050781, 0.050781, 0.050781);
  const color color_gray6(0.058594, 0.058594, 0.058594);
  const color color_grey6(0.058594, 0.058594, 0.058594);
  const color color_gray7(0.070312, 0.070312, 0.070312);
  const color color_grey7(0.070312, 0.070312, 0.070312);
  const color color_gray8(0.078125, 0.078125, 0.078125);
  const color color_grey8(0.078125, 0.078125, 0.078125);
  const color color_gray9(0.089844, 0.089844, 0.089844);
  const color color_grey9(0.089844, 0.089844, 0.089844);
  const color color_gray10(0.101562, 0.101562, 0.101562);
  const color color_grey10(0.101562, 0.101562, 0.101562);
  const color color_gray11(0.109375, 0.109375, 0.109375);
  const color color_grey11(0.109375, 0.109375, 0.109375);
  const color color_gray12(0.121094, 0.121094, 0.121094);
  const color color_grey12(0.121094, 0.121094, 0.121094);
  const color color_gray13(0.128906, 0.128906, 0.128906);
  const color color_grey13(0.128906, 0.128906, 0.128906);
  const color color_gray14(0.140625, 0.140625, 0.140625);
  const color color_grey14(0.140625, 0.140625, 0.140625);
  const color color_gray15(0.148438, 0.148438, 0.148438);
  const color color_grey15(0.148438, 0.148438, 0.148438);
  const color color_gray16(0.160156, 0.160156, 0.160156);
  const color color_grey16(0.160156, 0.160156, 0.160156);
  const color color_gray17(0.167969, 0.167969, 0.167969);
  const color color_grey17(0.167969, 0.167969, 0.167969);
  const color color_gray18(0.179688, 0.179688, 0.179688);
  const color color_grey18(0.179688, 0.179688, 0.179688);
  const color color_gray19(0.187500, 0.187500, 0.187500);
  const color color_grey19(0.187500, 0.187500, 0.187500);
  const color color_gray20(0.199219, 0.199219, 0.199219);
  const color color_grey20(0.199219, 0.199219, 0.199219);
  const color color_gray21(0.210938, 0.210938, 0.210938);
  const color color_grey21(0.210938, 0.210938, 0.210938);
  const color color_gray22(0.218750, 0.218750, 0.218750);
  const color color_grey22(0.218750, 0.218750, 0.218750);
  const color color_gray23(0.230469, 0.230469, 0.230469);
  const color color_grey23(0.230469, 0.230469, 0.230469);
  const color color_gray24(0.238281, 0.238281, 0.238281);
  const color color_grey24(0.238281, 0.238281, 0.238281);
  const color color_gray25(0.250000, 0.250000, 0.250000);
  const color color_grey25(0.250000, 0.250000, 0.250000);
  const color color_gray26(0.257812, 0.257812, 0.257812);
  const color color_grey26(0.257812, 0.257812, 0.257812);
  const color color_gray27(0.269531, 0.269531, 0.269531);
  const color color_grey27(0.269531, 0.269531, 0.269531);
  const color color_gray28(0.277344, 0.277344, 0.277344);
  const color color_grey28(0.277344, 0.277344, 0.277344);
  const color color_gray29(0.289062, 0.289062, 0.289062);
  const color color_grey29(0.289062, 0.289062, 0.289062);
  const color color_gray30(0.300781, 0.300781, 0.300781);
  const color color_grey30(0.300781, 0.300781, 0.300781);
  const color color_gray31(0.308594, 0.308594, 0.308594);
  const color color_grey31(0.308594, 0.308594, 0.308594);
  const color color_gray32(0.320312, 0.320312, 0.320312);
  const color color_grey32(0.320312, 0.320312, 0.320312);
  const color color_gray33(0.328125, 0.328125, 0.328125);
  const color color_grey33(0.328125, 0.328125, 0.328125);
  const color color_gray34(0.339844, 0.339844, 0.339844);
  const color color_grey34(0.339844, 0.339844, 0.339844);
  const color color_gray35(0.347656, 0.347656, 0.347656);
  const color color_grey35(0.347656, 0.347656, 0.347656);
  const color color_gray36(0.359375, 0.359375, 0.359375);
  const color color_grey36(0.359375, 0.359375, 0.359375);
  const color color_gray37(0.367188, 0.367188, 0.367188);
  const color color_grey37(0.367188, 0.367188, 0.367188);
  const color color_gray38(0.378906, 0.378906, 0.378906);
  const color color_grey38(0.378906, 0.378906, 0.378906);
  const color color_gray39(0.386719, 0.386719, 0.386719);
  const color color_grey39(0.386719, 0.386719, 0.386719);
  const color color_gray40(0.398438, 0.398438, 0.398438);
  const color color_grey40(0.398438, 0.398438, 0.398438);
  const color color_gray41(0.410156, 0.410156, 0.410156);
  const color color_grey41(0.410156, 0.410156, 0.410156);
  const color color_gray42(0.417969, 0.417969, 0.417969);
  const color color_grey42(0.417969, 0.417969, 0.417969);
  const color color_gray43(0.429688, 0.429688, 0.429688);
  const color color_grey43(0.429688, 0.429688, 0.429688);
  const color color_gray44(0.437500, 0.437500, 0.437500);
  const color color_grey44(0.437500, 0.437500, 0.437500);
  const color color_gray45(0.449219, 0.449219, 0.449219);
  const color color_grey45(0.449219, 0.449219, 0.449219);
  const color color_gray46(0.457031, 0.457031, 0.457031);
  const color color_grey46(0.457031, 0.457031, 0.457031);
  const color color_gray47(0.468750, 0.468750, 0.468750);
  const color color_grey47(0.468750, 0.468750, 0.468750);
  const color color_gray48(0.476562, 0.476562, 0.476562);
  const color color_grey48(0.476562, 0.476562, 0.476562);
  const color color_gray49(0.488281, 0.488281, 0.488281);
  const color color_grey49(0.488281, 0.488281, 0.488281);
  const color color_gray50(0.496094, 0.496094, 0.496094);
  const color color_grey50(0.496094, 0.496094, 0.496094);
  const color color_gray51(0.507812, 0.507812, 0.507812);
  const color color_grey51(0.507812, 0.507812, 0.507812);
  const color color_gray52(0.519531, 0.519531, 0.519531);
  const color color_grey52(0.519531, 0.519531, 0.519531);
  const color color_gray53(0.527344, 0.527344, 0.527344);
  const color color_grey53(0.527344, 0.527344, 0.527344);
  const color color_gray54(0.539062, 0.539062, 0.539062);
  const color color_grey54(0.539062, 0.539062, 0.539062);
  const color color_gray55(0.546875, 0.546875, 0.546875);
  const color color_grey55(0.546875, 0.546875, 0.546875);
  const color color_gray56(0.558594, 0.558594, 0.558594);
  const color color_grey56(0.558594, 0.558594, 0.558594);
  const color color_gray57(0.566406, 0.566406, 0.566406);
  const color color_grey57(0.566406, 0.566406, 0.566406);
  const color color_gray58(0.578125, 0.578125, 0.578125);
  const color color_grey58(0.578125, 0.578125, 0.578125);
  const color color_gray59(0.585938, 0.585938, 0.585938);
  const color color_grey59(0.585938, 0.585938, 0.585938);
  const color color_gray60(0.597656, 0.597656, 0.597656);
  const color color_grey60(0.597656, 0.597656, 0.597656);
  const color color_gray61(0.609375, 0.609375, 0.609375);
  const color color_grey61(0.609375, 0.609375, 0.609375);
  const color color_gray62(0.617188, 0.617188, 0.617188);
  const color color_grey62(0.617188, 0.617188, 0.617188);
  const color color_gray63(0.628906, 0.628906, 0.628906);
  const color color_grey63(0.628906, 0.628906, 0.628906);
  const color color_gray64(0.636719, 0.636719, 0.636719);
  const color color_grey64(0.636719, 0.636719, 0.636719);
  const color color_gray65(0.648438, 0.648438, 0.648438);
  const color color_grey65(0.648438, 0.648438, 0.648438);
  const color color_gray66(0.656250, 0.656250, 0.656250);
  const color color_grey66(0.656250, 0.656250, 0.656250);
  const color color_gray67(0.667969, 0.667969, 0.667969);
  const color color_grey67(0.667969, 0.667969, 0.667969);
  const color color_gray68(0.675781, 0.675781, 0.675781);
  const color color_grey68(0.675781, 0.675781, 0.675781);
  const color color_gray69(0.687500, 0.687500, 0.687500);
  const color color_grey69(0.687500, 0.687500, 0.687500);
  const color color_gray70(0.699219, 0.699219, 0.699219);
  const color color_grey70(0.699219, 0.699219, 0.699219);
  const color color_gray71(0.707031, 0.707031, 0.707031);
  const color color_grey71(0.707031, 0.707031, 0.707031);
  const color color_gray72(0.718750, 0.718750, 0.718750);
  const color color_grey72(0.718750, 0.718750, 0.718750);
  const color color_gray73(0.726562, 0.726562, 0.726562);
  const color color_grey73(0.726562, 0.726562, 0.726562);
  const color color_gray74(0.738281, 0.738281, 0.738281);
  const color color_grey74(0.738281, 0.738281, 0.738281);
  const color color_gray75(0.746094, 0.746094, 0.746094);
  const color color_grey75(0.746094, 0.746094, 0.746094);
  const color color_gray76(0.757812, 0.757812, 0.757812);
  const color color_grey76(0.757812, 0.757812, 0.757812);
  const color color_gray77(0.765625, 0.765625, 0.765625);
  const color color_grey77(0.765625, 0.765625, 0.765625);
  const color color_gray78(0.777344, 0.777344, 0.777344);
  const color color_grey78(0.777344, 0.777344, 0.777344);
  const color color_gray79(0.785156, 0.785156, 0.785156);
  const color color_grey79(0.785156, 0.785156, 0.785156);
  const color color_gray80(0.796875, 0.796875, 0.796875);
  const color color_grey80(0.796875, 0.796875, 0.796875);
  const color color_gray81(0.808594, 0.808594, 0.808594);
  const color color_grey81(0.808594, 0.808594, 0.808594);
  const color color_gray82(0.816406, 0.816406, 0.816406);
  const color color_grey82(0.816406, 0.816406, 0.816406);
  const color color_gray83(0.828125, 0.828125, 0.828125);
  const color color_grey83(0.828125, 0.828125, 0.828125);
  const color color_gray84(0.835938, 0.835938, 0.835938);
  const color color_grey84(0.835938, 0.835938, 0.835938);
  const color color_gray85(0.847656, 0.847656, 0.847656);
  const color color_grey85(0.847656, 0.847656, 0.847656);
  const color color_gray86(0.855469, 0.855469, 0.855469);
  const color color_grey86(0.855469, 0.855469, 0.855469);
  const color color_gray87(0.867188, 0.867188, 0.867188);
  const color color_grey87(0.867188, 0.867188, 0.867188);
  const color color_gray88(0.875000, 0.875000, 0.875000);
  const color color_grey88(0.875000, 0.875000, 0.875000);
  const color color_gray89(0.886719, 0.886719, 0.886719);
  const color color_grey89(0.886719, 0.886719, 0.886719);
  const color color_gray90(0.894531, 0.894531, 0.894531);
  const color color_grey90(0.894531, 0.894531, 0.894531);
  const color color_gray91(0.906250, 0.906250, 0.906250);
  const color color_grey91(0.906250, 0.906250, 0.906250);
  const color color_gray92(0.917969, 0.917969, 0.917969);
  const color color_grey92(0.917969, 0.917969, 0.917969);
  const color color_gray93(0.925781, 0.925781, 0.925781);
  const color color_grey93(0.925781, 0.925781, 0.925781);
  const color color_gray94(0.937500, 0.937500, 0.937500);
  const color color_grey94(0.937500, 0.937500, 0.937500);
  const color color_gray95(0.945312, 0.945312, 0.945312);
  const color color_grey95(0.945312, 0.945312, 0.945312);
  const color color_gray96(0.957031, 0.957031, 0.957031);
  const color color_grey96(0.957031, 0.957031, 0.957031);
  const color color_gray97(0.964844, 0.964844, 0.964844);
  const color color_grey97(0.964844, 0.964844, 0.964844);
  const color color_gray98(0.976562, 0.976562, 0.976562);
  const color color_grey98(0.976562, 0.976562, 0.976562);
  const color color_gray99(0.984375, 0.984375, 0.984375);
  const color color_grey99(0.984375, 0.984375, 0.984375);
  const color color_gray100(0.996094, 0.996094, 0.996094);
  const color color_grey100(0.996094, 0.996094, 0.996094);
  const color color_DarkGrey(0.660156, 0.660156, 0.660156);
  const color color_DarkGray(0.660156, 0.660156, 0.660156);
  const color color_DarkBlue(0.000000, 0.000000, 0.542969);
  const color color_DarkCyan(0.000000, 0.542969, 0.542969);
  const color color_DarkMagenta(0.542969, 0.000000, 0.542969);
  const color color_DarkRed(0.542969, 0.000000, 0.000000);
  const color color_LightGreen(0.562500, 0.929688, 0.562500);


color HexToColor(int h) {
  int r = h & 0xFF;
  h /= 256;
  int g = h & 0xFF;
  h /= 256;
  int b = h & 0xFF;
  //cout << r << " " << g << " " << b << endl;
  return color(((double)r)/256., ((double)g)/256., ((double)b)/256.);
}


color MakeUpColor(int num) 
{
  int len = 28;
  //num = num ^ 0x00ABE35A;
  int rest = num % len;
  //cout << "Rest: " << rest << endl;

  switch(rest) {
  default:
    return color(0, 0, 0);
  case 0:
    return HexToColor(0x006600);
  case 1:
    return HexToColor(0x009900);
  case 2:
    return HexToColor(0x00FF00);
  case 3:
    return HexToColor(0xCCFF00);
  case 4:
    return HexToColor(0x999900);
  case 5:
    return HexToColor(0xCCFF99);
  case 6:
    return HexToColor(0x33CC99);
  case 7:
    return HexToColor(0x66FFFF);
  case 8:
    return HexToColor(0x99CCFF);
  case 9:
    return HexToColor(0x3300FF);
  case 10:
    return HexToColor(0x6699CC);
  case 11:
    return HexToColor(0xFF33CC);
  case 12:
    return HexToColor(0x9966CC);
  case 13:
    return HexToColor(0xCC00CC);
  case 14:
    return HexToColor(0x9999CC);
  case 15:
    return HexToColor(0xFF66FF);
  case 16:
    return HexToColor(0xCC9966);
  case 17:
    return HexToColor(0xFFCCFF);
  case 18:
    return HexToColor(0x990000);
  case 19:
    return HexToColor(0x996600);
  case 20:
    return HexToColor(0xFF9933);
  case 21:
    return HexToColor(0xFFCC66);
  case 22:
    return HexToColor(0xFFFF00);
  case 23:
    return HexToColor(0xFFFF99);
  case 24:
    return HexToColor(0xEE0000);
  case 25:
    return HexToColor(0xBB0000);
  case 26:
    return HexToColor(0xC0C0C0);
  case 27:
    return HexToColor(0x808080);
  }
}

/*
const color & MakeUpColor(int num) 
{
  int len = 30;
  int rest = num % len;

  switch(rest) {
  case 0:
    return color_DarkCyan;
  case 1:
    return color_LightGreen;
  case 2:
    return color_dark;
  case 3:
    return color_LightSlateGray;
  case 4:
    return color_midnight;
  case 5:
    return color_PaleGreen;
  case 6:
    return color_RoyalBlue;
  case 7:
    return color_LightSteelBlue;
  case 8:
    return color_light;
  case 9:
    return color_DarkGreen;
  case 10:
    return color_DarkKhaki;
  case 11:
    return color_DarkSeaGreen;
  case 12:
    return color_cornflower;
  case 13:
    return color_chartreuse;
  case 14:
    return color_GreenYellow;
  case 15:
    return color_ForestGreen;
  case 16:
    return color_OliveDrab;
  case 17:
    return color_DarkSalmon;
  case 18:
    return color_PaleGoldenrod;
  case 19:
    return color_RosyBrown;
  case 20:
    return color_sienna;
  case 21:
    return color_chocolate;
  case 22:
    return color_firebrick;
  case 23:
    return color_DarkOliveGreen;
  case 24:
    return color_DarkOrange;
  case 25:
    return color_tomato;
  case 26:
    return color_HotPink;
  case 27:
    return color_OrangeRed3;
  case 28:
    return color_yellow3;
  case 29:
    return color_IndianRed2;
  default:
    return color_MediumOrchid;

  };

	 
}

*/
