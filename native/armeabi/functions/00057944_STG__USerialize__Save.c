/* 00057944 | STG::USerialize::Save */

/* STG::USerialize::Save(STG::FFileBase*, STG::UPreference_TextureFont const&) */

void STG::USerialize::Save(FFileBase *param_1,UPreference_TextureFont *param_2)

{
  UPreference_TextureFont local_25;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  
  local_20 = DAT_000579ec;
  uStack_1c = DAT_000579e8;
  FFileBase::Write(param_1,(uchar *)&local_20,8);
  local_24 = 1;
  FFileBase::Write(param_1,(uchar *)&local_24,4);
  Save<char,int>(param_1,(UStringBase *)(param_2 + 4));
  Save<char,int>(param_1,(UStringBase *)(param_2 + 0x20));
  Save<char,int>(param_1,(UStringBase *)(param_2 + 0x3c));
  local_24 = *(undefined4 *)(param_2 + 0x88);
  FFileBase::Write(param_1,(uchar *)&local_24,4);
  local_25 = param_2[0x8c];
  FFileBase::Write(param_1,(uchar *)&local_25,1);
  return;
}

