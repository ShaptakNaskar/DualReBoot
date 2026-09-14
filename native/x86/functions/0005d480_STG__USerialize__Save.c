/* 0005d480 | STG::USerialize::Save */

/* STG::USerialize::Save(STG::FFileBase*, STG::GESkeleton::BoneAnim const&) */

void STG::USerialize::Save(FFileBase *param_1,BoneAnim *param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 local_20 [3];
  undefined4 uStack_14;
  
  uStack_14 = 0x5d489;
  FUN_0002e044();
  local_20[0] = 1;
  FFileBase::Write(param_1,(uchar *)local_20,4);
  local_20[0] = *(undefined4 *)(param_2 + 0x10);
  FFileBase::Write(param_1,(uchar *)local_20,4);
  local_20[0] = *(undefined4 *)(param_2 + 4);
  FFileBase::Write(param_1,(uchar *)local_20,4);
  local_20[0] = *(undefined4 *)(param_2 + 0xc);
  FFileBase::Write(param_1,(uchar *)local_20,4);
  if (*(int *)(param_2 + 4) != 0) {
    uVar2 = 0;
    do {
      iVar1 = uVar2 * 0x54;
      uVar2 = uVar2 + 1;
      Save(param_1,(GEAnimationTrack *)(iVar1 + *(int *)param_2));
    } while (uVar2 < *(uint *)(param_2 + 4));
  }
  if (*(int *)(param_2 + 0xc) != 0) {
    uVar2 = 0;
    do {
      iVar1 = uVar2 * 0x54;
      uVar2 = uVar2 + 1;
      Save(param_1,(GEAnimationTrack *)(iVar1 + *(int *)(param_2 + 8)));
    } while (uVar2 < *(uint *)(param_2 + 0xc));
  }
  return;
}

