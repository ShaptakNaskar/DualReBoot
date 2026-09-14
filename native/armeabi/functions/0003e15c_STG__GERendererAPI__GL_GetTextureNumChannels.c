/* 0003e15c | STG::GERendererAPI::GL_GetTextureNumChannels */

/* STG::GERendererAPI::GL_GetTextureNumChannels(STG::GEPixelFormat::EFormat) */

undefined4 STG::GERendererAPI::GL_GetTextureNumChannels(int param_1)

{
  return *(undefined4 *)(DAT_0003e170 + param_1 * 4 + 0x3e574);
}

