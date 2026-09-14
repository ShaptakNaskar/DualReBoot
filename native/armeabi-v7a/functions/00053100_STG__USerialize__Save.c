/* 00053100 | STG::USerialize::Save */

/* STG::USerialize::Save(STG::FFileBase*, STG::UPreference_TextureFont const&) */

void STG::USerialize::Save(FFileBase *param_1,UPreference_TextureFont *param_2)

{
  UPreference_TextureFont local_2d;
  undefined4 local_2c;
  uchar local_28 [12];
  
  builtin_memcpy(local_28,"PREFTFNT",8);
  FFileBase::Write(param_1,local_28,8);
  local_2c = 1;
  FFileBase::Write(param_1,(uchar *)&local_2c,4);
  Save<char,int>(param_1,(UStringBase *)(param_2 + 4));
  Save<char,int>(param_1,(UStringBase *)(param_2 + 0x20));
  Save<char,int>(param_1,(UStringBase *)(param_2 + 0x3c));
  local_2c = *(undefined4 *)(param_2 + 0x88);
  FFileBase::Write(param_1,(uchar *)&local_2c,4);
  local_2d = param_2[0x8c];
  FFileBase::Write(param_1,(uchar *)&local_2d,1);
  return;
}

