/* 000550e0 | STG::USerialize::Save */

/* STG::USerialize::Save(STG::FFileBase*, STG::GECamera const&) */

void STG::USerialize::Save(FFileBase *param_1,GECamera *param_2)

{
  GECamera local_19;
  undefined4 local_18;
  undefined4 local_14;
  
  local_18 = 2;
  FFileBase::Write(param_1,(uchar *)&local_18,4);
  local_18 = *(undefined4 *)(param_2 + 100);
  FFileBase::Write(param_1,(uchar *)&local_18,4);
  Save(param_1,(MVector3 *)(param_2 + 0x1c0));
  Save(param_1,(MVector3 *)(param_2 + 0x1cc));
  Save(param_1,(MVector3 *)(param_2 + 0x1d8));
  local_14 = *(undefined4 *)(param_2 + 0x1e4);
  FFileBase::Write(param_1,(uchar *)&local_14,4);
  local_14 = *(undefined4 *)(param_2 + 0x1ec);
  FFileBase::Write(param_1,(uchar *)&local_14,4);
  local_14 = *(undefined4 *)(param_2 + 0x1f0);
  FFileBase::Write(param_1,(uchar *)&local_14,4);
  local_14 = *(undefined4 *)(param_2 + 500);
  FFileBase::Write(param_1,(uchar *)&local_14,4);
  local_14 = *(undefined4 *)(param_2 + 0x208);
  FFileBase::Write(param_1,(uchar *)&local_14,4);
  local_19 = param_2[0x20c];
  FFileBase::Write(param_1,(uchar *)&local_19,1);
  return;
}

