/* 00065a00 | STG::USerialize::Save */

/* STG::USerialize::Save(STG::FFileBase*, STG::GEMaterial const&) */

void STG::USerialize::Save(FFileBase *param_1,GEMaterial *param_2)

{
  undefined4 local_20 [3];
  undefined4 uStack_14;
  
  uStack_14 = 0x65a09;
  FUN_0002e044();
  local_20[0] = 6;
  FFileBase::Write(param_1,(uchar *)local_20,4);
  local_20[0] = *(undefined4 *)(param_2 + 0x13c);
  FFileBase::Write(param_1,(uchar *)local_20,4);
  local_20[0] = *(undefined4 *)(param_2 + 0x140);
  FFileBase::Write(param_1,(uchar *)local_20,4);
  local_20[0] = *(undefined4 *)(param_2 + 0x144);
  FFileBase::Write(param_1,(uchar *)local_20,4);
  Save(param_1,(GEColor *)(param_2 + 0x148));
  local_20[0] = 2;
  FFileBase::Write(param_1,(uchar *)local_20,4);
  local_20[0] = *(undefined4 *)(param_2 + 0x34);
  FFileBase::Write(param_1,(uchar *)local_20,4);
  local_20[0] = *(undefined4 *)(param_2 + 0x3c);
  FFileBase::Write(param_1,(uchar *)local_20,4);
  local_20[0] = *(undefined4 *)(param_2 + 0x44);
  FFileBase::Write(param_1,(uchar *)local_20,4);
  Save(param_1,(GEColor *)(param_2 + 0x4c));
  Save(param_1,(FFileHash *)(param_2 + 0x6c));
  local_20[0] = *(undefined4 *)(param_2 + 0xac);
  FFileBase::Write(param_1,(uchar *)local_20,4);
  local_20[0] = *(undefined4 *)(param_2 + 0xb4);
  FFileBase::Write(param_1,(uchar *)local_20,4);
  Save(param_1,(MMatrix *)(param_2 + 0xbc));
  local_20[0] = *(undefined4 *)(param_2 + 0x38);
  FFileBase::Write(param_1,(uchar *)local_20,4);
  local_20[0] = *(undefined4 *)(param_2 + 0x40);
  FFileBase::Write(param_1,(uchar *)local_20,4);
  local_20[0] = *(undefined4 *)(param_2 + 0x48);
  FFileBase::Write(param_1,(uchar *)local_20,4);
  Save(param_1,(GEColor *)(param_2 + 0x5c));
  Save(param_1,(FFileHash *)(param_2 + 0x8c));
  local_20[0] = *(undefined4 *)(param_2 + 0xb0);
  FFileBase::Write(param_1,(uchar *)local_20,4);
  local_20[0] = *(undefined4 *)(param_2 + 0xb8);
  FFileBase::Write(param_1,(uchar *)local_20,4);
  Save(param_1,(MMatrix *)(param_2 + 0xfc));
  return;
}

