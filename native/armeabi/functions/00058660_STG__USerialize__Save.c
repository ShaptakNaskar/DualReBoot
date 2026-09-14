/* 00058660 | STG::USerialize::Save */

/* STG::USerialize::Save(STG::FFileBase*, STG::FFileHash const&) */

void STG::USerialize::Save(FFileBase *param_1,FFileHash *param_2)

{
  undefined4 local_14;
  
  local_14 = 1;
  FFileBase::Write(param_1,(uchar *)&local_14,4);
  Save<char,int>(param_1,(UStringBase *)param_2);
  local_14 = *(undefined4 *)(param_2 + 0x1c);
  FFileBase::Write(param_1,(uchar *)&local_14,4);
  return;
}

