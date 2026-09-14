/* 0005de18 | STG::UTime::GetUTCOffset */

/* STG::UTime::GetUTCOffset(STG::UTime::TimeStruct<(STG::UTime::ETimeValue)1> const&,
   STG::UTime::TimeStruct<(STG::UTime::ETimeValue)0> const&) const */

int __thiscall STG::UTime::GetUTCOffset(UTime *this,TimeStruct *param_1,TimeStruct *param_2)

{
  int iVar1;
  
  for (iVar1 = *(int *)(param_1 + 8) - *(int *)(param_2 + 8); iVar1 < -0xc; iVar1 = iVar1 + 0x18) {
  }
  for (; 0xc < iVar1; iVar1 = iVar1 + -0x18) {
  }
  if (iVar1 == -0xc) {
    iVar1 = 0xc;
  }
  return iVar1;
}

