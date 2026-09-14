/* 00050cf8 | STG::USerialize::Save */

/* STG::USerialize::Save(STG::FFileBase*, STG::GEEnvironment const&) */

void STG::USerialize::Save(FFileBase *param_1,GEEnvironment *param_2)

{
  GEEnvironmentGroup *pGVar1;
  int iVar2;
  uint uVar3;
  undefined4 local_1c [2];
  
  local_1c[0] = 1;
  FFileBase::Write(param_1,(uchar *)local_1c,4);
  local_1c[0] = *(undefined4 *)(param_2 + 4);
  FFileBase::Write(param_1,(uchar *)local_1c,4);
  if (*(int *)(param_2 + 4) != 0) {
    iVar2 = 0;
    uVar3 = 0;
    do {
      uVar3 = uVar3 + 1;
      pGVar1 = (GEEnvironmentGroup *)(*(int *)param_2 + iVar2);
      iVar2 = iVar2 + 0x1e0;
      Save(param_1,pGVar1);
    } while (uVar3 < *(uint *)(param_2 + 4));
  }
  return;
}

