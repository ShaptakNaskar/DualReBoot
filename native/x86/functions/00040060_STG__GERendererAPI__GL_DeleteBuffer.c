/* 00040060 | STG::GERendererAPI::GL_DeleteBuffer */

/* STG::GERendererAPI::GL_DeleteBuffer(unsigned long&) */

void STG::GERendererAPI::GL_DeleteBuffer(ulong *param_1)

{
  FUN_0002e044();
  glDeleteBuffers(1,param_1);
  *param_1 = 0;
  return;
}

