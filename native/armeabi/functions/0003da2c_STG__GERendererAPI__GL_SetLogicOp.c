/* 0003da2c | STG::GERendererAPI::GL_SetLogicOp */

/* STG::GERendererAPI::GL_SetLogicOp(STG::GERendererAPI::ELogicOp) */

void STG::GERendererAPI::GL_SetLogicOp(int param_1)

{
  int iVar1;
  
  iVar1 = param_1 * 8 + DAT_0003da6c;
  glLogicOp(*(undefined4 *)(GL_Clear + param_1 * 8 + DAT_0003da6c));
  if (GL_Clear[iVar1 + 4] == (code)0x0) {
    glDisable();
    return;
  }
  glEnable(0xbf2);
  return;
}

