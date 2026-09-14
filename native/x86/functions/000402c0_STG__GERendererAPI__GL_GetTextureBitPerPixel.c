/* 000402c0 | STG::GERendererAPI::GL_GetTextureBitPerPixel */

/* STG::GERendererAPI::GL_GetTextureBitPerPixel(STG::GEPixelFormat::EFormat) */

undefined4 STG::GERendererAPI::GL_GetTextureBitPerPixel(int param_1)

{
  int extraout_ECX;
  
  FUN_0002e915();
  return *(undefined4 *)(extraout_ECX + 0x47f9b + param_1 * 4);
}

