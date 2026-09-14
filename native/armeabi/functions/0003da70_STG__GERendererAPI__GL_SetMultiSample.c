/* 0003da70 | STG::GERendererAPI::GL_SetMultiSample */

/* STG::GERendererAPI::GL_SetMultiSample(STG::GERendererAPI::EMultiSampleState) */

void STG::GERendererAPI::GL_SetMultiSample(int param_1)

{
  if (*(char *)(DAT_0003da98 + 0x3dbfc + param_1) == '\0') {
    glDisable();
    return;
  }
  glEnable(0x809d);
  return;
}

