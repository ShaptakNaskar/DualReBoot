/* 0005b460 | STG::USerialize::Save */

/* STG::USerialize::Save(STG::FFileBase*, STG::MVector3 const&) */

void STG::USerialize::Save(FFileBase *param_1,MVector3 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 local_20 [4];
  
  puVar3 = (undefined4 *)FUN_0002e044();
  uVar1 = puVar3[1];
  uVar2 = puVar3[2];
  local_20[0] = *puVar3;
  FFileBase::Write(param_1,(uchar *)local_20,4);
  local_20[0] = uVar1;
  FFileBase::Write(param_1,(uchar *)local_20,4);
  local_20[0] = uVar2;
  FFileBase::Write(param_1,(uchar *)local_20,4);
  return;
}

