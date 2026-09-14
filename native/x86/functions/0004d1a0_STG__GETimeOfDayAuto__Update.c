/* 0004d1a0 | STG::GETimeOfDayAuto::Update */

/* STG::GETimeOfDayAuto::Update(STG::UTime::TimeStruct<(STG::UTime::ETimeValue)0> const&,
   STG::UTime::TimeStruct<(STG::UTime::ETimeValue)1> const&) */

TimeStruct * STG::GETimeOfDayAuto::Update(TimeStruct *param_1,TimeStruct *param_2)

{
  char *pcVar1;
  uint uVar2;
  uint uVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int unaff_EBX;
  uint uVar8;
  TimeStruct *in_stack_0000000c;
  TimeStruct *in_stack_00000010;
  undefined4 local_30;
  GETimeOfDay local_24 [16];
  undefined4 local_14;
  
  local_14 = 0x4d1a9;
  FUN_0002e044();
  pcVar1 = *(char **)(unaff_EBX + 0x4ed03);
  if ((*pcVar1 == '\0') && (iVar6 = FUN_00080eb0(pcVar1), iVar6 != 0)) {
    UTime::UTime(*(UTime **)(unaff_EBX + 0x4ed07));
    FUN_00080f40(pcVar1);
    __cxa_atexit(*(undefined4 *)(unaff_EBX + 0x4ed0b),*(undefined4 *)(unaff_EBX + 0x4ed07),
                 *(undefined4 *)(unaff_EBX + 0x4ecbf));
  }
  iVar5 = UTime::GetUTCOffset(*(UTime **)(unaff_EBX + 0x4ed07),in_stack_00000010,in_stack_0000000c);
  iVar6 = GETimeOfDay::GetDefaultSunrise();
  iVar7 = GETimeOfDay::GetDefaultSunset();
  for (iVar6 = iVar6 + iVar5 * -0xe10; iVar6 < 0; iVar6 = iVar6 + 0x1517f) {
  }
  for (; 0x1517f < iVar6; iVar6 = iVar6 + -0x1517f) {
  }
  for (iVar7 = iVar7 + iVar5 * -0xe10; iVar7 < 0; iVar7 = iVar7 + 0x1517f) {
  }
  for (; 0x1517f < iVar7; iVar7 = iVar7 + -0x1517f) {
  }
  ResultData::ResultData((ResultData *)param_1);
  *(int *)(param_1 + 0x14) = iVar7;
  *(int *)(param_1 + 0x10) = iVar6;
  param_1[0x20] = (TimeStruct)0x0;
  cVar4 = MLocation::IsValid((MLocation *)param_2);
  if ((cVar4 != '\0') &&
     (cVar4 = SolarData::Update((SolarData *)(param_2 + 8),in_stack_0000000c,(MLocation *)param_2),
     cVar4 != '\0')) {
    *(undefined4 *)(param_1 + 8) = *(undefined4 *)param_2;
    *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 4);
    SolarData::GetSunrise();
    *(undefined4 *)(param_1 + 0x10) = local_30;
    SolarData::GetSunset();
    param_1[0x20] = (TimeStruct)0x1;
    *(undefined4 *)(param_1 + 0x14) = local_30;
  }
  uVar8 = *(int *)(in_stack_0000000c + 8) * 0xe10 + *(int *)(in_stack_0000000c + 4) * 0x3c +
          *(int *)in_stack_0000000c;
  GETimeOfDay::ComputeTime
            (local_24,uVar8,*(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x14));
  GETimeOfDay::operator=((GETimeOfDay *)param_1,local_24);
  uVar8 = uVar8 % 0x15180;
  uVar2 = *(uint *)(param_1 + 0x10);
  uVar3 = *(uint *)(param_1 + 0x14);
  iVar6 = uVar2 - uVar8;
  if (uVar2 < uVar8) {
    iVar6 = (uVar2 + 0x15180) - uVar8;
  }
  *(int *)(param_1 + 0x18) = iVar6;
  iVar6 = uVar3 - uVar8;
  if (uVar3 < uVar8) {
    iVar6 = (uVar3 + 0x15180) - uVar8;
  }
  *(int *)(param_1 + 0x1c) = iVar6;
  return param_1;
}

