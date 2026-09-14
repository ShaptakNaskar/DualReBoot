/* 00040300 | STG::GERendererAPI::GL_GetTextureEnum */

/* STG::GERendererAPI::GL_GetTextureEnum(STG::GEPixelFormat::EFormat) */

undefined4 STG::GERendererAPI::GL_GetTextureEnum(int param_1)

{
  int extraout_ECX;
  
  FUN_0002e915();
  return *(undefined4 *)(extraout_ECX + 0x47fdb + param_1 * 4);
}

