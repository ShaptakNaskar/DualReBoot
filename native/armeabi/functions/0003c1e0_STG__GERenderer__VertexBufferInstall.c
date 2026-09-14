/* 0003c1e0 | STG::GERenderer::VertexBufferInstall */

/* STG::GERenderer::VertexBufferInstall(STG::GEVertexBuffer const&) */

void __thiscall STG::GERenderer::VertexBufferInstall(GERenderer *this,GEVertexBuffer *param_1)

{
  int iVar1;
  int iVar2;
  GEVertexBuffer *pGVar3;
  int iVar4;
  undefined4 uVar5;
  
  uVar5 = *(undefined4 *)(param_1 + 0xc);
  GEBufferObject::Bind(*(GEBufferObject **)(param_1 + 4));
  iVar4 = *(int *)(param_1 + 0xa4);
  if (iVar4 != 0) {
    pGVar3 = param_1 + 0x84;
    iVar2 = 0;
    do {
      pGVar3 = pGVar3 + 4;
      iVar1 = *(int *)pGVar3;
      iVar2 = iVar2 + 1;
      GERendererAPI::GL_VertexDataEnable
                (iVar1,*(undefined4 *)(param_1 + (iVar1 + 6) * 4),
                 *(undefined4 *)(param_1 + iVar1 * 4 + 0x34),uVar5,
                 *(undefined4 *)(param_1 + iVar1 * 4 + 0x6c));
    } while (iVar2 != iVar4);
  }
  return;
}

