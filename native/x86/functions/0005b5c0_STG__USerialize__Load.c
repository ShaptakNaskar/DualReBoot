/* 0005b5c0 | STG::USerialize::Load */

/* STG::USerialize::Load(STG::FFileBase const*, STG::GEColor&) */

void STG::USerialize::Load(FFileBase *param_1,GEColor *param_2)

{
  FUN_0002e044();
  FFileBase::Read(param_1,(uchar *)param_2,4);
  FFileBase::Read(param_1,(uchar *)(param_2 + 4),4);
  FFileBase::Read(param_1,(uchar *)(param_2 + 8),4);
  FFileBase::Read(param_1,(uchar *)(param_2 + 0xc),4);
  return;
}

