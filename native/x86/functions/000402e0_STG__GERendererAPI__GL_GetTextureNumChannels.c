/* 000402e0 | STG::GERendererAPI::GL_GetTextureNumChannels */

/* STG::GERendererAPI::GL_GetTextureNumChannels(STG::GEPixelFormat::EFormat) */

undefined4 STG::GERendererAPI::GL_GetTextureNumChannels(int param_1)

{
  int extraout_ECX;
  
  FUN_0002e915();
  return *(undefined4 *)(extraout_ECX + 0x47fbb + param_1 * 4);
}

