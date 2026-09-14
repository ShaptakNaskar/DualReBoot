/* 00052308 | STG::USerialize::Load */

/* STG::USerialize::Load(STG::FFileBase const*, STG::GETimeOfDay&) */

void STG::USerialize::Load(FFileBase *param_1,GETimeOfDay *param_2)

{
  undefined4 local_18;
  uchar auStack_14 [8];
  
  FFileBase::Read(param_1,auStack_14,4);
  FFileBase::Read(param_1,(uchar *)&local_18,4);
  GETimeOfDay::SetPhase(param_2,local_18);
  return;
}

