/* 0005270c | STG::USerialize::Save */

/* STG::USerialize::Save(STG::FFileBase*, STG::GEVertexBlender const&) */

void STG::USerialize::Save(FFileBase *param_1,GEVertexBlender *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int local_1c;
  
  local_1c = 3;
  FFileBase::Write(param_1,(uchar *)&local_1c,4);
  iVar3 = *(int *)(param_2 + 4);
  iVar4 = *(int *)(param_2 + 8);
  local_1c = iVar3;
  FFileBase::Write(param_1,(uchar *)&local_1c,4);
  local_1c = iVar4;
  FFileBase::Write(param_1,(uchar *)&local_1c,4);
  Save(param_1,*(GEAnimationTrack **)param_2);
  if (iVar3 != 0) {
    iVar2 = 0;
    do {
      iVar1 = iVar2 * 4;
      iVar2 = iVar2 + 1;
      FFileBase::Write(param_1,*(uchar **)(*(int *)(param_2 + 0xc) + iVar1),iVar4 << 4);
    } while (iVar2 != iVar3);
  }
  return;
}

