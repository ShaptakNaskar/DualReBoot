/* 0003a5fc | STG::GERenderer::DeallocateResources */

/* STG::GERenderer::DeallocateResources() */

void __thiscall STG::GERenderer::DeallocateResources(GERenderer *this)

{
  int *piVar1;
  int iVar2;
  
  DeallocateFrameBufferTexture(this);
  piVar1 = *(int **)(this + 0xe8);
  if ((piVar1 != (int *)0x0) && (iVar2 = piVar1[1], piVar1[1] = iVar2 + -1, iVar2 == 1)) {
    (**(code **)(*piVar1 + 4))();
  }
  *(undefined4 *)(this + 0xe8) = 0;
  if (*(int **)(this + 0xd0) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0xd0) + 4))();
  }
  *(undefined4 *)(this + 0xd0) = 0;
  if (*(int **)(this + 0xcc) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0xcc) + 4))();
  }
  *(undefined4 *)(this + 0xcc) = 0;
  if (*(int **)(this + 0xd8) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0xd8) + 4))();
  }
  *(undefined4 *)(this + 0xd8) = 0;
  if (*(int **)(this + 0xd4) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0xd4) + 4))();
  }
  *(undefined4 *)(this + 0xd4) = 0;
  if (*(int **)(this + 0xe0) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0xe0) + 4))();
  }
  *(undefined4 *)(this + 0xe0) = 0;
  if (*(int **)(this + 0xdc) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0xdc) + 4))();
  }
  piVar1 = *(int **)(this + 0xe4);
  *(undefined4 *)(this + 0xdc) = 0;
  if ((piVar1 != (int *)0x0) && (iVar2 = piVar1[1], piVar1[1] = iVar2 + -1, iVar2 == 1)) {
    (**(code **)(*piVar1 + 4))();
  }
  piVar1 = *(int **)(this + 0xf0);
  *(undefined4 *)(this + 0xe4) = 0;
  if ((piVar1 != (int *)0x0) && (iVar2 = piVar1[1], piVar1[1] = iVar2 + -1, iVar2 == 1)) {
    (**(code **)(*piVar1 + 4))();
  }
  piVar1 = *(int **)(this + 0xf4);
  *(undefined4 *)(this + 0xf0) = 0;
  if ((piVar1 != (int *)0x0) && (iVar2 = piVar1[1], piVar1[1] = iVar2 + -1, iVar2 == 1)) {
    (**(code **)(*piVar1 + 4))();
    *(undefined4 *)(this + 0xf4) = 0;
    return;
  }
  *(undefined4 *)(this + 0xf4) = 0;
  return;
}

