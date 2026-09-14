/* 0004ad2c | STG::GETextureShading::ShadePixel */

/* STG::GETextureShading::ShadePixel(STG::GETextureShading::EEffect, unsigned char, unsigned char,
   unsigned char, unsigned char, unsigned char&, unsigned char&, unsigned char&, unsigned char&) */

void STG::GETextureShading::ShadePixel
               (int param_1,undefined1 param_2,undefined1 param_3,undefined1 param_4,
               undefined1 param_5,undefined1 *param_6,undefined1 *param_7,undefined1 *param_8,
               undefined1 *param_9)

{
  if (param_1 == 1) {
    *param_6 = param_3;
    *param_7 = param_3;
    *param_8 = param_3;
  }
  else {
    *param_6 = param_2;
    *param_7 = param_3;
    *param_8 = param_4;
  }
  *param_9 = param_5;
  return;
}

