/* 0005b700 | STG::USerialize::Load */

/* STG::USerialize::Load(STG::FFileBase const*, STG::GECamera&) */

void STG::USerialize::Load(FFileBase *param_1,GECamera *param_2)

{
  undefined4 local_28;
  undefined4 local_24;
  uint local_20 [4];
  
  FUN_0002e044();
  FFileBase::Read(param_1,(uchar *)local_20,4);
  FFileBase::Read(param_1,(uchar *)&local_28,4);
  *(undefined4 *)(param_2 + 100) = local_28;
  Load(param_1,(MVector3 *)(param_2 + 0x1c0));
  Load(param_1,(MVector3 *)(param_2 + 0x1cc));
  Load(param_1,(MVector3 *)(param_2 + 0x1d8));
  FFileBase::Read(param_1,(uchar *)&local_24,4);
  *(undefined4 *)(param_2 + 0x1e4) = local_24;
  *(undefined4 *)(param_2 + 0x1e8) = local_24;
  FFileBase::Read(param_1,(uchar *)(param_2 + 0x1ec),4);
  FFileBase::Read(param_1,(uchar *)(param_2 + 0x1f0),4);
  FFileBase::Read(param_1,(uchar *)(param_2 + 500),4);
  if (1 < local_20[0]) {
    FFileBase::Read(param_1,(uchar *)(param_2 + 0x208),4);
    FFileBase::Read(param_1,(uchar *)(param_2 + 0x20c),1);
  }
  return;
}

