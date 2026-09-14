/* 0005b250 | STG::USerialize::LoadLegacyTimeValue */

/* STG::USerialize::LoadLegacyTimeValue(STG::FFileBase const*, unsigned long, unsigned long) */

USerialize * __thiscall
STG::USerialize::LoadLegacyTimeValue
          (USerialize *this,FFileBase *param_1,ulong param_2,ulong param_3)

{
  uint extraout_EDX;
  uint local_10 [2];
  
  FUN_0002e044();
  if (param_3 < extraout_EDX) {
    FFileBase::Read(param_1,(uchar *)local_10,4);
    *(ulonglong *)this = (ulonglong)local_10[0] * 1000;
  }
  else {
    FFileBase::Read(param_1,(uchar *)this,8);
  }
  return this;
}

