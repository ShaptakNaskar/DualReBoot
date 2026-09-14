/* 00042330 | STG::GEScene::InitializeSkeleton */

/* STG::GEScene::InitializeSkeleton(unsigned long) */

void __thiscall STG::GEScene::InitializeSkeleton(GEScene *this,ulong param_1)

{
  ulong uVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  Mesh *pMVar5;
  Mesh *pMVar6;
  
  if (*(int *)(this + 0x184) != 0) {
    pMVar6 = *(Mesh **)(this + 0x180);
    if (pMVar6 != (Mesh *)0x0) {
      pMVar5 = pMVar6 + *(int *)(pMVar6 + -4) * 0x2c;
      if (pMVar6 != pMVar5) {
        do {
          pMVar5 = pMVar5 + -0x2c;
          GESkeleton::Mesh::~Mesh(pMVar5);
          pMVar6 = *(Mesh **)(this + 0x180);
        } while (pMVar6 != pMVar5);
      }
      operator_delete__(pMVar6 + -8);
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
        pMVar6 = *(Mesh **)(this + 0x180);
        if (pMVar6 != (Mesh *)0x0) {
          pMVar5 = pMVar6 + *(int *)(pMVar6 + -4) * 0x2c;
          if (pMVar6 != pMVar5) {
            do {
              pMVar5 = pMVar5 + -0x2c;
              GESkeleton::Mesh::~Mesh(pMVar5);
              pMVar6 = *(Mesh **)(this + 0x180);
            } while (pMVar6 != pMVar5);
          }
          operator_delete__(pMVar6 + -8);
        }
        *(undefined4 *)(this + 0x180) = 0;
      }
      *(ulong *)(this + 0x184) = param_1;
      puVar2 = operator_new__(param_1 * 0x2c + 8);
      *puVar2 = 0x2c;
      puVar2[1] = param_1;
      pMVar6 = (Mesh *)(puVar2 + 2);
      uVar1 = param_1;
      while (uVar1 = uVar1 - 1, uVar1 != 0xffffffff) {
        GESkeleton::Mesh::Mesh(pMVar6);
        pMVar6 = pMVar6 + 0x2c;
      }
      *(Mesh **)(this + 0x180) = (Mesh *)(puVar2 + 2);
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
    puVar2 = operator_new__(param_1 << 2);
    iVar3 = *(int *)(this + 0x17c);
    *(undefined4 **)(this + 0x178) = puVar2;
    if (iVar3 != 0) {
      iVar4 = 0;
      do {
        iVar4 = iVar4 + 1;
        *puVar2 = 0xffffffff;
        puVar2 = puVar2 + 1;
      } while (iVar4 != iVar3);
      return;
    }
  }
  return;
}

