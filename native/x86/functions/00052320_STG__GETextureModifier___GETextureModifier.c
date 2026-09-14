/* 00052320 | STG::GETextureModifier::~GETextureModifier */

/* STG::GETextureModifier::~GETextureModifier() */

void __thiscall STG::GETextureModifier::~GETextureModifier(GETextureModifier *this)

{
  void *pvVar1;
  uint uVar2;
  int unaff_EBX;
  int iVar3;
  int iVar4;
  int iVar5;
  
  FUN_0002e044();
  if (*(int *)(this + 0x20) != 0) {
    iVar3 = *(int *)(this + 0x1c);
    if (iVar3 != 0) {
      iVar5 = *(int *)(iVar3 + -4) * 0x68 + iVar3;
      for (iVar4 = iVar5; iVar4 != iVar3; iVar4 = iVar4 + -0x68) {
        iVar3 = iVar4 - iVar5;
        *(int *)(iVar4 + -0x20) = *(int *)(GEScene::UpdateSimulation + unaff_EBX + 3) + 8;
        pvVar1 = *(void **)(iVar5 + -8 + iVar3);
        if ((pvVar1 != (void *)(iVar4 + -0x1c)) && (pvVar1 != (void *)0x0)) {
          uVar2 = *(int *)(iVar5 + -0x1c + iVar3) - (int)pvVar1;
          if (uVar2 < 0x81) {
            std::__node_alloc::_M_deallocate(pvVar1,uVar2);
          }
          else {
            operator_delete(pvVar1);
          }
        }
        *(int *)(iVar5 + -0x40 + iVar3) = *(int *)(GEScene::UpdateSimulation + unaff_EBX + 3) + 8;
        pvVar1 = *(void **)(iVar5 + -0x28 + iVar3);
        if ((pvVar1 != (void *)(iVar4 + -0x3c)) && (pvVar1 != (void *)0x0)) {
          uVar2 = *(int *)(iVar5 + -0x3c + iVar3) - (int)pvVar1;
          if (uVar2 < 0x81) {
            std::__node_alloc::_M_deallocate(pvVar1,uVar2);
          }
          else {
            operator_delete(pvVar1);
          }
        }
        iVar3 = *(int *)(this + 0x1c);
      }
      operator_delete__((void *)(iVar4 + -4));
    }
    *(undefined4 *)(this + 0x1c) = 0;
    *(undefined4 *)(this + 0x20) = 0;
  }
  GETextureFontContainer::~GETextureFontContainer((GETextureFontContainer *)(this + 0xc));
  GETextureSwapContainer::~GETextureSwapContainer((GETextureSwapContainer *)this);
  return;
}

