/* 00057aec | STG::USerialize::Save */

/* STG::USerialize::Save(STG::FFileBase*, STG::UPreference_FileChooser_Texture const&) */

void STG::USerialize::Save(FFileBase *param_1,UPreference_FileChooser_Texture *param_2)

{
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  
  local_18 = DAT_00057b94;
  uStack_14 = DAT_00057b90;
  FFileBase::Write(param_1,(uchar *)&local_18,8);
  local_1c = 1;
  FFileBase::Write(param_1,(uchar *)&local_1c,4);
  Save<char,int>(param_1,(UStringBase *)(param_2 + 4));
  Save<char,int>(param_1,(UStringBase *)(param_2 + 0x20));
  Save<char,int>(param_1,(UStringBase *)(param_2 + 0x3c));
  local_1c = *(undefined4 *)(param_2 + 0x8c);
  FFileBase::Write(param_1,(uchar *)&local_1c,4);
  local_1c = *(undefined4 *)(param_2 + 0x90);
  FFileBase::Write(param_1,(uchar *)&local_1c,4);
  return;
}

