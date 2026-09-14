/* 00045e20 | STG::GEScene::InitializeModelVisMask_TimeOfDay */

/* STG::GEScene::InitializeModelVisMask_TimeOfDay(unsigned long) */

void __thiscall STG::GEScene::InitializeModelVisMask_TimeOfDay(GEScene *this,ulong param_1)

{
  uint uVar1;
  ulong uVar2;
  void *pvVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined1 (*pauVar8) [16];
  undefined4 *puVar9;
  
  FUN_0002e044();
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
  uVar2 = 0;
  if (param_1 == *(ulong *)(this + 300)) goto LAB_00045ec1;
  if (*(ulong *)(this + 300) != 0) {
    if (*(void **)(this + 0x128) != (void *)0x0) {
      operator_delete__(*(void **)(this + 0x128));
    }
    *(undefined4 *)(this + 0x128) = 0;
  }
  *(ulong *)(this + 300) = param_1;
  if (param_1 != 0) {
    pvVar3 = operator_new__(param_1 << 2);
    uVar1 = *(uint *)(this + 300);
    *(void **)(this + 0x128) = pvVar3;
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
        if (uVar1 == uVar4) goto LAB_00045fe5;
      }
      uVar7 = uVar1 - uVar4 >> 2;
      if (uVar7 != 0) {
        puVar9 = (undefined4 *)((int)pvVar3 + uVar4 * 4);
        uVar5 = 0;
        do {
          uVar5 = uVar5 + 1;
          *puVar9 = 0xffffffff;
          puVar9[1] = 0xffffffff;
          puVar9[2] = 0xffffffff;
          puVar9[3] = 0xffffffff;
          puVar9 = puVar9 + 4;
        } while (uVar5 < uVar7);
        uVar6 = uVar6 + uVar7 * 4;
        if (uVar1 - uVar4 == uVar7 * 4) goto LAB_00045fe5;
      }
      do {
        *(undefined4 *)((int)pvVar3 + uVar6 * 4) = 0xffffffff;
        uVar6 = uVar6 + 1;
      } while (uVar6 < uVar1);
    }
  }
LAB_00045fe5:
  uVar2 = *(ulong *)(this + 0x134);
LAB_00045ec1:
  if (param_1 != uVar2) {
    if (uVar2 != 0) {
      if (*(void **)(this + 0x130) != (void *)0x0) {
        operator_delete__(*(void **)(this + 0x130));
      }
      *(undefined4 *)(this + 0x130) = 0;
    }
    *(ulong *)(this + 0x134) = param_1;
    if (param_1 != 0) {
      pvVar3 = operator_new__(param_1 << 2);
      uVar1 = *(uint *)(this + 0x134);
      *(void **)(this + 0x130) = pvVar3;
      if (uVar1 != 0) {
        uVar4 = -(((uint)pvVar3 & 0xf) >> 2) & 3;
        if (uVar1 <= uVar4) {
          uVar4 = uVar1;
        }
        uVar6 = 0;
        if (uVar4 != 0) {
          do {
            *(undefined4 *)((int)pvVar3 + uVar6 * 4) = 0;
            uVar6 = uVar6 + 1;
          } while (uVar6 < uVar4);
          if (uVar1 == uVar4) {
            return;
          }
        }
        uVar7 = uVar1 - uVar4 >> 2;
        if (uVar7 != 0) {
          pauVar8 = (undefined1 (*) [16])((int)pvVar3 + uVar4 * 4);
          uVar5 = 0;
          do {
            uVar5 = uVar5 + 1;
            *pauVar8 = (undefined1  [16])0x0;
            pauVar8 = pauVar8 + 1;
          } while (uVar5 < uVar7);
          uVar6 = uVar6 + uVar7 * 4;
          if (uVar1 - uVar4 == uVar7 * 4) {
            return;
          }
        }
        do {
          *(undefined4 *)((int)pvVar3 + uVar6 * 4) = 0;
          if (uVar1 <= uVar6 + 1) {
            return;
          }
          *(undefined4 *)((int)pvVar3 + (uVar6 + 1) * 4) = 0;
          uVar6 = uVar6 + 2;
        } while (uVar6 < uVar1);
      }
    }
  }
  return;
}

