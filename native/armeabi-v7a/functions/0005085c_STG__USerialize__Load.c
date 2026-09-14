/* 0005085c | STG::USerialize::Load */

/* STG::USerialize::Load(STG::FFileBase const*, STG::GECamera&) */

void STG::USerialize::Load(FFileBase *param_1,GECamera *param_2)

{
  undefined4 local_1c;
  undefined4 local_18;
  uint local_14;
  
  FFileBase::Read(param_1,(uchar *)&local_14,4);
  FFileBase::Read(param_1,(uchar *)&local_1c,4);
  *(undefined4 *)(param_2 + 100) = local_1c;
  Load(param_1,(MVector3 *)(param_2 + 0x1c0));
  Load(param_1,(MVector3 *)(param_2 + 0x1cc));
  Load(param_1,(MVector3 *)(param_2 + 0x1d8));
  FFileBase::Read(param_1,(uchar *)&local_18,4);
  *(undefined4 *)(param_2 + 0x1e4) = local_18;
  *(undefined4 *)(param_2 + 0x1e8) = local_18;
  FFileBase::Read(param_1,(uchar *)(param_2 + 0x1ec),4);
  FFileBase::Read(param_1,(uchar *)(param_2 + 0x1f0),4);
  FFileBase::Read(param_1,(uchar *)(param_2 + 500),4);
  if (1 < local_14) {
    FFileBase::Read(param_1,(uchar *)(param_2 + 0x208),4);
    FFileBase::Read(param_1,(uchar *)(param_2 + 0x20c),1);
  }
  return;
}

