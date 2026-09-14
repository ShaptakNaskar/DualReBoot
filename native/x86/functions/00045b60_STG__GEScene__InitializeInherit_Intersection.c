/* 00045b60 | STG::GEScene::InitializeInherit_Intersection */

/* STG::GEScene::InitializeInherit_Intersection(unsigned long) */

void __thiscall STG::GEScene::InitializeInherit_Intersection(GEScene *this,ulong param_1)

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
  uVar2 = 0;
  if (param_1 == *(ulong *)(this + 0x19c)) goto LAB_00045c01;
  if (*(ulong *)(this + 0x19c) != 0) {
    if (*(void **)(this + 0x198) != (void *)0x0) {
      operator_delete__(*(void **)(this + 0x198));
    }
    *(undefined4 *)(this + 0x198) = 0;
  }
  *(ulong *)(this + 0x19c) = param_1;
  if (param_1 != 0) {
    pvVar3 = operator_new__(param_1 << 2);
    uVar1 = *(uint *)(this + 0x19c);
    *(void **)(this + 0x198) = pvVar3;
    if (uVar1 != 0) {
      uVar4 = -(((uint)pvVar3 & 0xf) >> 2) & 3;
      if (uVar1 <= uVar4) {
        uVar4 = uVar1;
      }
      uVar6 = 0;
      if (uVar4 != 0) {
        do {
          *(undefined4 *)((int)pvVar3 + uVar6 * 4) = 0xffffffff;
          uVar6 = uVar6 + 1;
        } while (uVar6 < uVar4);
        if (uVar1 == uVar4) goto LAB_00045d25;
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
        if (uVar1 - uVar4 == uVar7 * 4) goto LAB_00045d25;
      }
      do {
        *(undefined4 *)((int)pvVar3 + uVar6 * 4) = 0xffffffff;
        uVar6 = uVar6 + 1;
      } while (uVar6 < uVar1);
    }
  }
LAB_00045d25:
  uVar2 = *(ulong *)(this + 0x1a4);
LAB_00045c01:
  if (param_1 != uVar2) {
    if (uVar2 != 0) {
      if (*(void **)(this + 0x1a0) != (void *)0x0) {
        operator_delete__(*(void **)(this + 0x1a0));
      }
      *(undefined4 *)(this + 0x1a0) = 0;
    }
    *(ulong *)(this + 0x1a4) = param_1;
    if (param_1 != 0) {
      pvVar3 = operator_new__(param_1 << 2);
      uVar1 = *(uint *)(this + 0x1a4);
      *(void **)(this + 0x1a0) = pvVar3;
      if (uVar1 != 0) {
        uVar4 = -(((uint)pvVar3 & 0xf) >> 2) & 3;
        if (uVar1 <= uVar4) {
          uVar4 = uVar1;
        }
        uVar6 = 0;
        if (uVar4 != 0) {
          do {
            *(undefined4 *)((int)pvVar3 + uVar6 * 4) = 0xffffffff;
            uVar6 = uVar6 + 1;
          } while (uVar6 < uVar4);
          if (uVar1 == uVar4) {
            return;
          }
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
          if (uVar1 - uVar4 == uVar7 * 4) {
            return;
          }
        }
        do {
          *(undefined4 *)((int)pvVar3 + uVar6 * 4) = 0xffffffff;
          if (uVar1 <= uVar6 + 1) {
            return;
          }
          *(undefined4 *)((int)pvVar3 + (uVar6 + 1) * 4) = 0xffffffff;
          uVar6 = uVar6 + 2;
        } while (uVar6 < uVar1);
      }
    }
  }
  return;
}

