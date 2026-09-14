/* 0003bc20 | STG::GERendererAPI::GL_GetTextureBitPerPixel */

/* STG::GERendererAPI::GL_GetTextureBitPerPixel(STG::GEPixelFormat::EFormat) */

undefined4 STG::GERendererAPI::GL_GetTextureBitPerPixel(int param_1)

{
  return *(undefined4 *)(DAT_0003bc34 + param_1 * 4 + 0x3c008);
}

