/* 0003b5a8 | STG::GERendererAPI::GL_SetLogicOp */

/* STG::GERendererAPI::GL_SetLogicOp(STG::GERendererAPI::ELogicOp) */

void STG::GERendererAPI::GL_SetLogicOp(int param_1)

{
  int iVar1;
  
  iVar1 = DAT_0003b5e4 + 0x3b6f8;
  glLogicOp(*(undefined4 *)(iVar1 + param_1 * 8));
  if (*(char *)(iVar1 + param_1 * 8 + 4) == '\0') {
    glDisable();
    return;
  }
  glEnable(0xbf2);
  return;
}

