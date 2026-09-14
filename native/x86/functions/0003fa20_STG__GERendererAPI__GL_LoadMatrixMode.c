/* 0003fa20 | STG::GERendererAPI::GL_LoadMatrixMode */

/* STG::GERendererAPI::GL_LoadMatrixMode(unsigned int, STG::MMatrix const&) */

void STG::GERendererAPI::GL_LoadMatrixMode(uint param_1,MMatrix *param_2)

{
  FUN_0002e044();
  glMatrixMode(param_1);
  glLoadMatrixf(param_2);
  return;
}

