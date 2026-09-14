/* 00047df4 | STG::GETimeOfDayAuto::Update */

/* STG::GETimeOfDayAuto::Update(STG::UTime::TimeStruct<(STG::UTime::ETimeValue)0> const&,
   STG::UTime::TimeStruct<(STG::UTime::ETimeValue)1> const&) */

TimeStruct * STG::GETimeOfDayAuto::Update(TimeStruct *param_1,TimeStruct *param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  TimeStruct *in_r2;
  uint uVar4;
  undefined4 uVar5;
  TimeStruct *in_r3;
  int iVar6;
  uint uVar7;
  SolarData *this;
  uint *puVar8;
  UTime *this_00;
  GETimeOfDay aGStack_28 [8];
  
  iVar6 = DAT_00048018 + 0x47e0c;
  puVar8 = *(uint **)(iVar6 + DAT_0004801c);
  if ((*puVar8 & 1) == 0) {
    iVar2 = thunk_FUN_00074338(puVar8);
    this_00 = *(UTime **)(iVar6 + DAT_00048020);
    if (iVar2 != 0) {
      UTime::UTime(this_00);
      thunk_FUN_000743a0(puVar8);
      __aeabi_atexit(this_00,*(undefined4 *)(iVar6 + DAT_0004802c),
                     *(undefined4 *)(iVar6 + DAT_00048030));
    }
  }
  else {
    this_00 = *(UTime **)(iVar6 + DAT_00048020);
  }
  iVar1 = UTime::GetUTCOffset(this_00,in_r3,in_r2);
  iVar6 = GETimeOfDay::GetDefaultSunrise();
  iVar2 = GETimeOfDay::GetDefaultSunset();
  for (iVar6 = iVar6 + iVar1 * -0xe10; iVar6 < 0; iVar6 = iVar6 + 0x1517f) {
  }
  for (; DAT_00048024 < iVar6; iVar6 = iVar6 + -0x1517f) {
  }
  for (iVar2 = iVar2 + iVar1 * -0xe10; iVar2 < 0; iVar2 = iVar2 + 0x1517f) {
  }
  for (; DAT_00048024 < iVar2; iVar2 = iVar2 + -0x1517f) {
  }
  ResultData::ResultData((ResultData *)param_1);
  *(int *)(param_1 + 0x10) = iVar6;
  *(int *)(param_1 + 0x14) = iVar2;
  param_1[0x20] = (TimeStruct)0x0;
  iVar6 = MLocation::IsValid((MLocation *)param_2);
  if (iVar6 != 0) {
    this = (SolarData *)(param_2 + 8);
    iVar6 = SolarData::Update(this,in_r2,(MLocation *)param_2);
    if (iVar6 != 0) {
      uVar5 = *(undefined4 *)param_2;
      *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 4);
      *(undefined4 *)(param_1 + 8) = uVar5;
      uVar5 = SolarData::GetSunrise(this);
      *(undefined4 *)(param_1 + 0x10) = uVar5;
      uVar5 = SolarData::GetSunset(this);
      *(undefined4 *)(param_1 + 0x14) = uVar5;
      param_1[0x20] = (TimeStruct)0x1;
    }
  }
  uVar7 = *(int *)(in_r2 + 8) * 0xe10 + *(int *)(in_r2 + 4) * 0x3c + *(int *)in_r2;
  GETimeOfDay::ComputeTime
            (aGStack_28,uVar7,*(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x14));
  GETimeOfDay::operator=((GETimeOfDay *)param_1,aGStack_28);
  uVar3 = *(uint *)(param_1 + 0x10);
  uVar7 = uVar7 + (uint)((ulonglong)DAT_00048028 * (ulonglong)uVar7 >> 0x30) * -0x15180;
  uVar4 = *(uint *)(param_1 + 0x14);
  if (uVar3 < uVar7) {
    uVar3 = uVar3 + 0x15180;
  }
  if (uVar4 < uVar7) {
    uVar4 = uVar4 + 0x15180;
  }
  *(uint *)(param_1 + 0x18) = uVar3 - uVar7;
  *(uint *)(param_1 + 0x1c) = uVar4 - uVar7;
  return param_1;
}

