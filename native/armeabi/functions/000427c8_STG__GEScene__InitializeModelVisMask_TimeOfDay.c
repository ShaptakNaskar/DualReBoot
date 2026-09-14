/* 000427c8 | STG::GEScene::InitializeModelVisMask_TimeOfDay */

/* STG::GEScene::InitializeModelVisMask_TimeOfDay(unsigned long) */

void __thiscall STG::GEScene::InitializeModelVisMask_TimeOfDay(GEScene *this,ulong param_1)

{
  undefined4 *puVar1;
  int iVar2;
  ulong uVar3;
  int iVar4;
  
  if (*(int *)(this + 300) != 0) {
    if (*(void **)(this + 0x128) != (void *)0x0) {
      operator_delete__(*(void **)(this + 0x128));
    }
    *(undefined4 *)(this + 0x128) = 0;
    *(undefined4 *)(this + 300) = 0;
  }
  if (*(int *)(this + 0x134) != 0) {
    if (*(void **)(this + 0x130) != (void *)0x0) {
      operator_delete__(*(void **)(this + 0x130));
    }
    *(undefined4 *)(this + 0x130) = 0;
    *(undefined4 *)(this + 0x134) = 0;
  }
  if (*(uint *)(this + 0xa4) < param_1) {
    return;
  }
  if (param_1 == *(ulong *)(this + 300)) {
    uVar3 = 0;
  }
  else {
    if (*(ulong *)(this + 300) != 0) {
      if (*(void **)(this + 0x128) != (void *)0x0) {
        operator_delete__(*(void **)(this + 0x128));
      }
      *(undefined4 *)(this + 0x128) = 0;
    }
    *(ulong *)(this + 300) = param_1;
    if (param_1 != 0) {
      puVar1 = operator_new__(param_1 << 2);
      iVar2 = *(int *)(this + 300);
      *(undefined4 **)(this + 0x128) = puVar1;
      if (iVar2 != 0) {
        iVar4 = 0;
        do {
          iVar4 = iVar4 + 1;
          *puVar1 = 0xffffffff;
          puVar1 = puVar1 + 1;
        } while (iVar2 != iVar4);
        uVar3 = *(ulong *)(this + 0x134);
        goto LAB_00042844;
      }
    }
    uVar3 = *(ulong *)(this + 0x134);
  }
LAB_00042844:
  if (param_1 != uVar3) {
    if (uVar3 != 0) {
      if (*(void **)(this + 0x130) != (void *)0x0) {
        operator_delete__(*(void **)(this + 0x130));
      }
      *(undefined4 *)(this + 0x130) = 0;
    }
    *(ulong *)(this + 0x134) = param_1;
    if (param_1 != 0) {
      puVar1 = operator_new__(param_1 << 2);
      iVar2 = *(int *)(this + 0x134);
      *(undefined4 **)(this + 0x130) = puVar1;
      if (iVar2 != 0) {
        iVar4 = 0;
        do {
          iVar4 = iVar4 + 1;
          *puVar1 = 0;
          puVar1 = puVar1 + 1;
        } while (iVar2 != iVar4);
        return;
      }
      return;
    }
  }
  return;
}

