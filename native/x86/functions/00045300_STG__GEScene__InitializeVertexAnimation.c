/* 00045300 | STG::GEScene::InitializeVertexAnimation */

/* STG::GEScene::InitializeVertexAnimation(unsigned long) */

void __thiscall STG::GEScene::InitializeVertexAnimation(GEScene *this,ulong param_1)

{
  uint uVar1;
  ulong uVar2;
  ulong *puVar3;
  void *pvVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  GEVertexBlender *pGVar8;
  GEVertexBlender *pGVar9;
  uint uVar10;
  undefined4 *puVar11;
  
  FUN_0002e044();
  if (*(int *)(this + 0x174) != 0) {
    pGVar8 = *(GEVertexBlender **)(this + 0x170);
    if (pGVar8 != (GEVertexBlender *)0x0) {
      pGVar9 = pGVar8 + *(int *)(pGVar8 + -4) * 0x24;
      if (pGVar8 != pGVar9) {
        do {
          pGVar9 = pGVar9 + -0x24;
          GEVertexBlender::~GEVertexBlender(pGVar9);
          pGVar8 = *(GEVertexBlender **)(this + 0x170);
        } while (pGVar8 != pGVar9);
      }
      operator_delete__(pGVar8 + -4);
    }
    *(undefined4 *)(this + 0x170) = 0;
    *(undefined4 *)(this + 0x174) = 0;
  }
  if (*(int *)(this + 0x16c) != 0) {
    if (*(void **)(this + 0x168) != (void *)0x0) {
      operator_delete__(*(void **)(this + 0x168));
    }
    *(undefined4 *)(this + 0x168) = 0;
    *(undefined4 *)(this + 0x16c) = 0;
  }
  if ((param_1 != 0) && (param_1 <= *(uint *)(this + 0xa4))) {
    if (param_1 != *(ulong *)(this + 0x174)) {
      if (*(ulong *)(this + 0x174) != 0) {
        pGVar8 = *(GEVertexBlender **)(this + 0x170);
        if (pGVar8 != (GEVertexBlender *)0x0) {
          pGVar9 = pGVar8 + *(int *)(pGVar8 + -4) * 0x24;
          if (pGVar8 != pGVar9) {
            do {
              pGVar9 = pGVar9 + -0x24;
              GEVertexBlender::~GEVertexBlender(pGVar9);
              pGVar8 = *(GEVertexBlender **)(this + 0x170);
            } while (pGVar8 != pGVar9);
          }
          operator_delete__(pGVar8 + -4);
        }
        *(undefined4 *)(this + 0x170) = 0;
      }
      *(ulong *)(this + 0x174) = param_1;
      puVar3 = operator_new__(param_1 * 0x24 + 4);
      *puVar3 = param_1;
      pGVar8 = (GEVertexBlender *)(puVar3 + 1);
      uVar2 = param_1;
      while (uVar2 = uVar2 - 1, uVar2 != 0xffffffff) {
        GEVertexBlender::GEVertexBlender(pGVar8);
        pGVar8 = pGVar8 + 0x24;
      }
      *(GEVertexBlender **)(this + 0x170) = (GEVertexBlender *)(puVar3 + 1);
      if (param_1 == *(ulong *)(this + 0x16c)) {
        return;
      }
      if (*(ulong *)(this + 0x16c) != 0) {
        if (*(void **)(this + 0x168) != (void *)0x0) {
          operator_delete__(*(void **)(this + 0x168));
        }
        *(undefined4 *)(this + 0x168) = 0;
      }
    }
    *(ulong *)(this + 0x16c) = param_1;
    pvVar4 = operator_new__(param_1 << 2);
    uVar1 = *(uint *)(this + 0x16c);
    *(void **)(this + 0x168) = pvVar4;
    if (uVar1 != 0) {
      uVar5 = -(((uint)pvVar4 & 0xf) >> 2) & 3;
      if (uVar1 < uVar5) {
        uVar5 = uVar1;
      }
      uVar7 = 0;
      if (uVar5 != 0) {
        do {
          *(undefined4 *)((int)pvVar4 + uVar7 * 4) = 0xffffffff;
          uVar7 = uVar7 + 1;
        } while (uVar7 < uVar5);
        if (uVar5 == uVar1) {
          return;
        }
      }
      uVar10 = uVar1 - uVar5 >> 2;
      if (uVar10 != 0) {
        puVar11 = (undefined4 *)((int)pvVar4 + uVar5 * 4);
        uVar6 = 0;
        do {
          uVar6 = uVar6 + 1;
          *puVar11 = 0xffffffff;
          puVar11[1] = 0xffffffff;
          puVar11[2] = 0xffffffff;
          puVar11[3] = 0xffffffff;
          puVar11 = puVar11 + 4;
        } while (uVar6 < uVar10);
        uVar7 = uVar7 + uVar10 * 4;
        if (uVar1 - uVar5 == uVar10 * 4) {
          return;
        }
      }
      do {
        *(undefined4 *)((int)pvVar4 + uVar7 * 4) = 0xffffffff;
        if (uVar1 <= uVar7 + 1) {
          return;
        }
        *(undefined4 *)((int)pvVar4 + (uVar7 + 1) * 4) = 0xffffffff;
        uVar7 = uVar7 + 2;
      } while (uVar7 < uVar1);
    }
  }
  return;
}

