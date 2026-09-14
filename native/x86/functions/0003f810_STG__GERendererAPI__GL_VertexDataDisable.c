/* 0003f810 | STG::GERendererAPI::GL_VertexDataDisable */

/* STG::GERendererAPI::GL_VertexDataDisable(STG::GEVertexBuffer::EUsage) */

void STG::GERendererAPI::GL_VertexDataDisable(int param_1)

{
  int iVar1;
  int unaff_EBX;
  
  FUN_0002e044();
  iVar1 = *(int *)(unaff_EBX + 0x487a3 + param_1 * 4);
  if (iVar1 != 0x500) {
    glClientActiveTexture(iVar1);
  }
  glDisableClientState(*(undefined4 *)(unaff_EBX + 0x487bf + param_1 * 4));
  return;
}

