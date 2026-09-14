/* 0005b280 | STG::USerialize::Load */

/* STG::USerialize::Load(STG::FFileBase const*, STG::GETextureFontContainer&) */

void STG::USerialize::Load(FFileBase *param_1,GETextureFontContainer *param_2)

{
  GETextureFont *pGVar1;
  uint uVar2;
  int iVar3;
  ulong local_24;
  ulong local_20;
  uchar auStack_1c [8];
  
  FFileBase::Read(param_1,auStack_1c,4);
  FFileBase::Read(param_1,(uchar *)&local_24,4);
  FFileBase::Read(param_1,(uchar *)&local_20,4);
  GETextureFontContainer::Initialize(param_2,local_24,local_20);
  if (local_24 != 0) {
    uVar2 = 0;
    do {
      iVar3 = uVar2 * 4;
      uVar2 = uVar2 + 1;
      Load(param_1,*(GEFont **)(*(int *)(param_2 + 4) + iVar3));
    } while (uVar2 < local_24);
  }
  if (local_20 != 0) {
    iVar3 = 0;
    uVar2 = 0;
    do {
      uVar2 = uVar2 + 1;
      pGVar1 = (GETextureFont *)(*(int *)(param_2 + 0xc) + iVar3);
      iVar3 = iVar3 + 0x30;
      Load(param_1,pGVar1);
    } while (uVar2 < local_20);
  }
  return;
}

