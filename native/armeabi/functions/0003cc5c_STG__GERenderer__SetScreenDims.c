/* 0003cc5c | STG::GERenderer::SetScreenDims */

/* STG::GERenderer::SetScreenDims(unsigned long, unsigned long) */

void __thiscall STG::GERenderer::SetScreenDims(GERenderer *this,ulong param_1,ulong param_2)

{
  int iVar1;
  
  if ((*(ulong *)(this + 0x36c) != param_1) || (*(ulong *)(this + 0x370) != param_2)) {
    *(ulong *)(this + 0x36c) = param_1;
    *(ulong *)(this + 0x370) = param_2;
    iVar1 = DeallocateFrameBufferTexture(this);
    if (iVar1 != 0) {
      AllocateFrameBufferTexture();
      return;
    }
  }
  return;
}

