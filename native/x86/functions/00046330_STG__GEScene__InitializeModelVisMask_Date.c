/* 00046330 | STG::GEScene::InitializeModelVisMask_Date */

/* STG::GEScene::InitializeModelVisMask_Date(unsigned long) */

void __thiscall STG::GEScene::InitializeModelVisMask_Date(GEScene *this,ulong param_1)

{
  uint uVar1;
  ulong uVar2;
  void *pvVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  void *pvVar7;
  uint uVar8;
  uint uVar9;
  undefined4 *puVar10;
  
  FUN_0002e044();
  if (*(int *)(this + 0x14c) != 0) {
    if (*(void **)(this + 0x148) != (void *)0x0) {
      operator_delete__(*(void **)(this + 0x148));
    }
    *(undefined4 *)(this + 0x148) = 0;
    *(undefined4 *)(this + 0x14c) = 0;
  }
  if (*(int *)(this + 0x154) != 0) {
    if (*(void **)(this + 0x150) != (void *)0x0) {
      operator_delete__(*(void **)(this + 0x150));
    }
    *(undefined4 *)(this + 0x150) = 0;
    *(undefined4 *)(this + 0x154) = 0;
  }
  if (*(uint *)(this + 0xa4) < param_1) {
    return;
  }
  uVar2 = 0;
  if (param_1 == *(ulong *)(this + 0x14c)) goto LAB_000463d1;
  if (*(ulong *)(this + 0x14c) != 0) {
    if (*(void **)(this + 0x148) != (void *)0x0) {
      operator_delete__(*(void **)(this + 0x148));
    }
    *(undefined4 *)(this + 0x148) = 0;
  }
  *(ulong *)(this + 0x14c) = param_1;
  if (param_1 != 0) {
    pvVar7 = operator_new__(param_1 << 2);
    uVar1 = *(uint *)(this + 0x14c);
    *(void **)(this + 0x148) = pvVar7;
    if (uVar1 != 0) {
      uVar5 = -(((uint)pvVar7 & 0xf) >> 2) & 3;
      if (uVar1 <= uVar5) {
        uVar5 = uVar1;
      }
      uVar8 = 0;
      if (uVar5 != 0) {
        do {
          *(undefined4 *)((int)pvVar7 + uVar8 * 4) = 0xffffffff;
          uVar8 = uVar8 + 1;
        } while (uVar8 < uVar5);
        if (uVar1 == uVar5) goto LAB_00046485;
      }
      uVar9 = uVar1 - uVar5 >> 2;
      if (uVar9 != 0) {
        puVar10 = (undefined4 *)((int)pvVar7 + uVar5 * 4);
        uVar6 = 0;
        do {
          uVar6 = uVar6 + 1;
          *puVar10 = 0xffffffff;
          puVar10[1] = 0xffffffff;
          puVar10[2] = 0xffffffff;
          puVar10[3] = 0xffffffff;
          puVar10 = puVar10 + 4;
        } while (uVar6 < uVar9);
        uVar8 = uVar8 + uVar9 * 4;
        if (uVar1 - uVar5 == uVar9 * 4) goto LAB_00046485;
      }
      do {
        *(undefined4 *)((int)pvVar7 + uVar8 * 4) = 0xffffffff;
        uVar8 = uVar8 + 1;
      } while (uVar8 < uVar1);
    }
  }
LAB_00046485:
  uVar2 = *(ulong *)(this + 0x154);
LAB_000463d1:
  if (param_1 != uVar2) {
    if (uVar2 != 0) {
      if (*(void **)(this + 0x150) != (void *)0x0) {
        operator_delete__(*(void **)(this + 0x150));
      }
      *(undefined4 *)(this + 0x150) = 0;
    }
    *(ulong *)(this + 0x154) = param_1;
    if (param_1 != 0) {
      pvVar3 = operator_new__(param_1 * 0x30);
      uVar2 = 0;
      pvVar7 = pvVar3;
      do {
        iVar4 = 0;
        do {
          *(undefined4 *)((int)pvVar7 + iVar4 * 4) = 0;
          iVar4 = iVar4 + 1;
        } while (iVar4 != 0xc);
        uVar2 = uVar2 + 1;
        pvVar7 = (void *)((int)pvVar7 + 0x30);
      } while (uVar2 != param_1);
      *(void **)(this + 0x150) = pvVar3;
      return;
    }
  }
  return;
}

