/* 0004d250 | STG::GETextureSwap::~GETextureSwap */

/* STG::GETextureSwap::~GETextureSwap() */

GETextureSwap * __thiscall STG::GETextureSwap::~GETextureSwap(GETextureSwap *this)

{
  undefined4 *puVar1;
  int iVar2;
  GETextureSwap *pGVar3;
  uint uVar4;
  void *pvVar5;
  void *pvVar6;
  int iVar7;
  int iVar8;
  void *pvVar9;
  
  iVar2 = *(int *)(this + 0x24);
  if (iVar2 != 0) {
    iVar7 = *(int *)(iVar2 + -4) * 0x1c + iVar2;
    if (iVar2 != iVar7) {
      do {
        puVar1 = (undefined4 *)(iVar7 + -0x1c);
        iVar7 = iVar7 + -0x1c;
        (**(code **)*puVar1)(iVar7);
        iVar2 = *(int *)(this + 0x24);
      } while (iVar2 != iVar7);
    }
    operator_delete__((void *)(iVar2 + -8));
  }
  iVar2 = *(int *)(this + 0x28);
  *(undefined4 *)(this + 0x24) = 0;
  if (iVar2 == 0) {
    iVar7 = *(int *)((int)&DAT_0004d3d4 + DAT_0004d3d8);
  }
  else {
    iVar8 = iVar2 + *(int *)(iVar2 + -4) * 0x20;
    pvVar9 = (void *)(iVar8 + -0x1c);
    iVar7 = *(int *)(DAT_0004d3d4 + 0x4d2d8);
    pvVar6 = pvVar9;
    while( true ) {
      if (iVar2 == (int)pvVar6 + 0x1c) break;
      *(int *)((int)pvVar6 + -4) = iVar7 + 8;
      pvVar5 = *(void **)((int)pvVar9 + (int)pvVar6 + (0x30 - iVar8));
      if ((pvVar5 != pvVar6) && (pvVar5 != (void *)0x0)) {
        uVar4 = *(int *)((int)pvVar9 + (int)pvVar6 + (0x1c - iVar8)) - (int)pvVar5;
        if (uVar4 < 0x81) {
          std::__node_alloc::_M_deallocate(pvVar5,uVar4);
        }
        else {
          operator_delete(pvVar5);
        }
      }
      iVar2 = *(int *)(this + 0x28);
      pvVar6 = (void *)((int)pvVar6 + -0x20);
    }
    operator_delete__((void *)((int)pvVar6 + 0x14));
  }
  *(undefined4 *)(this + 0x28) = 0;
  if (*(void **)(this + 0x2c) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x2c));
  }
  *(undefined4 *)(this + 0x2c) = 0;
  if (*(void **)(this + 0x30) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x30));
  }
  pGVar3 = *(GETextureSwap **)(this + 0x18);
  *(undefined4 *)(this + 0x30) = 0;
  *(int *)this = iVar7 + 8;
  if ((pGVar3 != this + 4) && (pGVar3 != (GETextureSwap *)0x0)) {
    if ((uint)(*(int *)(this + 4) - (int)pGVar3) < 0x81) {
      std::__node_alloc::_M_deallocate(pGVar3,*(int *)(this + 4) - (int)pGVar3);
      return this;
    }
    operator_delete(pGVar3);
  }
  return this;
}

