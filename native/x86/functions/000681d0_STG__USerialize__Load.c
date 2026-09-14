/* 000681d0 | STG::USerialize::Load */

/* STG::USerialize::Load(STG::FFileBase const*, STG::GETextureFontContainer&) */

void STG::USerialize::Load(FFileBase *param_1,GETextureFontContainer *param_2)

{
  uint uVar1;
  int iVar2;
  ulong local_20 [2];
  ulong local_18;
  uchar local_14 [4];
  
  builtin_memcpy(local_14,"ہ\x06",4);
  FUN_0002e044();
  FFileBase::Read(param_1,local_14,4);
  FFileBase::Read(param_1,(uchar *)&local_18,4);
  FFileBase::Read(param_1,(uchar *)local_20,4);
  GETextureFontContainer::Initialize(param_2,local_18,local_20[0]);
  if (local_18 != 0) {
    uVar1 = 0;
    do {
      Load(param_1,*(GEFont **)(*(int *)(param_2 + 4) + uVar1 * 4));
      uVar1 = uVar1 + 1;
    } while (uVar1 < local_18);
  }
  if (local_20[0] != 0) {
    iVar2 = 0;
    uVar1 = 0;
    do {
      Load(param_1,(GETextureFont *)(*(int *)(param_2 + 0xc) + iVar2));
      uVar1 = uVar1 + 1;
      iVar2 = iVar2 + 0x30;
    } while (uVar1 < local_20[0]);
  }
  return;
}

