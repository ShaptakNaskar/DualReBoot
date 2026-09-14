/* 0003d350 | STG::GERenderer::VertexBufferInstall */

/* STG::GERenderer::VertexBufferInstall(STG::GEVertexBuffer const&) */

void __thiscall STG::GERenderer::VertexBufferInstall(GERenderer *this,GEVertexBuffer *param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  FUN_0002e044();
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  GEBufferObject::Bind(*(GEBufferObject **)(param_1 + 4));
  iVar2 = *(int *)(param_1 + 0xa4);
  if (iVar2 != 0) {
    iVar4 = 0;
    do {
      iVar3 = *(int *)(param_1 + iVar4 * 4 + 0x88);
      iVar4 = iVar4 + 1;
      GERendererAPI::GL_VertexDataEnable
                (iVar3,*(undefined4 *)(param_1 + iVar3 * 4 + 0x18),
                 *(undefined4 *)(param_1 + iVar3 * 4 + 0x34),uVar1,
                 *(undefined4 *)(param_1 + iVar3 * 4 + 0x6c));
    } while (iVar4 != iVar2);
  }
  return;
}

