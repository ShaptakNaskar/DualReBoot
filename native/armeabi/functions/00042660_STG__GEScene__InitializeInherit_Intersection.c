/* 00042660 | STG::GEScene::InitializeInherit_Intersection */

/* STG::GEScene::InitializeInherit_Intersection(unsigned long) */

void __thiscall STG::GEScene::InitializeInherit_Intersection(GEScene *this,ulong param_1)

{
  undefined4 *puVar1;
  int iVar2;
  ulong uVar3;
  int iVar4;
  
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
    uVar3 = 0;
  }
  else {
    if (*(ulong *)(this + 0x19c) != 0) {
      if (*(void **)(this + 0x198) != (void *)0x0) {
        operator_delete__(*(void **)(this + 0x198));
      }
      *(undefined4 *)(this + 0x198) = 0;
    }
    *(ulong *)(this + 0x19c) = param_1;
    if (param_1 != 0) {
      puVar1 = operator_new__(param_1 << 2);
      iVar2 = *(int *)(this + 0x19c);
      *(undefined4 **)(this + 0x198) = puVar1;
      if (iVar2 != 0) {
        iVar4 = 0;
        do {
          iVar4 = iVar4 + 1;
          *puVar1 = 0xffffffff;
          puVar1 = puVar1 + 1;
        } while (iVar2 != iVar4);
        uVar3 = *(ulong *)(this + 0x1a4);
        goto LAB_000426dc;
      }
    }
    uVar3 = *(ulong *)(this + 0x1a4);
  }
LAB_000426dc:
  if (param_1 != uVar3) {
    if (uVar3 != 0) {
      if (*(void **)(this + 0x1a0) != (void *)0x0) {
        operator_delete__(*(void **)(this + 0x1a0));
      }
      *(undefined4 *)(this + 0x1a0) = 0;
    }
    *(ulong *)(this + 0x1a4) = param_1;
    if (param_1 != 0) {
      puVar1 = operator_new__(param_1 << 2);
      iVar2 = *(int *)(this + 0x1a4);
      *(undefined4 **)(this + 0x1a0) = puVar1;
      if (iVar2 != 0) {
        iVar4 = 0;
        do {
          iVar4 = iVar4 + 1;
          *puVar1 = 0xffffffff;
          puVar1 = puVar1 + 1;
        } while (iVar2 != iVar4);
        return;
      }
      return;
    }
  }
  return;
}

