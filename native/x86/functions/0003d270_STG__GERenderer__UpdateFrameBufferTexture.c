/* 0003d270 | STG::GERenderer::UpdateFrameBufferTexture */

/* STG::GERenderer::UpdateFrameBufferTexture() */

void __thiscall STG::GERenderer::UpdateFrameBufferTexture(GERenderer *this)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  FUN_0002e044();
  iVar1 = *(int *)(this + 0xf8);
  if (iVar1 != 0) {
    uVar2 = *(uint *)(iVar1 + 0x2c);
    if (*(uint *)(this + 0x36c) <= *(uint *)(iVar1 + 0x2c)) {
      uVar2 = *(uint *)(this + 0x36c);
    }
    uVar3 = *(uint *)(iVar1 + 0x30);
    if (*(uint *)(this + 0x370) <= *(uint *)(iVar1 + 0x30)) {
      uVar3 = *(uint *)(this + 0x370);
    }
    if ((uVar3 != 0) && (uVar2 != 0)) {
      GERendererAPI::GL_BindTexture(*(ulong *)(iVar1 + 0x94));
      GERendererAPI::GL_CopyTexImage2D(uVar2,uVar3);
      GERendererAPI::GL_UnbindTexture();
      *(undefined4 *)(this + 0xfc) = *(undefined4 *)(this + 0x368);
    }
  }
  return;
}

