/* 0005b860 | STG::USerialize::Save */

/* STG::USerialize::Save(STG::FFileBase*, STG::GECamera const&) */

void STG::USerialize::Save(FFileBase *param_1,GECamera *param_2)

{
  GECamera local_25;
  undefined4 local_24;
  undefined4 local_20 [3];
  undefined4 uStack_14;
  
  uStack_14 = 0x5b869;
  FUN_0002e044();
  local_24 = 2;
  FFileBase::Write(param_1,(uchar *)&local_24,4);
  local_24 = *(undefined4 *)(param_2 + 100);
  FFileBase::Write(param_1,(uchar *)&local_24,4);
  Save(param_1,(MVector3 *)(param_2 + 0x1c0));
  Save(param_1,(MVector3 *)(param_2 + 0x1cc));
  Save(param_1,(MVector3 *)(param_2 + 0x1d8));
  local_20[0] = *(undefined4 *)(param_2 + 0x1e4);
  FFileBase::Write(param_1,(uchar *)local_20,4);
  local_20[0] = *(undefined4 *)(param_2 + 0x1ec);
  FFileBase::Write(param_1,(uchar *)local_20,4);
  local_20[0] = *(undefined4 *)(param_2 + 0x1f0);
  FFileBase::Write(param_1,(uchar *)local_20,4);
  local_20[0] = *(undefined4 *)(param_2 + 500);
  FFileBase::Write(param_1,(uchar *)local_20,4);
  local_20[0] = *(undefined4 *)(param_2 + 0x208);
  FFileBase::Write(param_1,(uchar *)local_20,4);
  local_25 = param_2[0x20c];
  FFileBase::Write(param_1,(uchar *)&local_25,1);
  return;
}

