/* 0004b7b8 | STG::GERenderer_Android::SetWindowData */

/* STG::GERenderer_Android::SetWindowData(unsigned long, unsigned long) */

void __thiscall
STG::GERenderer_Android::SetWindowData(GERenderer_Android *this,ulong param_1,ulong param_2)

{
  int iVar1;
  
  if (*(ulong *)(this + 0x36c) == param_1) {
    if (*(ulong *)(this + 0x370) == param_2) {
      return;
    }
    *(ulong *)(this + 0x36c) = param_1;
    *(ulong *)(this + 0x370) = param_2;
    iVar1 = GERenderer::DeallocateFrameBufferTexture((GERenderer *)this);
    if (iVar1 == 0) {
      return;
    }
  }
  else {
    *(ulong *)(this + 0x36c) = param_1;
    *(ulong *)(this + 0x370) = param_2;
    iVar1 = GERenderer::DeallocateFrameBufferTexture((GERenderer *)this);
    if (iVar1 == 0) {
      return;
    }
  }
  GERenderer::AllocateFrameBufferTexture();
  return;
}

