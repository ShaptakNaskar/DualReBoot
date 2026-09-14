/* 0003bbe8 | STG::GERendererAPI::GL_Viewport */

/* STG::GERendererAPI::GL_Viewport(STG::URectangle<unsigned long> const&) */

void STG::GERendererAPI::GL_Viewport(URectangle *param_1)

{
  glViewport(*(int *)param_1,*(int *)(param_1 + 0xc),*(int *)(param_1 + 8) - *(int *)param_1,
             *(int *)(param_1 + 4) - *(int *)(param_1 + 0xc));
  GL_DepthRange(DAT_0003bc1c,1.0);
  return;
}

