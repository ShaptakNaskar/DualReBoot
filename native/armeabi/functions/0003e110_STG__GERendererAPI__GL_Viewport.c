/* 0003e110 | STG::GERendererAPI::GL_Viewport */

/* STG::GERendererAPI::GL_Viewport(STG::URectangle<unsigned long> const&) */

void STG::GERendererAPI::GL_Viewport(URectangle *param_1)

{
  undefined8 uVar1;
  
  uVar1 = glViewport(*(int *)param_1,*(int *)(param_1 + 0xc),*(int *)(param_1 + 8) - *(int *)param_1
                     ,*(int *)(param_1 + 4) - *(int *)(param_1 + 0xc));
  GL_DepthRange((float)uVar1,(float)((ulonglong)uVar1 >> 0x20));
  return;
}

