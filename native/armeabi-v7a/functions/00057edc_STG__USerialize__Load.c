/* 00057edc | STG::USerialize::Load */

/* STG::USerialize::Load(STG::FFileBase const*, STG::FFileHash&) */

void STG::USerialize::Load(FFileBase *param_1,FFileHash *param_2)

{
  uchar auStack_14 [8];
  
  FFileBase::Read(param_1,auStack_14,4);
  Load<char,int>(param_1,(UStringBase *)param_2);
  FFileBase::Read(param_1,(uchar *)(param_2 + 0x1c),4);
  return;
}

