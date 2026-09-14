/* 0005058c | STG::USerialize::LoadLegacyTimeValue */

/* STG::USerialize::LoadLegacyTimeValue(STG::FFileBase const*, unsigned long, unsigned long) */

USerialize * __thiscall
STG::USerialize::LoadLegacyTimeValue
          (USerialize *this,FFileBase *param_1,ulong param_2,ulong param_3)

{
  uint local_c;
  
  if (param_3 < param_2) {
    FFileBase::Read(param_1,(uchar *)&local_c,4);
    *(ulonglong *)this = (ulonglong)local_c * 1000;
  }
  else {
    FFileBase::Read(param_1,(uchar *)this,8);
  }
  return this;
}

