/* 00050a34 | STG::USerialize::Load */

/* STG::USerialize::Load(STG::FFileBase const*, STG::GEEnvironmentSettings&) */

void STG::USerialize::Load(FFileBase *param_1,GEEnvironmentSettings *param_2)

{
  uchar auStack_14 [8];
  
  FFileBase::Read(param_1,auStack_14,4);
  Load(param_1,(GEColor *)param_2);
  Load(param_1,(GEColor *)(param_2 + 0x10));
  Load(param_1,(GEColor *)(param_2 + 0x20));
  Load(param_1,(MVector2 *)(param_2 + 0x30));
  FFileBase::Read(param_1,(uchar *)(param_2 + 0x38),1);
  FFileBase::Read(param_1,(uchar *)(param_2 + 0x39),1);
  return;
}

