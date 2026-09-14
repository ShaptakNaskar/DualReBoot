/* 0003f660 | STG::GERendererAPI::GL_SetDepthState */

/* STG::GERendererAPI::GL_SetDepthState(STG::GERendererAPI::EDepthState) */

void STG::GERendererAPI::GL_SetDepthState(void)

{
  undefined4 *puVar1;
  int iVar2;
  int unaff_EBX;
  
  iVar2 = FUN_0002e044();
  puVar1 = (undefined4 *)(unaff_EBX + 0x488cf + iVar2 * 8);
  glDepthFunc(*puVar1);
  glDepthMask(*(undefined1 *)(puVar1 + 1));
  if (*(char *)((int)puVar1 + 5) == '\0') {
    glDisable();
    return;
  }
  glEnable(0xb71);
  return;
}

