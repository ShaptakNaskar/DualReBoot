/* 0003f760 | STG::GERendererAPI::GL_SetLogicOp */

/* STG::GERendererAPI::GL_SetLogicOp(STG::GERendererAPI::ELogicOp) */

void STG::GERendererAPI::GL_SetLogicOp(void)

{
  undefined4 *puVar1;
  int iVar2;
  int unaff_EBX;
  
  iVar2 = FUN_0002e044();
  puVar1 = (undefined4 *)(unaff_EBX + 0x4880f + iVar2 * 8);
  glLogicOp(*puVar1);
  if (*(char *)(puVar1 + 1) == '\0') {
    glDisable();
    return;
  }
  glEnable(0xbf2);
  return;
}

