/* 00051e54 | STG::USerialize::Save */

/* STG::USerialize::Save(STG::FFileBase*, STG::GESkeleton::BoneAnim const&) */

void STG::USerialize::Save(FFileBase *param_1,BoneAnim *param_2)

{
  GEAnimationTrack *pGVar1;
  int iVar2;
  uint uVar3;
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
    iVar2 = 0;
    uVar3 = 0;
    do {
      uVar3 = uVar3 + 1;
      pGVar1 = (GEAnimationTrack *)(*(int *)param_2 + iVar2);
      iVar2 = iVar2 + 0x58;
      Save(param_1,pGVar1);
    } while (uVar3 < *(uint *)(param_2 + 4));
  }
  if (*(int *)(param_2 + 0xc) != 0) {
    iVar2 = 0;
    uVar3 = 0;
    do {
      uVar3 = uVar3 + 1;
      pGVar1 = (GEAnimationTrack *)(*(int *)(param_2 + 8) + iVar2);
      iVar2 = iVar2 + 0x58;
      Save(param_1,pGVar1);
    } while (uVar3 < *(uint *)(param_2 + 0xc));
  }
  return;
}

