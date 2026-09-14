/* 000532a8 | STG::USerialize::Save */

/* STG::USerialize::Save(STG::FFileBase*, STG::UPreference_FileChooser_Texture const&) */

void STG::USerialize::Save(FFileBase *param_1,UPreference_FileChooser_Texture *param_2)

{
  undefined4 local_24;
  uchar local_20 [8];
  
  builtin_memcpy(local_20,"PREFFCTX",8);
  FFileBase::Write(param_1,local_20,8);
  local_24 = 1;
  FFileBase::Write(param_1,(uchar *)&local_24,4);
  Save<char,int>(param_1,(UStringBase *)(param_2 + 4));
  Save<char,int>(param_1,(UStringBase *)(param_2 + 0x20));
  Save<char,int>(param_1,(UStringBase *)(param_2 + 0x3c));
  local_24 = *(undefined4 *)(param_2 + 0x8c);
  FFileBase::Write(param_1,(uchar *)&local_24,4);
  local_24 = *(undefined4 *)(param_2 + 0x90);
  FFileBase::Write(param_1,(uchar *)&local_24,4);
  return;
}

