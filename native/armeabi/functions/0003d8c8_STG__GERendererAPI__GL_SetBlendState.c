/* 0003d8c8 | STG::GERendererAPI::GL_SetBlendState */

/* STG::GERendererAPI::GL_SetBlendState(STG::GERendererAPI::EBlendState) */

void STG::GERendererAPI::GL_SetBlendState(int param_1)

{
  char cVar1;
  int iVar2;
  
  iVar2 = DAT_0003d948 + 0x3d914 + param_1 * 0x18;
  glBlendFunc(*(undefined4 *)(DAT_0003d948 + 0x3d914 + param_1 * 0x18),*(undefined4 *)(iVar2 + 4));
  glAlphaFunc(*(undefined4 *)(iVar2 + 0xc),*(undefined4 *)(iVar2 + 0x10));
  if (*(char *)(iVar2 + 8) == '\0') {
    glDisable(0xbe2);
    cVar1 = *(char *)(iVar2 + 0x14);
  }
  else {
    glEnable();
    cVar1 = *(char *)(iVar2 + 0x14);
  }
  if (cVar1 == '\0') {
    glDisable();
    return;
  }
  glEnable(0xbc0);
  return;
}

