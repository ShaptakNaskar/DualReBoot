/* 00065970 | STG::USerialize::Save */

/* STG::USerialize::Save(STG::FFileBase*, STG::FFileHash const&) */

void STG::USerialize::Save(FFileBase *param_1,FFileHash *param_2)

{
  undefined4 local_20 [4];
  
  FUN_0002e044();
  local_20[0] = 1;
  FFileBase::Write(param_1,(uchar *)local_20,4);
  Save<char,int>(param_1,(UStringBase *)param_2);
  local_20[0] = *(undefined4 *)(param_2 + 0x1c);
  FFileBase::Write(param_1,(uchar *)local_20,4);
  return;
}

