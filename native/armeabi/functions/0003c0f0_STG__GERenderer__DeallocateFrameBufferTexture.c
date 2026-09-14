/* 0003c0f0 | STG::GERenderer::DeallocateFrameBufferTexture */

/* STG::GERenderer::DeallocateFrameBufferTexture() */

bool __thiscall STG::GERenderer::DeallocateFrameBufferTexture(GERenderer *this)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = *(int **)(this + 0xf8);
  if ((piVar1 != (int *)0x0) && (iVar2 = piVar1[1], piVar1[1] = iVar2 + -1, iVar2 == 1)) {
    (**(code **)(*piVar1 + 4))();
    *(undefined4 *)(this + 0xf8) = 0;
    *(undefined4 *)(this + 0xfc) = 0;
    return true;
  }
  *(undefined4 *)(this + 0xf8) = 0;
  *(undefined4 *)(this + 0xfc) = 0;
  return piVar1 != (int *)0x0;
}

