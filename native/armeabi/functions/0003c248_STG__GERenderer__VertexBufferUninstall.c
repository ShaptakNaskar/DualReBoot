/* 0003c248 | STG::GERenderer::VertexBufferUninstall */

/* STG::GERenderer::VertexBufferUninstall(STG::GEVertexBuffer const&) */

void __thiscall STG::GERenderer::VertexBufferUninstall(GERenderer *this,GEVertexBuffer *param_1)

{
  int iVar1;
  GEVertexBuffer *pGVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 0xa4);
  if (iVar3 != 0) {
    pGVar2 = param_1 + 0x84;
    iVar1 = 0;
    do {
      pGVar2 = pGVar2 + 4;
      iVar1 = iVar1 + 1;
      GERendererAPI::GL_VertexDataDisable(*(undefined4 *)pGVar2);
    } while (iVar1 != iVar3);
  }
  GEBufferObject::Unbind(*(GEBufferObject **)(param_1 + 4));
  return;
}

