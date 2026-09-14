/* 000475f8 | STG::GETimeOfDay::ComputeTime */

/* STG::GETimeOfDay::ComputeTime(STG::MExplicitType<STG::UTime::TimeStruct<(STG::UTime::ETimeValue)0>,
   unsigned long>, STG::MExplicitType<STG::UTime::TimeStruct<(STG::UTime::ETimeValue)0>, unsigned
   long>, STG::MExplicitType<STG::UTime::TimeStruct<(STG::UTime::ETimeValue)0>, unsigned long>) */

GETimeOfDay * __thiscall
STG::GETimeOfDay::ComputeTime(GETimeOfDay *this,uint param_2,uint param_3,uint param_4)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined4 uVar7;
  int iVar8;
  ulonglong uVar9;
  
  if ((param_4 <= DAT_0004779c) && (param_3 <= DAT_0004779c)) {
    param_2 = param_2 + (uint)((ulonglong)DAT_000477a0 * (ulonglong)param_2 >> 0x30) * -0x15180;
    uVar4 = param_2 - param_3;
    if (param_2 < param_3) {
      uVar4 = uVar4 + 0x15180;
    }
    uVar6 = param_2 - param_4;
    if (param_2 < param_4) {
      uVar6 = uVar6 + 0x15180;
    }
    if (param_4 < param_3) {
      param_3 = (param_4 + 0x15180) - param_3;
    }
    else {
      param_3 = param_4 - param_3;
    }
    if (uVar4 < param_3) {
      uVar9 = __aeabi_uldivmod((int)((ulonglong)uVar4 * 5),(int)((ulonglong)uVar4 * 5 >> 0x20),
                               param_3,0,param_4);
      uVar5 = (uint)((ulonglong)(param_3 * 10) * (ulonglong)DAT_000477a8 >> 0x22);
      lVar1 = (uVar9 & 0xffffffff) * (ulonglong)uVar5;
      uVar6 = (uint)lVar1;
      lVar2 = (ulonglong)(uVar4 * 10 - uVar6) * 0x15180;
      uVar7 = (undefined4)lVar2;
      iVar8 = (uVar5 * (int)(uVar9 >> 0x20) + (int)((ulonglong)lVar1 >> 0x20) +
              (uint)(uVar4 * 10 < uVar6)) * -0x15180 + (int)((ulonglong)lVar2 >> 0x20);
      uVar4 = (int)uVar9 + 2;
      uVar6 = 7;
    }
    else {
      uVar9 = __aeabi_uldivmod((int)((ulonglong)uVar6 * 3),(int)((ulonglong)uVar6 * 3 >> 0x20),
                               0x15180 - param_3,0,param_4);
      uVar5 = (uint)((ulonglong)((0x15180 - param_3) * 10) * (ulonglong)DAT_000477a4 >> 0x21);
      lVar1 = (uVar9 & 0xffffffff) * (ulonglong)uVar5;
      uVar3 = (uint)lVar1;
      lVar2 = (ulonglong)(uVar6 * 10 - uVar3) * 0x15180;
      uVar7 = (undefined4)lVar2;
      uVar4 = 7;
      iVar8 = (uVar5 * (int)(uVar9 >> 0x20) + (int)((ulonglong)lVar1 >> 0x20) +
              (uint)(uVar6 * 10 < uVar3)) * -0x15180 + (int)((ulonglong)lVar2 >> 0x20);
      uVar6 = (int)uVar9 + 7;
    }
    uVar7 = __aeabi_uldivmod(uVar7,iVar8,uVar5,0,param_4);
    GETimeOfDay(this,uVar6 & uVar4,uVar7);
    return this;
  }
  GETimeOfDay(this);
  return this;
}

