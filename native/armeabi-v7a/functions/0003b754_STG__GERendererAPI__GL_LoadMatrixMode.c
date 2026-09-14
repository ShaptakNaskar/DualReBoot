/* 0003b754 | STG::GERendererAPI::GL_LoadMatrixMode */

/* STG::GERendererAPI::GL_LoadMatrixMode(unsigned int, STG::MMatrix const&) */

void STG::GERendererAPI::GL_LoadMatrixMode(uint param_1,MMatrix *param_2)

{
  glMatrixMode();
  (*(code *)PTR_glLoadMatrixf_0007dedc)(param_2);
  return;
}

