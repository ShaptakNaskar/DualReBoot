/* 00050620 | STG::USerialize::Save */

/* STG::USerialize::Save(STG::FFileBase*, STG::MVector2 const&) */

void STG::USerialize::Save(FFileBase *param_1,MVector2 *param_2)

{
  undefined4 uVar1;
  undefined4 local_14;
  
  local_14 = *(undefined4 *)param_2;
  uVar1 = *(undefined4 *)(param_2 + 4);
  FFileBase::Write(param_1,(uchar *)&local_14,4);
  local_14 = uVar1;
  FFileBase::Write(param_1,(uchar *)&local_14,4);
  return;
}

