/* 000537a0 | STG::GETextureSwap::~GETextureSwap */

/* STG::GETextureSwap::~GETextureSwap() */

void __thiscall STG::GETextureSwap::~GETextureSwap(GETextureSwap *this)

{
  int iVar1;
  void *pvVar2;
  GETextureSwap *pGVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  int unaff_EBX;
  int iVar7;
  undefined4 *puVar8;
  int iVar9;
  
  FUN_0002e044();
  puVar4 = *(undefined4 **)(this + 0x24);
  if (puVar4 != (undefined4 *)0x0) {
    puVar8 = puVar4 + puVar4[-1] * 7;
    if (puVar4 != puVar8) {
      do {
        puVar8 = puVar8 + -7;
        (**(code **)*puVar8)(puVar8);
        puVar4 = *(undefined4 **)(this + 0x24);
      } while (puVar4 != puVar8);
    }
    operator_delete__(puVar4 + -1);
  }
  iVar5 = *(int *)(this + 0x28);
  *(undefined4 *)(this + 0x24) = 0;
  if (iVar5 != 0) {
    iVar1 = *(int *)(unaff_EBX + 0x48693);
    iVar7 = *(int *)(iVar5 + -4) * 0x20 + iVar5;
    for (iVar9 = iVar7; iVar9 != iVar5; iVar9 = iVar9 + -0x20) {
      *(int *)(iVar9 + -0x20) = iVar1 + 8;
      pvVar2 = *(void **)(iVar7 + -8 + (iVar9 - iVar7));
      if ((pvVar2 != (void *)(iVar9 + -0x1c)) && (pvVar2 != (void *)0x0)) {
        uVar6 = *(int *)(iVar7 + -0x1c + (iVar9 - iVar7)) - (int)pvVar2;
        if (uVar6 < 0x81) {
          std::__node_alloc::_M_deallocate(pvVar2,uVar6);
        }
        else {
          operator_delete(pvVar2);
        }
      }
      iVar5 = *(int *)(this + 0x28);
    }
    operator_delete__((void *)(iVar9 + -4));
  }
  *(undefined4 *)(this + 0x28) = 0;
  if (*(void **)(this + 0x2c) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x2c));
  }
  *(undefined4 *)(this + 0x2c) = 0;
  if (*(void **)(this + 0x30) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x30));
  }
  iVar5 = *(int *)(unaff_EBX + 0x48693);
  *(undefined4 *)(this + 0x30) = 0;
  *(int *)this = iVar5 + 8;
  pGVar3 = *(GETextureSwap **)(this + 0x18);
  if ((pGVar3 != this + 4) && (pGVar3 != (GETextureSwap *)0x0)) {
    if (0x80 < (uint)(*(int *)(this + 4) - (int)pGVar3)) {
      operator_delete(pGVar3);
      return;
    }
    std::__node_alloc::_M_deallocate(pGVar3,*(int *)(this + 4) - (int)pGVar3);
  }
  return;
}

