/* 00040a0c | STG::GEScene::InitializeModelVisMask_Environment */

/* STG::GEScene::InitializeModelVisMask_Environment(unsigned long) */

void __thiscall STG::GEScene::InitializeModelVisMask_Environment(GEScene *this,ulong param_1)

{
  void *pvVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 extraout_r2;
  undefined4 uVar4;
  ulong uVar5;
  int extraout_r3;
  int iVar6;
  
  if (*(int *)(this + 0x15c) != 0) {
    if (*(void **)(this + 0x158) != (void *)0x0) {
      operator_delete__(*(void **)(this + 0x158));
    }
    *(undefined4 *)(this + 0x158) = 0;
    *(undefined4 *)(this + 0x15c) = 0;
  }
  if (*(int *)(this + 0x164) != 0) {
    if (*(void **)(this + 0x160) != (void *)0x0) {
      operator_delete__(*(void **)(this + 0x160));
    }
    *(undefined4 *)(this + 0x160) = 0;
    *(undefined4 *)(this + 0x164) = 0;
  }
  if (*(uint *)(this + 0xa4) < param_1) {
    return;
  }
  if (param_1 == *(ulong *)(this + 0x15c)) {
    uVar5 = 0;
    if (param_1 == 0) {
      return;
    }
    goto LAB_00040a8c;
  }
  if (*(ulong *)(this + 0x15c) != 0) {
    if (*(void **)(this + 0x158) != (void *)0x0) {
      operator_delete__(*(void **)(this + 0x158));
    }
    *(undefined4 *)(this + 0x158) = 0;
  }
  *(ulong *)(this + 0x15c) = param_1;
  if (param_1 == 0) {
LAB_00040af4:
    uVar5 = *(ulong *)(this + 0x164);
  }
  else {
    puVar2 = operator_new__(param_1 << 2);
    iVar3 = *(int *)(this + 0x15c);
    uVar4 = extraout_r2;
    iVar6 = extraout_r3;
    if (iVar3 != 0) {
      iVar6 = 0;
      uVar4 = 0xffffffff;
    }
    *(undefined4 **)(this + 0x158) = puVar2;
    if (iVar3 == 0) goto LAB_00040af4;
    do {
      iVar6 = iVar6 + 1;
      *puVar2 = uVar4;
      puVar2 = puVar2 + 1;
    } while (iVar6 != iVar3);
    uVar5 = *(ulong *)(this + 0x164);
  }
  if (param_1 == uVar5) {
    return;
  }
LAB_00040a8c:
  if (uVar5 != 0) {
    if (*(void **)(this + 0x160) != (void *)0x0) {
      operator_delete__(*(void **)(this + 0x160));
    }
    *(undefined4 *)(this + 0x160) = 0;
  }
  *(ulong *)(this + 0x164) = param_1;
  if (param_1 == 0) {
    return;
  }
  pvVar1 = operator_new__(param_1 << 2);
  *(void **)(this + 0x160) = pvVar1;
  return;
}

