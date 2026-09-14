/* 0004c740 | STG::GETimeOfDay::ComputeTime */

/* STG::GETimeOfDay::ComputeTime(STG::MExplicitType<STG::UTime::TimeStruct<(STG::UTime::ETimeValue)0>,
   unsigned long>, STG::MExplicitType<STG::UTime::TimeStruct<(STG::UTime::ETimeValue)0>, unsigned
   long>, STG::MExplicitType<STG::UTime::TimeStruct<(STG::UTime::ETimeValue)0>, unsigned long>) */

GETimeOfDay * STG::GETimeOfDay::ComputeTime(GETimeOfDay *param_1,uint param_2,uint param_3)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  uint extraout_ECX;
  uint uVar6;
  ulonglong uVar7;
  
  FUN_0002e044();
  if ((extraout_ECX < 0x15180) && (param_3 < 0x15180)) {
    param_2 = param_2 % 0x15180;
    uVar3 = param_2 - param_3;
    if (param_2 < param_3) {
      uVar3 = (param_2 - param_3) + 0x15180;
    }
    uVar5 = param_2 - extraout_ECX;
    if (param_2 < extraout_ECX) {
      uVar5 = (param_2 - extraout_ECX) + 0x15180;
    }
    uVar6 = (extraout_ECX + 0x15180) - param_3;
    if (param_3 <= extraout_ECX) {
      uVar6 = extraout_ECX - param_3;
    }
    if (uVar3 < uVar6) {
      uVar7 = __udivdi3((ulonglong)uVar3 * 5,uVar6,0);
      uVar6 = (uVar6 * 10) / 5;
      lVar1 = (ulonglong)uVar6 * (uVar7 & 0xffffffff);
      uVar5 = (uint)lVar1;
      lVar2 = (ulonglong)(uVar3 * 10 - uVar5) * 0x15180;
      uVar4 = __udivdi3((int)lVar2,
                        (int)((ulonglong)lVar2 >> 0x20) +
                        (-(uint)(uVar3 * 10 < uVar5) -
                        ((int)((ulonglong)lVar1 >> 0x20) + (int)(uVar7 >> 0x20) * uVar6)) * 0x15180,
                        uVar6,0);
      uVar3 = (int)uVar7 + 2;
    }
    else {
      uVar7 = __udivdi3((ulonglong)uVar5 * 3,0x15180 - uVar6,0);
      uVar6 = ((0x15180 - uVar6) * 10) / 3;
      lVar1 = (ulonglong)uVar6 * (uVar7 & 0xffffffff);
      uVar3 = (uint)lVar1;
      lVar2 = (ulonglong)(uVar5 * 10 - uVar3) * 0x15180;
      uVar4 = __udivdi3((int)lVar2,
                        (int)((ulonglong)lVar2 >> 0x20) +
                        (-(uint)(uVar5 * 10 < uVar3) -
                        ((int)((ulonglong)lVar1 >> 0x20) + (int)(uVar7 >> 0x20) * uVar6)) * 0x15180,
                        uVar6,0);
      uVar3 = (int)uVar7 + 7;
    }
    GETimeOfDay(param_1,uVar3 & 7,uVar4);
  }
  else {
    GETimeOfDay(param_1);
  }
  return param_1;
}

