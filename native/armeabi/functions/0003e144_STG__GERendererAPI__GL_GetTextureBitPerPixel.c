/* 0003e144 | STG::GERendererAPI::GL_GetTextureBitPerPixel */

/* STG::GERendererAPI::GL_GetTextureBitPerPixel(STG::GEPixelFormat::EFormat) */

undefined4 STG::GERendererAPI::GL_GetTextureBitPerPixel(int param_1)

{
  return *(undefined4 *)(DAT_0003e158 + param_1 * 4 + 0x3e52c);
}

