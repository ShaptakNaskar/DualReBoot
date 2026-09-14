/* 00040260 | STG::GERendererAPI::GL_Viewport */

/* STG::GERendererAPI::GL_Viewport(STG::URectangle<unsigned long> const&) */

void STG::GERendererAPI::GL_Viewport(URectangle *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_0002e044();
  glViewport(*piVar1,piVar1[3],piVar1[2] - *piVar1,piVar1[1] - piVar1[3]);
  GL_DepthRange(0.0,1.0);
  return;
}

