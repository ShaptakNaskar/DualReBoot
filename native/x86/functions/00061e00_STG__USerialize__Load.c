/* 00061e00 | STG::USerialize::Load */

/* STG::USerialize::Load(STG::FFileBase const*, STG::FFileHash&) */

void STG::USerialize::Load(FFileBase *param_1,FFileHash *param_2)

{
  uchar local_10 [4];
  
  FUN_0002e044();
  FFileBase::Read(param_1,local_10,4);
  Load<char,int>(param_1,(UStringBase *)param_2);
  FFileBase::Read(param_1,(uchar *)(param_2 + 0x1c),4);
  return;
}

