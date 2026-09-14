/* 00055c68 | STG::USerialize::Load */

/* STG::USerialize::Load(STG::FFileBase const*, STG::GESkeleton::BoneAnim&) */

void STG::USerialize::Load(FFileBase *param_1,BoneAnim *param_2)

{
  int iVar1;
  uint uVar2;
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
    iVar1 = 0;
    uVar2 = 0;
    do {
      uVar2 = uVar2 + 1;
      Load(param_1,(GEAnimationTrack *)(*(int *)param_2 + iVar1));
      iVar1 = iVar1 + 0x58;
    } while (uVar2 < local_24);
  }
  if (local_20 != 0) {
    iVar1 = 0;
    uVar2 = 0;
    do {
      uVar2 = uVar2 + 1;
      Load(param_1,(GEAnimationTrack *)(*(int *)(param_2 + 8) + iVar1));
      iVar1 = iVar1 + 0x58;
    } while (uVar2 < local_20);
  }
  return;
}

