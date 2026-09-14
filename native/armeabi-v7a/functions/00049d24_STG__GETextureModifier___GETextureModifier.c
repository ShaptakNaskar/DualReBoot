/* 00049d24 | STG::GETextureModifier::~GETextureModifier */

/* STG::GETextureModifier::~GETextureModifier() */

GETextureModifier * __thiscall STG::GETextureModifier::~GETextureModifier(GETextureModifier *this)

{
  void *pvVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  
  if (*(int *)(this + 0x20) == 0) {
    GETextureFontContainer::~GETextureFontContainer((GETextureFontContainer *)(this + 0xc));
    GETextureSwapContainer::~GETextureSwapContainer((GETextureSwapContainer *)this);
    return this;
  }
  iVar3 = *(int *)(this + 0x1c);
  if (iVar3 != 0) {
    iVar7 = *(int *)(iVar3 + -4) * 0x68 + iVar3;
    puVar5 = (undefined4 *)(iVar7 + -0x28);
    for (iVar4 = iVar7; iVar4 != iVar3; iVar4 = iVar4 + -0x68) {
      iVar3 = *(int *)(DAT_00049e48 + 0x49de0);
      iVar6 = iVar4 - iVar7;
      *(int *)(iVar4 + -0x20) = iVar3 + 8;
      pvVar1 = *(void **)((int)puVar5 + ((iVar7 + -0x1c) - (iVar7 + -0x3c)));
      if ((pvVar1 != (void *)(iVar4 + -0x1c)) && (pvVar1 != (void *)0x0)) {
        uVar2 = *(int *)(iVar6 + iVar7 + -0x1c) - (int)pvVar1;
        if (uVar2 < 0x81) {
          std::__node_alloc::_M_deallocate(pvVar1,uVar2);
        }
        else {
          operator_delete(pvVar1);
        }
      }
      *(int *)(iVar6 + iVar7 + -0x40) = iVar3 + 8;
      pvVar1 = (void *)*puVar5;
      if ((pvVar1 != (void *)(iVar4 + -0x3c)) && (pvVar1 != (void *)0x0)) {
        uVar2 = *(int *)(iVar6 + iVar7 + -0x3c) - (int)pvVar1;
        if (uVar2 < 0x81) {
          std::__node_alloc::_M_deallocate(pvVar1,uVar2);
        }
        else {
          operator_delete(pvVar1);
        }
      }
      iVar3 = *(int *)(this + 0x1c);
      puVar5 = puVar5 + -0x1a;
    }
    operator_delete__((void *)(iVar4 + -8));
  }
  *(undefined4 *)(this + 0x1c) = 0;
  *(undefined4 *)(this + 0x20) = 0;
  GETextureFontContainer::~GETextureFontContainer((GETextureFontContainer *)(this + 0xc));
  GETextureSwapContainer::~GETextureSwapContainer((GETextureSwapContainer *)this);
  return this;
}

