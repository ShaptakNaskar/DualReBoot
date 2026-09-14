/* 0003e1f0 | STG::GERenderer::SetScreenDims */

/* STG::GERenderer::SetScreenDims(unsigned long, unsigned long) */

void __thiscall STG::GERenderer::SetScreenDims(GERenderer *this,ulong param_1,ulong param_2)

{
  char cVar1;
  int iVar2;
  
  iVar2 = FUN_0002e044();
  if ((*(int *)(this + 0x36c) != iVar2) || (*(ulong *)(this + 0x370) != param_2)) {
    *(int *)(this + 0x36c) = iVar2;
    *(ulong *)(this + 0x370) = param_2;
    cVar1 = DeallocateFrameBufferTexture(this);
    if (cVar1 != '\0') {
      AllocateFrameBufferTexture();
      return;
    }
  }
  return;
}

