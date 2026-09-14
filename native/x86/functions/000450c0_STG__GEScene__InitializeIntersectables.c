/* 000450c0 | STG::GEScene::InitializeIntersectables */

/* STG::GEScene::InitializeIntersectables(unsigned long) */

void __thiscall STG::GEScene::InitializeIntersectables(GEScene *this,ulong param_1)

{
  uint uVar1;
  int iVar2;
  void *pvVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  undefined4 *puVar9;
  
  FUN_0002e044();
  if (*(int *)(this + 0x11c) != 0) {
    if (*(void **)(this + 0x118) != (void *)0x0) {
      operator_delete__(*(void **)(this + 0x118));
    }
    *(undefined4 *)(this + 0x118) = 0;
    *(undefined4 *)(this + 0x11c) = 0;
  }
  if (*(int *)(this + 0x114) != 0) {
    if (*(void **)(this + 0x110) != (void *)0x0) {
      operator_delete__(*(void **)(this + 0x110));
    }
    *(undefined4 *)(this + 0x110) = 0;
    *(undefined4 *)(this + 0x114) = 0;
  }
  uVar1 = *(uint *)(this + 0xa4);
  *(undefined4 *)(this + 0x120) = 0;
  *(undefined4 *)(this + 0x124) = 0;
  if (param_1 <= uVar1) {
    if (uVar1 != *(uint *)(this + 0x11c)) {
      if (*(uint *)(this + 0x11c) != 0) {
        if (*(void **)(this + 0x118) != (void *)0x0) {
          operator_delete__(*(void **)(this + 0x118));
        }
        *(undefined4 *)(this + 0x118) = 0;
      }
      *(uint *)(this + 0x11c) = uVar1;
      if (uVar1 != 0) {
        pvVar3 = operator_new__(uVar1);
        iVar2 = *(int *)(this + 0x11c);
        *(void **)(this + 0x118) = pvVar3;
        if (iVar2 != 0) {
          iVar7 = 0;
          do {
            *(undefined1 *)((int)pvVar3 + iVar7) = 0;
            iVar7 = iVar7 + 1;
          } while (iVar7 != iVar2);
        }
      }
    }
    if ((param_1 != 0) && (param_1 != *(ulong *)(this + 0x114))) {
      if (*(ulong *)(this + 0x114) != 0) {
        if (*(void **)(this + 0x110) != (void *)0x0) {
          operator_delete__(*(void **)(this + 0x110));
        }
        *(undefined4 *)(this + 0x110) = 0;
      }
      *(ulong *)(this + 0x114) = param_1;
      pvVar3 = operator_new__(param_1 << 2);
      uVar1 = *(uint *)(this + 0x114);
      *(void **)(this + 0x110) = pvVar3;
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
          if (uVar4 == uVar1) {
            return;
          }
        }
        uVar8 = uVar1 - uVar4 >> 2;
        if (uVar8 != 0) {
          puVar9 = (undefined4 *)((int)pvVar3 + uVar4 * 4);
          uVar5 = 0;
          do {
            uVar5 = uVar5 + 1;
            *puVar9 = 0xffffffff;
            puVar9[1] = 0xffffffff;
            puVar9[2] = 0xffffffff;
            puVar9[3] = 0xffffffff;
            puVar9 = puVar9 + 4;
          } while (uVar5 < uVar8);
          uVar6 = uVar6 + uVar8 * 4;
          if (uVar1 - uVar4 == uVar8 * 4) {
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

