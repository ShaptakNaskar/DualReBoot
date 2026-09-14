/* 00039d68 | STG::GERenderer::UpdateFrameBufferTexture */

/* STG::GERenderer::UpdateFrameBufferTexture() */

void __thiscall STG::GERenderer::UpdateFrameBufferTexture(GERenderer *this)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  iVar1 = *(int *)(this + 0xf8);
  if (iVar1 == 0) {
    return;
  }
  uVar3 = *(uint *)(this + 0x36c);
  if (*(uint *)(iVar1 + 0x2c) <= *(uint *)(this + 0x36c)) {
    uVar3 = *(uint *)(iVar1 + 0x2c);
  }
  uVar2 = *(uint *)(this + 0x370);
  if (*(uint *)(iVar1 + 0x30) <= *(uint *)(this + 0x370)) {
    uVar2 = *(uint *)(iVar1 + 0x30);
  }
  if (uVar2 == 0 || uVar3 == 0) {
    return;
  }
  GERendererAPI::GL_BindTexture(*(ulong *)(iVar1 + 0x94));
  GERendererAPI::GL_CopyTexImage2D(uVar3,uVar2);
  GERendererAPI::GL_UnbindTexture();
  *(undefined4 *)(this + 0xfc) = *(undefined4 *)(this + 0x368);
  return;
}

