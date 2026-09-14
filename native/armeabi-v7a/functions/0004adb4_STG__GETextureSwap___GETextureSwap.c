/* 0004adb4 | STG::GETextureSwap::~GETextureSwap */

/* STG::GETextureSwap::~GETextureSwap() */

GETextureSwap * __thiscall STG::GETextureSwap::~GETextureSwap(GETextureSwap *this)

{
  int iVar1;
  GETextureSwap *pGVar2;
  uint uVar3;
  void *pvVar4;
  int iVar5;
  void *pvVar6;
  int iVar7;
  void *pvVar8;
  
  iVar1 = *(int *)(this + 0x24);
  if (iVar1 != 0) {
    iVar7 = iVar1 + *(int *)(iVar1 + -4) * 0x1c;
    if (iVar1 != iVar7) {
      do {
        iVar5 = iVar7 + -0x1c;
        (*(code *)**(undefined4 **)(iVar7 + -0x1c))(iVar5);
        iVar1 = *(int *)(this + 0x24);
        iVar7 = iVar5;
      } while (iVar1 != iVar5);
    }
    operator_delete__((void *)(iVar1 + -8));
  }
  iVar1 = *(int *)(this + 0x28);
  *(undefined4 *)(this + 0x24) = 0;
  if (iVar1 == 0) {
    iVar7 = *(int *)((int)&DAT_0004af34 + DAT_0004af38);
  }
  else {
    iVar5 = iVar1 + *(int *)(iVar1 + -4) * 0x20;
    iVar7 = *(int *)(DAT_0004af34 + 0x4ae38);
    pvVar8 = (void *)(iVar5 + -0x1c);
    pvVar6 = pvVar8;
    while( true ) {
      if (iVar1 == (int)pvVar6 + 0x1c) break;
      *(int *)((int)pvVar6 + -4) = iVar7 + 8;
      pvVar4 = *(void **)((int)pvVar8 + (int)pvVar6 + (0x30 - iVar5));
      if ((pvVar4 != pvVar6) && (pvVar4 != (void *)0x0)) {
        uVar3 = *(int *)((int)pvVar8 + (int)pvVar6 + (0x1c - iVar5)) - (int)pvVar4;
        if (uVar3 < 0x81) {
          std::__node_alloc::_M_deallocate(pvVar4,uVar3);
        }
        else {
          operator_delete(pvVar4);
        }
      }
      iVar1 = *(int *)(this + 0x28);
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
  pGVar2 = *(GETextureSwap **)(this + 0x18);
  *(int *)this = iVar7 + 8;
  *(undefined4 *)(this + 0x30) = 0;
  if ((pGVar2 != this + 4) && (pGVar2 != (GETextureSwap *)0x0)) {
    if ((uint)(*(int *)(this + 4) - (int)pGVar2) < 0x81) {
      std::__node_alloc::_M_deallocate(pGVar2,*(int *)(this + 4) - (int)pGVar2);
      return this;
    }
    operator_delete(pGVar2);
  }
  return this;
}

