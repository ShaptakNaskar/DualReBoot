/* 000451e0 | STG::GETimeOfDay::ComputeTime */

/* STG::GETimeOfDay::ComputeTime(STG::MExplicitType<STG::UTime::TimeStruct<(STG::UTime::ETimeValue)0>,
   unsigned long>, STG::MExplicitType<STG::UTime::TimeStruct<(STG::UTime::ETimeValue)0>, unsigned
   long>, STG::MExplicitType<STG::UTime::TimeStruct<(STG::UTime::ETimeValue)0>, unsigned long>) */

GETimeOfDay * __thiscall
STG::GETimeOfDay::ComputeTime(GETimeOfDay *this,uint param_2,uint param_3,uint param_4)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  ulonglong uVar10;
  
  if ((param_4 < 0x15180) && (param_3 < 0x15180)) {
    param_2 = param_2 % 0x15180;
    uVar5 = param_2 - param_3;
    if (param_2 < param_3) {
      uVar5 = uVar5 + 0x15180;
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
    if (uVar5 < param_3) {
      uVar10 = __aeabi_uldivmod((int)((ulonglong)uVar5 * 5),(int)((ulonglong)uVar5 * 5 >> 0x20),
                                param_3,0,param_4);
      iVar7 = (int)(uVar10 >> 0x20);
      uVar9 = (param_3 * 10) / 5;
      uVar8 = (int)uVar10 + 2;
      lVar1 = (uVar10 & 0xffffffff) * (ulonglong)uVar9;
      uVar3 = 7;
    }
    else {
      uVar10 = __aeabi_uldivmod((int)((ulonglong)uVar6 * 3),(int)((ulonglong)uVar6 * 3 >> 0x20),
                                0x15180 - param_3,0,param_4);
      iVar7 = (int)(uVar10 >> 0x20);
      uVar8 = 7;
      uVar9 = ((0x15180 - param_3) * 10) / 3;
      uVar3 = (int)uVar10 + 7;
      lVar1 = (uVar10 & 0xffffffff) * (ulonglong)uVar9;
      uVar5 = uVar6;
    }
    lVar2 = (ulonglong)(uVar5 * 10 - (uint)lVar1) * 0x15180;
    uVar4 = __aeabi_uldivmod((int)lVar2,
                             (uVar9 * iVar7 + (int)((ulonglong)lVar1 >> 0x20) +
                             (uint)(uVar5 * 10 < (uint)lVar1)) * -0x15180 +
                             (int)((ulonglong)lVar2 >> 0x20),uVar9,0,param_4);
    GETimeOfDay(this,uVar8 & uVar3,uVar4);
    return this;
  }
  GETimeOfDay(this);
  return this;
}

