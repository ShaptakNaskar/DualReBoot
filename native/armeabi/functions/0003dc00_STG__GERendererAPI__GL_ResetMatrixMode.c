/* 0003dc00 | STG::GERendererAPI::GL_ResetMatrixMode */

/* STG::GERendererAPI::GL_ResetMatrixMode(unsigned int) */

void STG::GERendererAPI::GL_ResetMatrixMode(uint param_1)

{
  glMatrixMode();
  (*(code *)PTR_glLoadIdentity_00080ee8)();
  return;
}

