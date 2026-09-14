/* 000459a0 | STG::GETimeOfDayAuto::Update */

/* STG::GETimeOfDayAuto::Update(STG::UTime::TimeStruct<(STG::UTime::ETimeValue)0> const&,
   STG::UTime::TimeStruct<(STG::UTime::ETimeValue)1> const&) */

TimeStruct * STG::GETimeOfDayAuto::Update(TimeStruct *param_1,TimeStruct *param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  TimeStruct *in_r2;
  uint uVar6;
  TimeStruct *in_r3;
  int iVar7;
  uint uVar8;
  SolarData *this;
  UTime *this_00;
  uint *puVar9;
  GETimeOfDay aGStack_28 [8];
  
  iVar7 = DAT_00045bc8 + 0x459c0;
  puVar9 = *(uint **)(iVar7 + DAT_00045bcc);
  if ((*puVar9 & 1) == 0) {
    iVar2 = thunk_FUN_0007004c(puVar9);
    this_00 = *(UTime **)(iVar7 + DAT_00045bd0);
    if (iVar2 != 0) {
      UTime::UTime(this_00);
      thunk_FUN_000700b0(puVar9);
      __aeabi_atexit(this_00,*(undefined4 *)(iVar7 + DAT_00045bd4),
                     *(undefined4 *)(iVar7 + DAT_00045bd8));
    }
  }
  else {
    this_00 = *(UTime **)(iVar7 + DAT_00045bd0);
  }
  iVar1 = UTime::GetUTCOffset(this_00,in_r3,in_r2);
  iVar7 = GETimeOfDay::GetDefaultSunrise();
  iVar2 = GETimeOfDay::GetDefaultSunset();
  for (iVar7 = iVar7 + iVar1 * -0xe10; iVar7 < 0; iVar7 = iVar7 + 0x1517f) {
  }
  for (; 0x1517f < iVar7; iVar7 = iVar7 + -0x1517f) {
  }
  for (iVar2 = iVar2 + iVar1 * -0xe10; iVar2 < 0; iVar2 = iVar2 + 0x1517f) {
  }
  for (; 0x1517f < iVar2; iVar2 = iVar2 + -0x1517f) {
  }
  ResultData::ResultData((ResultData *)param_1);
  *(int *)(param_1 + 0x10) = iVar7;
  *(int *)(param_1 + 0x14) = iVar2;
  param_1[0x20] = (TimeStruct)0x0;
  iVar7 = MLocation::IsValid((MLocation *)param_2);
  if (iVar7 != 0) {
    this = (SolarData *)(param_2 + 8);
    iVar7 = SolarData::Update(this,in_r2,(MLocation *)param_2);
    if (iVar7 != 0) {
      uVar5 = *(undefined4 *)(param_2 + 4);
      *(undefined4 *)(param_1 + 8) = *(undefined4 *)param_2;
      *(undefined4 *)(param_1 + 0xc) = uVar5;
      uVar5 = SolarData::GetSunrise(this);
      *(undefined4 *)(param_1 + 0x10) = uVar5;
      uVar5 = SolarData::GetSunset(this);
      param_1[0x20] = (TimeStruct)0x1;
      *(undefined4 *)(param_1 + 0x14) = uVar5;
    }
  }
  uVar8 = *(int *)(in_r2 + 8) * 0xe10 + *(int *)(in_r2 + 4) * 0x3c + *(int *)in_r2;
  GETimeOfDay::ComputeTime
            (aGStack_28,uVar8,*(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x14));
  GETimeOfDay::operator=((GETimeOfDay *)param_1,aGStack_28);
  uVar6 = *(uint *)(param_1 + 0x10);
  uVar8 = uVar8 % 0x15180;
  uVar3 = *(uint *)(param_1 + 0x14);
  if (uVar6 < uVar8) {
    uVar6 = uVar6 + 0x15180;
  }
  uVar4 = uVar3;
  if (uVar3 < uVar8) {
    uVar4 = uVar3 + 0x15000;
  }
  if (uVar3 < uVar8) {
    uVar4 = uVar4 + 0x180;
  }
  *(uint *)(param_1 + 0x18) = uVar6 - uVar8;
  *(uint *)(param_1 + 0x1c) = uVar4 - uVar8;
  return param_1;
}

