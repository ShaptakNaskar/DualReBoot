/* 00054e6c | STG::USerialize::Save */

/* STG::USerialize::Save(STG::FFileBase*, STG::MVector3 const&) */

void STG::USerialize::Save(FFileBase *param_1,MVector3 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 local_1c [2];
  
  local_1c[0] = *(undefined4 *)param_2;
  uVar2 = *(undefined4 *)(param_2 + 4);
  uVar1 = *(undefined4 *)(param_2 + 8);
  FFileBase::Write(param_1,(uchar *)local_1c,4);
  local_1c[0] = uVar2;
  FFileBase::Write(param_1,(uchar *)local_1c,4);
  local_1c[0] = uVar1;
  FFileBase::Write(param_1,(uchar *)local_1c,4);
  return;
}

