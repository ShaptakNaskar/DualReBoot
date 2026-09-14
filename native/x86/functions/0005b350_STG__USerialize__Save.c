/* 0005b350 | STG::USerialize::Save */

/* STG::USerialize::Save(STG::FFileBase*, STG::MVector2 const&) */

void STG::USerialize::Save(FFileBase *param_1,MVector2 *param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 local_20 [4];
  
  puVar2 = (undefined4 *)FUN_0002e044();
  uVar1 = puVar2[1];
  local_20[0] = *puVar2;
  FFileBase::Write(param_1,(uchar *)local_20,4);
  local_20[0] = uVar1;
  FFileBase::Write(param_1,(uchar *)local_20,4);
  return;
}

