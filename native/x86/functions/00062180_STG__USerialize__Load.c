/* 00062180 | STG::USerialize::Load */

/* STG::USerialize::Load(STG::FFileBase const*, STG::GETextureSwapContainer&) */

void STG::USerialize::Load(FFileBase *param_1,GETextureSwapContainer *param_2)

{
  int iVar1;
  uint uVar2;
  ulong local_24;
  uchar local_20 [12];
  undefined4 uStack_14;
  
  uStack_14 = 0x62189;
  FUN_0002e044();
  FFileBase::Read(param_1,local_20,4);
  FFileBase::Read(param_1,(uchar *)&local_24,4);
  GETextureSwapContainer::Initialize(param_2,local_24);
  if (local_24 != 0) {
    uVar2 = 0;
    do {
      iVar1 = uVar2 * 0x34;
      uVar2 = uVar2 + 1;
      Load(param_1,(GETextureSwap *)(iVar1 + *(int *)(param_2 + 4)));
    } while (uVar2 < local_24);
  }
  return;
}

