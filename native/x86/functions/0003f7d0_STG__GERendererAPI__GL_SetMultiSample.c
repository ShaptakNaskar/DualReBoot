/* 0003f7d0 | STG::GERendererAPI::GL_SetMultiSample */

/* STG::GERendererAPI::GL_SetMultiSample(STG::GERendererAPI::EMultiSampleState) */

void STG::GERendererAPI::GL_SetMultiSample(int param_1)

{
  int unaff_EBX;
  
  FUN_0002e044();
  if (*(char *)(param_1 + unaff_EBX + 0x487ea) == '\0') {
    glDisable();
    return;
  }
  glEnable(0x809d);
  return;
}

