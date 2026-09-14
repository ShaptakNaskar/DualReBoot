/* 00040714 | STG::GEScene::InitializeModelVisMask_WeekDay */

/* STG::GEScene::InitializeModelVisMask_WeekDay(unsigned long) */

void __thiscall STG::GEScene::InitializeModelVisMask_WeekDay(GEScene *this,ulong param_1)

{
  void *pvVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 extraout_r2;
  undefined4 uVar4;
  ulong uVar5;
  int iVar6;
  int extraout_r3;
  
  if (*(int *)(this + 0x13c) != 0) {
    if (*(void **)(this + 0x138) != (void *)0x0) {
      operator_delete__(*(void **)(this + 0x138));
    }
    *(undefined4 *)(this + 0x138) = 0;
    *(undefined4 *)(this + 0x13c) = 0;
  }
  if (*(int *)(this + 0x144) != 0) {
    if (*(void **)(this + 0x140) != (void *)0x0) {
      operator_delete__(*(void **)(this + 0x140));
    }
    *(undefined4 *)(this + 0x140) = 0;
    *(undefined4 *)(this + 0x144) = 0;
  }
  if (*(uint *)(this + 0xa4) < param_1) {
    return;
  }
  if (param_1 == *(ulong *)(this + 0x13c)) {
    uVar5 = 0;
    if (param_1 == 0) {
      return;
    }
    goto LAB_00040794;
  }
  if (*(ulong *)(this + 0x13c) != 0) {
    if (*(void **)(this + 0x138) != (void *)0x0) {
      operator_delete__(*(void **)(this + 0x138));
    }
    *(undefined4 *)(this + 0x138) = 0;
  }
  *(ulong *)(this + 0x13c) = param_1;
  if (param_1 == 0) {
LAB_00040824:
    uVar5 = *(ulong *)(this + 0x144);
  }
  else {
    puVar2 = operator_new__(param_1 << 2);
    iVar3 = *(int *)(this + 0x13c);
    uVar4 = extraout_r2;
    iVar6 = extraout_r3;
    if (iVar3 != 0) {
      iVar6 = 0;
      uVar4 = 0xffffffff;
    }
    *(undefined4 **)(this + 0x138) = puVar2;
    if (iVar3 == 0) goto LAB_00040824;
    do {
      iVar6 = iVar6 + 1;
      *puVar2 = uVar4;
      puVar2 = puVar2 + 1;
    } while (iVar6 != iVar3);
    uVar5 = *(ulong *)(this + 0x144);
  }
  if (param_1 == uVar5) {
    return;
  }
LAB_00040794:
  if (uVar5 != 0) {
    if (*(void **)(this + 0x140) != (void *)0x0) {
      operator_delete__(*(void **)(this + 0x140));
    }
    *(undefined4 *)(this + 0x140) = 0;
  }
  *(ulong *)(this + 0x144) = param_1;
  if (param_1 == 0) {
    return;
  }
  pvVar1 = operator_new__(param_1);
  iVar6 = *(int *)(this + 0x144);
  *(void **)(this + 0x140) = pvVar1;
  if (iVar6 == 0) {
    return;
  }
  iVar3 = 0;
  do {
    *(undefined1 *)(*(int *)(this + 0x140) + iVar3) = 0;
    iVar3 = iVar3 + 1;
  } while (iVar6 != iVar3);
  return;
}

