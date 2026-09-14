/* 0005bdd0 | STG::USerialize::Save */

/* STG::USerialize::Save(STG::FFileBase*, STG::GEEnvironment const&) */

void STG::USerialize::Save(FFileBase *param_1,GEEnvironment *param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 local_20 [3];
  undefined4 uStack_14;
  
  uStack_14 = 0x5bdd9;
  FUN_0002e044();
  local_20[0] = 1;
  FFileBase::Write(param_1,(uchar *)local_20,4);
  local_20[0] = *(undefined4 *)(param_2 + 4);
  FFileBase::Write(param_1,(uchar *)local_20,4);
  if (*(int *)(param_2 + 4) != 0) {
    iVar1 = 0;
    uVar2 = 0;
    do {
      uVar2 = uVar2 + 1;
      Save(param_1,(GEEnvironmentGroup *)(*(int *)param_2 + iVar1));
      iVar1 = iVar1 + 0x1e0;
    } while (uVar2 < *(uint *)(param_2 + 4));
  }
  return;
}

