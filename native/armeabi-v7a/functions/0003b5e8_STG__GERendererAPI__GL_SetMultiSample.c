/* 0003b5e8 | STG::GERendererAPI::GL_SetMultiSample */

/* STG::GERendererAPI::GL_SetMultiSample(STG::GERendererAPI::EMultiSampleState) */

void STG::GERendererAPI::GL_SetMultiSample(int param_1)

{
  if (*(char *)(DAT_0003b60c + 0x3b774 + param_1) == '\0') {
    glDisable();
    return;
  }
  glEnable(0x809d);
  return;
}

