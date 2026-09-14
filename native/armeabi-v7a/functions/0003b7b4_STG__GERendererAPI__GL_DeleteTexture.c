/* 0003b7b4 | STG::GERendererAPI::GL_DeleteTexture */

/* STG::GERendererAPI::GL_DeleteTexture(unsigned long&) */

void STG::GERendererAPI::GL_DeleteTexture(ulong *param_1)

{
  glDeleteTextures(1,param_1);
  *param_1 = 0;
  return;
}

