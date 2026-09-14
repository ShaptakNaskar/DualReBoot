/* 0005149c | STG::USerialize::Load */

/* STG::USerialize::Load(STG::FFileBase const*, STG::GESkeleton::BoneAnim&) */

void STG::USerialize::Load(FFileBase *param_1,BoneAnim *param_2)

{
  GEAnimationTrack *pGVar1;
  int iVar2;
  uint uVar3;
  ulong local_28;
  uint local_24;
  uint local_20;
  uchar auStack_1c [8];
  
  FFileBase::Read(param_1,auStack_1c,4);
  FFileBase::Read(param_1,(uchar *)&local_28,4);
  FFileBase::Read(param_1,(uchar *)&local_24,4);
  FFileBase::Read(param_1,(uchar *)&local_20,4);
  GESkeleton::BoneAnim::Initialize(param_2,local_28,local_24 != 0,local_20 != 0);
  if (local_24 != 0) {
    iVar2 = 0;
    uVar3 = 0;
    do {
      uVar3 = uVar3 + 1;
      pGVar1 = (GEAnimationTrack *)(*(int *)param_2 + iVar2);
      iVar2 = iVar2 + 0x58;
      Load(param_1,pGVar1);
    } while (uVar3 < local_24);
  }
  if (local_20 != 0) {
    iVar2 = 0;
    uVar3 = 0;
    do {
      uVar3 = uVar3 + 1;
      pGVar1 = (GEAnimationTrack *)(*(int *)(param_2 + 8) + iVar2);
      iVar2 = iVar2 + 0x58;
      Load(param_1,pGVar1);
    } while (uVar3 < local_20);
  }
  return;
}

