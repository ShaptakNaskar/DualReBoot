/* 0005da00 | STG::USerialize::Load */

/* STG::USerialize::Load(STG::FFileBase const*, STG::GETimeOfDay&) */

void STG::USerialize::Load(FFileBase *param_1,GETimeOfDay *param_2)

{
  undefined4 local_14;
  uchar local_10 [8];
  
  FUN_0002e044();
  FFileBase::Read(param_1,local_10,4);
  FFileBase::Read(param_1,(uchar *)&local_14,4);
  GETimeOfDay::SetPhase(param_2,local_14);
  return;
}

