/* 0005e020 | STG::USerialize::Save */

/* STG::USerialize::Save(STG::FFileBase*, STG::GEVertexBlender const&) */

void STG::USerialize::Save(FFileBase *param_1,GEVertexBlender *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int local_20 [3];
  undefined4 uStack_14;
  
  uStack_14 = 0x5e029;
  FUN_0002e044();
  local_20[0] = 3;
  FFileBase::Write(param_1,(uchar *)local_20,4);
  iVar2 = *(int *)(param_2 + 4);
  iVar3 = *(int *)(param_2 + 8);
  local_20[0] = iVar2;
  FFileBase::Write(param_1,(uchar *)local_20,4);
  local_20[0] = iVar3;
  FFileBase::Write(param_1,(uchar *)local_20,4);
  Save(param_1,*(GEAnimationTrack **)param_2);
  if (iVar2 != 0) {
    iVar4 = 0;
    do {
      iVar1 = iVar4 * 4;
      iVar4 = iVar4 + 1;
      FFileBase::Write(param_1,*(uchar **)(*(int *)(param_2 + 0xc) + iVar1),iVar3 << 4);
    } while (iVar4 != iVar2);
  }
  return;
}

