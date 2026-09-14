/* 0003f5e0 | STG::GERendererAPI::GL_SetCullState */

/* STG::GERendererAPI::GL_SetCullState(STG::GERendererAPI::ECullState) */

void STG::GERendererAPI::GL_SetCullState(void)

{
  undefined4 *puVar1;
  int iVar2;
  int unaff_EBX;
  
  iVar2 = FUN_0002e044();
  puVar1 = (undefined4 *)(unaff_EBX + 0x4892f + iVar2 * 0xc);
  glCullFace(*puVar1);
  glFrontFace(puVar1[1]);
  if (*(char *)(puVar1 + 2) == '\0') {
    glDisable();
    return;
  }
  glEnable(0xb44);
  return;
}

