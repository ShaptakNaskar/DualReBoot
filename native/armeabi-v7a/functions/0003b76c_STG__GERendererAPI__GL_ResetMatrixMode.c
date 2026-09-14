/* 0003b76c | STG::GERendererAPI::GL_ResetMatrixMode */

/* STG::GERendererAPI::GL_ResetMatrixMode(unsigned int) */

void STG::GERendererAPI::GL_ResetMatrixMode(uint param_1)

{
  glMatrixMode();
  (*(code *)PTR_glLoadIdentity_0007dee0)();
  return;
}

