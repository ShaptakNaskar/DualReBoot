/* 0003fa50 | STG::GERendererAPI::GL_ResetMatrixMode */

/* STG::GERendererAPI::GL_ResetMatrixMode(unsigned int) */

void STG::GERendererAPI::GL_ResetMatrixMode(uint param_1)

{
  FUN_0002e044();
  glMatrixMode(param_1);
  glLoadIdentity();
  return;
}

