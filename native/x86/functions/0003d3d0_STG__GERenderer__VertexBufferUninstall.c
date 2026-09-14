/* 0003d3d0 | STG::GERenderer::VertexBufferUninstall */

/* STG::GERenderer::VertexBufferUninstall(STG::GEVertexBuffer const&) */

void __thiscall STG::GERenderer::VertexBufferUninstall(GERenderer *this,GEVertexBuffer *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  FUN_0002e044();
  iVar2 = *(int *)(param_1 + 0xa4);
  if (iVar2 != 0) {
    iVar3 = 0;
    do {
      iVar1 = iVar3 * 4;
      iVar3 = iVar3 + 1;
      GERendererAPI::GL_VertexDataDisable(*(undefined4 *)(param_1 + iVar1 + 0x88));
    } while (iVar3 != iVar2);
  }
  GEBufferObject::Unbind(*(GEBufferObject **)(param_1 + 4));
  return;
}

