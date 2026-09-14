/* 0003dff0 | STG::GERenderer::DeallocateResources */

/* STG::GERenderer::DeallocateResources() */

void __thiscall STG::GERenderer::DeallocateResources(GERenderer *this)

{
  int *piVar1;
  int iVar2;
  
  FUN_0002e044();
  DeallocateFrameBufferTexture(this);
  piVar1 = *(int **)(this + 0xe8);
  if ((piVar1 != (int *)0x0) && (iVar2 = piVar1[1], piVar1[1] = iVar2 + -1, iVar2 == 1)) {
    (**(code **)(*piVar1 + 4))(piVar1);
  }
  piVar1 = *(int **)(this + 0xd0);
  *(undefined4 *)(this + 0xe8) = 0;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))(piVar1);
  }
  piVar1 = *(int **)(this + 0xcc);
  *(undefined4 *)(this + 0xd0) = 0;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))(piVar1);
  }
  piVar1 = *(int **)(this + 0xd8);
  *(undefined4 *)(this + 0xcc) = 0;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))(piVar1);
  }
  piVar1 = *(int **)(this + 0xd4);
  *(undefined4 *)(this + 0xd8) = 0;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))(piVar1);
  }
  piVar1 = *(int **)(this + 0xe0);
  *(undefined4 *)(this + 0xd4) = 0;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))(piVar1);
  }
  piVar1 = *(int **)(this + 0xdc);
  *(undefined4 *)(this + 0xe0) = 0;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))(piVar1);
  }
  piVar1 = *(int **)(this + 0xe4);
  *(undefined4 *)(this + 0xdc) = 0;
  if ((piVar1 != (int *)0x0) && (iVar2 = piVar1[1], piVar1[1] = iVar2 + -1, iVar2 == 1)) {
    (**(code **)(*piVar1 + 4))(piVar1);
  }
  piVar1 = *(int **)(this + 0xf0);
  *(undefined4 *)(this + 0xe4) = 0;
  if ((piVar1 != (int *)0x0) && (iVar2 = piVar1[1], piVar1[1] = iVar2 + -1, iVar2 == 1)) {
    (**(code **)(*piVar1 + 4))(piVar1);
  }
  piVar1 = *(int **)(this + 0xf4);
  *(undefined4 *)(this + 0xf0) = 0;
  if ((piVar1 != (int *)0x0) && (iVar2 = piVar1[1], piVar1[1] = iVar2 + -1, iVar2 == 1)) {
    (**(code **)(*piVar1 + 4))(piVar1);
  }
  *(undefined4 *)(this + 0xf4) = 0;
  return;
}

