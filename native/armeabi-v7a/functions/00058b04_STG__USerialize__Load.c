/* 00058b04 | STG::USerialize::Load */

/* STG::USerialize::Load(STG::FFileBase const*, STG::GETextureSwapContainer&) */

void STG::USerialize::Load(FFileBase *param_1,GETextureSwapContainer *param_2)

{
  GETextureSwap *pGVar1;
  int iVar2;
  uint uVar3;
  ulong local_20;
  uchar auStack_1c [8];
  
  FFileBase::Read(param_1,auStack_1c,4);
  FFileBase::Read(param_1,(uchar *)&local_20,4);
  GETextureSwapContainer::Initialize(param_2,local_20);
  if (local_20 != 0) {
    iVar2 = 0;
    uVar3 = 0;
    do {
      uVar3 = uVar3 + 1;
      pGVar1 = (GETextureSwap *)(*(int *)(param_2 + 4) + iVar2);
      iVar2 = iVar2 + 0x34;
      Load(param_1,pGVar1);
    } while (uVar3 < local_20);
  }
  return;
}

