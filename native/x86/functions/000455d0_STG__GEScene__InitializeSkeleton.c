/* 000455d0 | STG::GEScene::InitializeSkeleton */

/* STG::GEScene::InitializeSkeleton(unsigned long) */

void __thiscall STG::GEScene::InitializeSkeleton(GEScene *this,ulong param_1)

{
  uint uVar1;
  ulong uVar2;
  ulong *puVar3;
  Mesh *pMVar4;
  void *pvVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  Mesh *pMVar9;
  uint uVar10;
  undefined4 *puVar11;
  
  FUN_0002e044();
  if (*(int *)(this + 0x184) != 0) {
    pMVar9 = *(Mesh **)(this + 0x180);
    if (pMVar9 != (Mesh *)0x0) {
      pMVar4 = pMVar9 + *(int *)(pMVar9 + -4) * 0x2c;
      if (pMVar9 != pMVar4) {
        do {
          pMVar4 = pMVar4 + -0x2c;
          GESkeleton::Mesh::~Mesh(pMVar4);
          pMVar9 = *(Mesh **)(this + 0x180);
        } while (pMVar9 != pMVar4);
      }
      operator_delete__(pMVar9 + -4);
    }
    *(undefined4 *)(this + 0x180) = 0;
    *(undefined4 *)(this + 0x184) = 0;
  }
  if (*(int *)(this + 0x17c) != 0) {
    if (*(void **)(this + 0x178) != (void *)0x0) {
      operator_delete__(*(void **)(this + 0x178));
    }
    *(undefined4 *)(this + 0x178) = 0;
    *(undefined4 *)(this + 0x17c) = 0;
  }
  if ((param_1 != 0) && (param_1 <= *(uint *)(this + 0xa4))) {
    if (param_1 != *(ulong *)(this + 0x184)) {
      if (*(ulong *)(this + 0x184) != 0) {
        pMVar9 = *(Mesh **)(this + 0x180);
        if (pMVar9 != (Mesh *)0x0) {
          pMVar4 = pMVar9 + *(int *)(pMVar9 + -4) * 0x2c;
          if (pMVar9 != pMVar4) {
            do {
              pMVar4 = pMVar4 + -0x2c;
              GESkeleton::Mesh::~Mesh(pMVar4);
              pMVar9 = *(Mesh **)(this + 0x180);
            } while (pMVar9 != pMVar4);
          }
          operator_delete__(pMVar9 + -4);
        }
        *(undefined4 *)(this + 0x180) = 0;
      }
      *(ulong *)(this + 0x184) = param_1;
      puVar3 = operator_new__(param_1 * 0x2c + 4);
      *puVar3 = param_1;
      pMVar9 = (Mesh *)(puVar3 + 1);
      uVar2 = param_1;
      while (uVar2 = uVar2 - 1, uVar2 != 0xffffffff) {
        GESkeleton::Mesh::Mesh(pMVar9);
        pMVar9 = pMVar9 + 0x2c;
      }
      *(Mesh **)(this + 0x180) = (Mesh *)(puVar3 + 1);
      if (param_1 == *(ulong *)(this + 0x17c)) {
        return;
      }
      if (*(ulong *)(this + 0x17c) != 0) {
        if (*(void **)(this + 0x178) != (void *)0x0) {
          operator_delete__(*(void **)(this + 0x178));
        }
        *(undefined4 *)(this + 0x178) = 0;
      }
    }
    *(ulong *)(this + 0x17c) = param_1;
    pvVar5 = operator_new__(param_1 << 2);
    uVar1 = *(uint *)(this + 0x17c);
    *(void **)(this + 0x178) = pvVar5;
    if (uVar1 != 0) {
      uVar6 = -(((uint)pvVar5 & 0xf) >> 2) & 3;
      if (uVar1 < uVar6) {
        uVar6 = uVar1;
      }
      uVar8 = 0;
      if (uVar6 != 0) {
        do {
          *(undefined4 *)((int)pvVar5 + uVar8 * 4) = 0xffffffff;
          uVar8 = uVar8 + 1;
        } while (uVar8 < uVar6);
        if (uVar6 == uVar1) {
          return;
        }
      }
      uVar10 = uVar1 - uVar6 >> 2;
      if (uVar10 != 0) {
        puVar11 = (undefined4 *)((int)pvVar5 + uVar6 * 4);
        uVar7 = 0;
        do {
          uVar7 = uVar7 + 1;
          *puVar11 = 0xffffffff;
          puVar11[1] = 0xffffffff;
          puVar11[2] = 0xffffffff;
          puVar11[3] = 0xffffffff;
          puVar11 = puVar11 + 4;
        } while (uVar7 < uVar10);
        uVar8 = uVar8 + uVar10 * 4;
        if (uVar1 - uVar6 == uVar10 * 4) {
          return;
        }
      }
      do {
        *(undefined4 *)((int)pvVar5 + uVar8 * 4) = 0xffffffff;
        if (uVar1 <= uVar8 + 1) {
          return;
        }
        *(undefined4 *)((int)pvVar5 + (uVar8 + 1) * 4) = 0xffffffff;
        uVar8 = uVar8 + 2;
      } while (uVar8 < uVar1);
    }
  }
  return;
}

