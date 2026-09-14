/* 000405ac | STG::GEScene::InitializeModelVisMask_TimeOfDay */

/* STG::GEScene::InitializeModelVisMask_TimeOfDay(unsigned long) */

void __thiscall STG::GEScene::InitializeModelVisMask_TimeOfDay(GEScene *this,ulong param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 extraout_r2;
  undefined4 uVar3;
  ulong uVar4;
  int iVar5;
  int extraout_r3;
  
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
    uVar4 = 0;
    if (param_1 == 0) {
      return;
    }
    goto LAB_0004062c;
  }
  if (*(ulong *)(this + 300) != 0) {
    if (*(void **)(this + 0x128) != (void *)0x0) {
      operator_delete__(*(void **)(this + 0x128));
    }
    *(undefined4 *)(this + 0x128) = 0;
  }
  *(ulong *)(this + 300) = param_1;
  if (param_1 == 0) {
LAB_000406b8:
    uVar4 = *(ulong *)(this + 0x134);
  }
  else {
    puVar1 = operator_new__(param_1 << 2);
    iVar5 = *(int *)(this + 300);
    uVar3 = extraout_r2;
    iVar2 = extraout_r3;
    if (iVar5 != 0) {
      iVar2 = 0;
      uVar3 = 0xffffffff;
    }
    *(undefined4 **)(this + 0x128) = puVar1;
    if (iVar5 == 0) goto LAB_000406b8;
    do {
      iVar2 = iVar2 + 1;
      *puVar1 = uVar3;
      puVar1 = puVar1 + 1;
    } while (iVar5 != iVar2);
    uVar4 = *(ulong *)(this + 0x134);
  }
  if (param_1 == uVar4) {
    return;
  }
LAB_0004062c:
  if (uVar4 != 0) {
    if (*(void **)(this + 0x130) != (void *)0x0) {
      operator_delete__(*(void **)(this + 0x130));
    }
    *(undefined4 *)(this + 0x130) = 0;
  }
  *(ulong *)(this + 0x134) = param_1;
  if (param_1 == 0) {
    return;
  }
  puVar1 = operator_new__(param_1 << 2);
  iVar2 = *(int *)(this + 0x134);
  *(undefined4 **)(this + 0x130) = puVar1;
  if (iVar2 == 0) {
    return;
  }
  iVar5 = 0;
  do {
    iVar5 = iVar5 + 1;
    *puVar1 = 0;
    puVar1 = puVar1 + 1;
  } while (iVar2 != iVar5);
  return;
}

