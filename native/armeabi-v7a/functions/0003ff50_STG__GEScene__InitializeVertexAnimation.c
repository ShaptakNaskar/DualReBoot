/* 0003ff50 | STG::GEScene::InitializeVertexAnimation */

/* STG::GEScene::InitializeVertexAnimation(unsigned long) */

void __thiscall STG::GEScene::InitializeVertexAnimation(GEScene *this,ulong param_1)

{
  ulong uVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  GEVertexBlender *pGVar5;
  GEVertexBlender *pGVar6;
  
  if (*(int *)(this + 0x174) != 0) {
    pGVar6 = *(GEVertexBlender **)(this + 0x170);
    if (pGVar6 != (GEVertexBlender *)0x0) {
      pGVar5 = pGVar6 + *(int *)(pGVar6 + -4) * 0x24;
      if (pGVar6 != pGVar5) {
        do {
          pGVar5 = pGVar5 + -0x24;
          GEVertexBlender::~GEVertexBlender(pGVar5);
          pGVar6 = *(GEVertexBlender **)(this + 0x170);
        } while (pGVar6 != pGVar5);
      }
      operator_delete__(pGVar6 + -8);
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
  if (param_1 == 0) {
    return;
  }
  if (*(uint *)(this + 0xa4) < param_1) {
    return;
  }
  if (param_1 != *(ulong *)(this + 0x174)) {
    if (*(ulong *)(this + 0x174) != 0) {
      pGVar6 = *(GEVertexBlender **)(this + 0x170);
      if (pGVar6 != (GEVertexBlender *)0x0) {
        pGVar5 = pGVar6 + *(int *)(pGVar6 + -4) * 0x24;
        if (pGVar6 != pGVar5) {
          do {
            pGVar5 = pGVar5 + -0x24;
            GEVertexBlender::~GEVertexBlender(pGVar5);
            pGVar6 = *(GEVertexBlender **)(this + 0x170);
          } while (pGVar6 != pGVar5);
        }
        operator_delete__(pGVar6 + -8);
      }
      *(undefined4 *)(this + 0x170) = 0;
    }
    *(ulong *)(this + 0x174) = param_1;
    puVar2 = operator_new__(param_1 * 0x24 + 8);
    puVar2[1] = param_1;
    *puVar2 = 0x24;
    pGVar6 = (GEVertexBlender *)(puVar2 + 2);
    uVar1 = param_1;
    while (uVar1 = uVar1 - 1, uVar1 != 0xffffffff) {
      GEVertexBlender::GEVertexBlender(pGVar6);
      pGVar6 = pGVar6 + 0x24;
    }
    *(GEVertexBlender **)(this + 0x170) = (GEVertexBlender *)(puVar2 + 2);
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
  puVar2 = operator_new__(param_1 << 2);
  iVar3 = *(int *)(this + 0x16c);
  *(undefined4 **)(this + 0x168) = puVar2;
  if (iVar3 != 0) {
    iVar4 = 0;
    do {
      iVar4 = iVar4 + 1;
      *puVar2 = 0xffffffff;
      puVar2 = puVar2 + 1;
    } while (iVar4 != iVar3);
    return;
  }
  return;
}

