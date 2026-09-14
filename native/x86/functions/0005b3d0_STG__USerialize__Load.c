/* 0005b3d0 | STG::USerialize::Load */

/* STG::USerialize::Load(STG::FFileBase const*, STG::MVector3&) */

void STG::USerialize::Load(FFileBase *param_1,MVector3 *param_2)

{
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  FUN_0002e044();
  FFileBase::Read(param_1,(uchar *)&local_18,4);
  FFileBase::Read(param_1,(uchar *)&local_14,4);
  FFileBase::Read(param_1,(uchar *)&local_10,4);
  *(undefined4 *)param_2 = local_18;
  *(undefined4 *)(param_2 + 4) = local_14;
  *(undefined4 *)(param_2 + 8) = local_10;
  return;
}

