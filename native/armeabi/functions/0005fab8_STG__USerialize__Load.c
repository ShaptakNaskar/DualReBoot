/* 0005fab8 | STG::USerialize::Load */

/* STG::USerialize::Load(STG::FFileBase const*, STG::GETextureFontContainer&) */

void STG::USerialize::Load(FFileBase *param_1,GETextureFontContainer *param_2)

{
  uint uVar1;
  int iVar2;
  ulong local_24;
  ulong local_20;
  uchar auStack_1c [8];
  
  FFileBase::Read(param_1,auStack_1c,4);
  FFileBase::Read(param_1,(uchar *)&local_24,4);
  FFileBase::Read(param_1,(uchar *)&local_20,4);
  GETextureFontContainer::Initialize(param_2,local_24,local_20);
  if (local_24 != 0) {
    uVar1 = 0;
    do {
      Load(param_1,*(GEFont **)(*(int *)(param_2 + 4) + uVar1 * 4));
      uVar1 = uVar1 + 1;
    } while (uVar1 < local_24);
  }
  if (local_20 != 0) {
    iVar2 = 0;
    uVar1 = 0;
    do {
      uVar1 = uVar1 + 1;
      Load(param_1,(GETextureFont *)(*(int *)(param_2 + 0xc) + iVar2));
      iVar2 = iVar2 + 0x30;
    } while (uVar1 < local_20);
  }
  return;
}

