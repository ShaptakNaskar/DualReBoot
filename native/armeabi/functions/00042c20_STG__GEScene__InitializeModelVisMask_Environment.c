/* 00042c20 | STG::GEScene::InitializeModelVisMask_Environment */

/* STG::GEScene::InitializeModelVisMask_Environment(unsigned long) */

void __thiscall STG::GEScene::InitializeModelVisMask_Environment(GEScene *this,ulong param_1)

{
  void *pvVar1;
  undefined4 *puVar2;
  int iVar3;
  ulong uVar4;
  int iVar5;
  
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
    uVar4 = 0;
  }
  else {
    if (*(ulong *)(this + 0x15c) != 0) {
      if (*(void **)(this + 0x158) != (void *)0x0) {
        operator_delete__(*(void **)(this + 0x158));
      }
      *(undefined4 *)(this + 0x158) = 0;
    }
    *(ulong *)(this + 0x15c) = param_1;
    if (param_1 != 0) {
      puVar2 = operator_new__(param_1 << 2);
      iVar3 = *(int *)(this + 0x15c);
      *(undefined4 **)(this + 0x158) = puVar2;
      if (iVar3 != 0) {
        iVar5 = 0;
        do {
          iVar5 = iVar5 + 1;
          *puVar2 = 0xffffffff;
          puVar2 = puVar2 + 1;
        } while (iVar5 != iVar3);
        uVar4 = *(ulong *)(this + 0x164);
        goto LAB_00042c9c;
      }
    }
    uVar4 = *(ulong *)(this + 0x164);
  }
LAB_00042c9c:
  if (param_1 != uVar4) {
    if (uVar4 != 0) {
      if (*(void **)(this + 0x160) != (void *)0x0) {
        operator_delete__(*(void **)(this + 0x160));
      }
      *(undefined4 *)(this + 0x160) = 0;
    }
    *(ulong *)(this + 0x164) = param_1;
    if (param_1 != 0) {
      pvVar1 = operator_new__(param_1 << 2);
      *(void **)(this + 0x160) = pvVar1;
      return;
    }
  }
  return;
}

