/* 00040444 | STG::GEScene::InitializeInherit_Intersection */

/* STG::GEScene::InitializeInherit_Intersection(unsigned long) */

void __thiscall STG::GEScene::InitializeInherit_Intersection(GEScene *this,ulong param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 extraout_r2;
  undefined4 uVar3;
  ulong uVar4;
  int iVar5;
  int extraout_r3;
  
  if (*(int *)(this + 0x19c) != 0) {
    if (*(void **)(this + 0x198) != (void *)0x0) {
      operator_delete__(*(void **)(this + 0x198));
    }
    *(undefined4 *)(this + 0x198) = 0;
    *(undefined4 *)(this + 0x19c) = 0;
  }
  if (*(int *)(this + 0x1a4) != 0) {
    if (*(void **)(this + 0x1a0) != (void *)0x0) {
      operator_delete__(*(void **)(this + 0x1a0));
    }
    *(undefined4 *)(this + 0x1a0) = 0;
    *(undefined4 *)(this + 0x1a4) = 0;
  }
  if (*(uint *)(this + 0xa4) < param_1) {
    return;
  }
  if (param_1 == *(ulong *)(this + 0x19c)) {
    uVar4 = 0;
    if (param_1 == 0) {
      return;
    }
    goto LAB_000404c4;
  }
  if (*(ulong *)(this + 0x19c) != 0) {
    if (*(void **)(this + 0x198) != (void *)0x0) {
      operator_delete__(*(void **)(this + 0x198));
    }
    *(undefined4 *)(this + 0x198) = 0;
  }
  *(ulong *)(this + 0x19c) = param_1;
  if (param_1 == 0) {
LAB_00040550:
    uVar4 = *(ulong *)(this + 0x1a4);
  }
  else {
    puVar1 = operator_new__(param_1 << 2);
    iVar5 = *(int *)(this + 0x19c);
    uVar3 = extraout_r2;
    iVar2 = extraout_r3;
    if (iVar5 != 0) {
      iVar2 = 0;
      uVar3 = 0xffffffff;
    }
    *(undefined4 **)(this + 0x198) = puVar1;
    if (iVar5 == 0) goto LAB_00040550;
    do {
      iVar2 = iVar2 + 1;
      *puVar1 = uVar3;
      puVar1 = puVar1 + 1;
    } while (iVar5 != iVar2);
    uVar4 = *(ulong *)(this + 0x1a4);
  }
  if (param_1 == uVar4) {
    return;
  }
LAB_000404c4:
  if (uVar4 != 0) {
    if (*(void **)(this + 0x1a0) != (void *)0x0) {
      operator_delete__(*(void **)(this + 0x1a0));
    }
    *(undefined4 *)(this + 0x1a0) = 0;
  }
  *(ulong *)(this + 0x1a4) = param_1;
  if (param_1 == 0) {
    return;
  }
  puVar1 = operator_new__(param_1 << 2);
  iVar2 = *(int *)(this + 0x1a4);
  *(undefined4 **)(this + 0x1a0) = puVar1;
  if (iVar2 == 0) {
    return;
  }
  iVar5 = 0;
  do {
    iVar5 = iVar5 + 1;
    *puVar1 = 0xffffffff;
    puVar1 = puVar1 + 1;
  } while (iVar2 != iVar5);
  return;
}

