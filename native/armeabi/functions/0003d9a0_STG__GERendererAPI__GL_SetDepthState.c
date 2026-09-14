/* 0003d9a0 | STG::GERendererAPI::GL_SetDepthState */

/* STG::GERendererAPI::GL_SetDepthState(STG::GERendererAPI::EDepthState) */

void STG::GERendererAPI::GL_SetDepthState(int param_1)

{
  int iVar1;
  
  iVar1 = DAT_0003d9e8 + 0x3dac0 + param_1 * 8;
  glDepthFunc(*(undefined4 *)(DAT_0003d9e8 + 0x3dac0 + param_1 * 8));
  glDepthMask(*(undefined1 *)(iVar1 + 4));
  if (*(char *)(iVar1 + 5) == '\0') {
    glDisable();
    return;
  }
  glEnable(0xb71);
  return;
}

