/* 000460e0 | STG::GEScene::InitializeModelVisMask_WeekDay */

/* STG::GEScene::InitializeModelVisMask_WeekDay(unsigned long) */

void __thiscall STG::GEScene::InitializeModelVisMask_WeekDay(GEScene *this,ulong param_1)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  void *pvVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  undefined4 *puVar10;
  
  FUN_0002e044();
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
  uVar3 = 0;
  if (param_1 == *(ulong *)(this + 0x13c)) goto LAB_0004617d;
  if (*(ulong *)(this + 0x13c) != 0) {
    if (*(void **)(this + 0x138) != (void *)0x0) {
      operator_delete__(*(void **)(this + 0x138));
    }
    *(undefined4 *)(this + 0x138) = 0;
  }
  *(ulong *)(this + 0x13c) = param_1;
  if (param_1 != 0) {
    pvVar4 = operator_new__(param_1 << 2);
    uVar2 = *(uint *)(this + 0x13c);
    *(void **)(this + 0x138) = pvVar4;
    if (uVar2 != 0) {
      uVar6 = -(((uint)pvVar4 & 0xf) >> 2) & 3;
      if (uVar2 < uVar6) {
        uVar6 = uVar2;
      }
      uVar8 = 0;
      if (uVar6 != 0) {
        do {
          *(undefined4 *)((int)pvVar4 + uVar8 * 4) = 0xffffffff;
          uVar8 = uVar8 + 1;
        } while (uVar8 < uVar6);
        if (uVar6 == uVar2) goto LAB_0004621d;
      }
      uVar9 = uVar2 - uVar6 >> 2;
      if (uVar9 != 0) {
        puVar10 = (undefined4 *)((int)pvVar4 + uVar6 * 4);
        uVar7 = 0;
        do {
          uVar7 = uVar7 + 1;
          *puVar10 = 0xffffffff;
          puVar10[1] = 0xffffffff;
          puVar10[2] = 0xffffffff;
          puVar10[3] = 0xffffffff;
          puVar10 = puVar10 + 4;
        } while (uVar7 < uVar9);
        uVar8 = uVar8 + uVar9 * 4;
        if (uVar2 - uVar6 == uVar9 * 4) goto LAB_0004621d;
      }
      do {
        *(undefined4 *)((int)pvVar4 + uVar8 * 4) = 0xffffffff;
        uVar8 = uVar8 + 1;
      } while (uVar8 < uVar2);
    }
  }
LAB_0004621d:
  uVar3 = *(ulong *)(this + 0x144);
LAB_0004617d:
  if (param_1 != uVar3) {
    if (uVar3 != 0) {
      if (*(void **)(this + 0x140) != (void *)0x0) {
        operator_delete__(*(void **)(this + 0x140));
      }
      *(undefined4 *)(this + 0x140) = 0;
    }
    *(ulong *)(this + 0x144) = param_1;
    if (param_1 != 0) {
      pvVar4 = operator_new__(param_1);
      iVar1 = *(int *)(this + 0x144);
      *(void **)(this + 0x140) = pvVar4;
      if (iVar1 != 0) {
        iVar5 = 0;
        do {
          *(undefined1 *)(*(int *)(this + 0x140) + iVar5) = 0;
          iVar5 = iVar5 + 1;
        } while (iVar1 != iVar5);
        return;
      }
    }
  }
  return;
}

