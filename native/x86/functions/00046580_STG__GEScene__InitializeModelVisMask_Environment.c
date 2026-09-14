/* 00046580 | STG::GEScene::InitializeModelVisMask_Environment */

/* STG::GEScene::InitializeModelVisMask_Environment(unsigned long) */

void __thiscall STG::GEScene::InitializeModelVisMask_Environment(GEScene *this,ulong param_1)

{
  uint uVar1;
  ulong uVar2;
  void *pvVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined4 *puVar8;
  
  FUN_0002e044();
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
  uVar2 = 0;
  if (param_1 == *(ulong *)(this + 0x15c)) goto LAB_0004661d;
  if (*(ulong *)(this + 0x15c) != 0) {
    if (*(void **)(this + 0x158) != (void *)0x0) {
      operator_delete__(*(void **)(this + 0x158));
    }
    *(undefined4 *)(this + 0x158) = 0;
  }
  *(ulong *)(this + 0x15c) = param_1;
  if (param_1 != 0) {
    pvVar3 = operator_new__(param_1 << 2);
    uVar1 = *(uint *)(this + 0x15c);
    *(void **)(this + 0x158) = pvVar3;
    if (uVar1 != 0) {
      uVar4 = -(((uint)pvVar3 & 0xf) >> 2) & 3;
      if (uVar1 < uVar4) {
        uVar4 = uVar1;
      }
      uVar6 = 0;
      if (uVar4 != 0) {
        do {
          *(undefined4 *)((int)pvVar3 + uVar6 * 4) = 0xffffffff;
          uVar6 = uVar6 + 1;
        } while (uVar6 < uVar4);
        if (uVar4 == uVar1) goto LAB_00046695;
      }
      uVar7 = uVar1 - uVar4 >> 2;
      if (uVar7 != 0) {
        puVar8 = (undefined4 *)((int)pvVar3 + uVar4 * 4);
        uVar5 = 0;
        do {
          uVar5 = uVar5 + 1;
          *puVar8 = 0xffffffff;
          puVar8[1] = 0xffffffff;
          puVar8[2] = 0xffffffff;
          puVar8[3] = 0xffffffff;
          puVar8 = puVar8 + 4;
        } while (uVar5 < uVar7);
        uVar6 = uVar6 + uVar7 * 4;
        if (uVar1 - uVar4 == uVar7 * 4) goto LAB_00046695;
      }
      do {
        *(undefined4 *)((int)pvVar3 + uVar6 * 4) = 0xffffffff;
        uVar6 = uVar6 + 1;
      } while (uVar6 < uVar1);
    }
  }
LAB_00046695:
  uVar2 = *(ulong *)(this + 0x164);
LAB_0004661d:
  if (param_1 != uVar2) {
    if (uVar2 != 0) {
      if (*(void **)(this + 0x160) != (void *)0x0) {
        operator_delete__(*(void **)(this + 0x160));
      }
      *(undefined4 *)(this + 0x160) = 0;
    }
    *(ulong *)(this + 0x164) = param_1;
    if (param_1 != 0) {
      pvVar3 = operator_new__(param_1 << 2);
      *(void **)(this + 0x160) = pvVar3;
    }
  }
  return;
}

