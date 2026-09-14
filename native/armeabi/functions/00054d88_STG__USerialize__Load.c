/* 00054d88 | STG::USerialize::Load */

/* STG::USerialize::Load(STG::FFileBase const*, STG::MVector2&) */

void STG::USerialize::Load(FFileBase *param_1,MVector2 *param_2)

{
  undefined4 local_18;
  undefined4 local_14 [2];
  
  FFileBase::Read(param_1,(uchar *)&local_18,4);
  FFileBase::Read(param_1,(uchar *)local_14,4);
  *(undefined4 *)(param_2 + 4) = local_14[0];
  *(undefined4 *)param_2 = local_18;
  return;
}

