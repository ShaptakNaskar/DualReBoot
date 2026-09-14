/* 00056614 | STG::USerialize::Save */

/* STG::USerialize::Save(STG::FFileBase*, STG::GESkeleton::BoneAnim const&) */

void STG::USerialize::Save(FFileBase *param_1,BoneAnim *param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 local_1c [2];
  
  local_1c[0] = 1;
  FFileBase::Write(param_1,(uchar *)local_1c,4);
  local_1c[0] = *(undefined4 *)(param_2 + 0x10);
  FFileBase::Write(param_1,(uchar *)local_1c,4);
  local_1c[0] = *(undefined4 *)(param_2 + 4);
  FFileBase::Write(param_1,(uchar *)local_1c,4);
  local_1c[0] = *(undefined4 *)(param_2 + 0xc);
  FFileBase::Write(param_1,(uchar *)local_1c,4);
  if (*(int *)(param_2 + 4) != 0) {
    iVar1 = 0;
    uVar2 = 0;
    do {
      uVar2 = uVar2 + 1;
      Save(param_1,(GEAnimationTrack *)(*(int *)param_2 + iVar1));
      iVar1 = iVar1 + 0x58;
    } while (uVar2 < *(uint *)(param_2 + 4));
  }
  if (*(int *)(param_2 + 0xc) != 0) {
    iVar1 = 0;
    uVar2 = 0;
    do {
      uVar2 = uVar2 + 1;
      Save(param_1,(GEAnimationTrack *)(*(int *)(param_2 + 8) + iVar1));
      iVar1 = iVar1 + 0x58;
    } while (uVar2 < *(uint *)(param_2 + 0xc));
  }
  return;
}

