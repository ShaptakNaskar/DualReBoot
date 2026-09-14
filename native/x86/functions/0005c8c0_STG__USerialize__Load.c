/* 0005c8c0 | STG::USerialize::Load */

/* STG::USerialize::Load(STG::FFileBase const*, STG::GESkeleton::BoneAnim&) */

void STG::USerialize::Load(FFileBase *param_1,BoneAnim *param_2)

{
  uint uVar1;
  uint local_20;
  ulong local_1c;
  uint local_18;
  uchar local_14 [4];
  
  local_14[0] = 0xcb;
  local_14[1] = 200;
  local_14[2] = '\x05';
  local_14[3] = '\0';
  FUN_0002e044();
  FFileBase::Read(param_1,local_14,4);
  FFileBase::Read(param_1,(uchar *)&local_1c,4);
  FFileBase::Read(param_1,(uchar *)&local_18,4);
  FFileBase::Read(param_1,(uchar *)&local_20,4);
  GESkeleton::BoneAnim::Initialize(param_2,local_1c,local_18 != 0,local_20 != 0);
  if (local_18 != 0) {
    uVar1 = 0;
    do {
      Load(param_1,(GEAnimationTrack *)(uVar1 * 0x54 + *(int *)param_2));
      uVar1 = uVar1 + 1;
    } while (uVar1 < local_18);
  }
  if (local_20 != 0) {
    uVar1 = 0;
    do {
      Load(param_1,(GEAnimationTrack *)(uVar1 * 0x54 + *(int *)(param_2 + 8)));
      uVar1 = uVar1 + 1;
    } while (uVar1 < local_20);
  }
  return;
}

