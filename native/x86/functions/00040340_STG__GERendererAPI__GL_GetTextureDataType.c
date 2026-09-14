/* 00040340 | STG::GERendererAPI::GL_GetTextureDataType */

/* STG::GERendererAPI::GL_GetTextureDataType(STG::GEPixelFormat::EFormat) */

undefined4 STG::GERendererAPI::GL_GetTextureDataType(int param_1)

{
  int extraout_ECX;
  
  FUN_0002e915();
  return *(undefined4 *)(extraout_ECX + 0x47fdb + param_1 * 4);
}

