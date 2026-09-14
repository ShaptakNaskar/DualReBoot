/* 0003b4d0 | STG::GERendererAPI::GL_SetCullState */

/* STG::GERendererAPI::GL_SetCullState(STG::GERendererAPI::ECullState) */

void STG::GERendererAPI::GL_SetCullState(int param_1)

{
  int iVar1;
  
  iVar1 = DAT_0003b51c + 0x3b5dc + param_1 * 0xc;
  glCullFace(*(undefined4 *)(DAT_0003b51c + 0x3b5dc + param_1 * 0xc));
  glFrontFace(*(undefined4 *)(iVar1 + 4));
  if (*(char *)(iVar1 + 8) == '\0') {
    glDisable();
    return;
  }
  glEnable(0xb44);
  return;
}

