/* 0003bc80 | STG::GERendererAPI::GL_GetTextureDataType */

/* STG::GERendererAPI::GL_GetTextureDataType(STG::GEPixelFormat::EFormat) */

undefined4 STG::GERendererAPI::GL_GetTextureDataType(int param_1)

{
  return *(undefined4 *)(DAT_0003bc94 + param_1 * 4 + 0x3c104);
}

