/* 0004d060 | STG::GETimeOfDayAuto::SolarData::Update */

/* STG::GETimeOfDayAuto::SolarData::Update(STG::UTime::TimeStruct<(STG::UTime::ETimeValue)0> const&,
   STG::MLocation const&) */

SolarData __thiscall
STG::GETimeOfDayAuto::SolarData::Update(SolarData *this,TimeStruct *param_1,MLocation *param_2)

{
  char *pcVar1;
  char cVar2;
  SolarData SVar3;
  int iVar4;
  int unaff_EBX;
  
  FUN_0002e044();
  if ((((this[0x14] == (SolarData)0x0) || (*(int *)(this + 8) != *(int *)param_2)) ||
      (*(int *)(this + 0xc) != *(int *)(param_2 + 4))) ||
     (SVar3 = (SolarData)0x1, *(int *)(this + 0x10) != *(int *)(param_1 + 0x1c))) {
    pcVar1 = *(char **)(unaff_EBX + 0x4ee33);
    this[0x14] = (SolarData)0x0;
    if ((*pcVar1 == '\0') && (iVar4 = FUN_00080eb0(pcVar1), iVar4 != 0)) {
      UTime::UTime(*(UTime **)(unaff_EBX + 0x4ee37));
      FUN_00080f40(pcVar1);
      __cxa_atexit(*(undefined4 *)(unaff_EBX + 0x4ee3b),*(undefined4 *)(unaff_EBX + 0x4ee37),
                   *(undefined4 *)(unaff_EBX + 0x4edef));
    }
    cVar2 = UTime::ComputeSolarEvents
                      (*(UTime **)(unaff_EBX + 0x4ee37),param_1,param_2,this,this + 4);
    if (cVar2 == '\0') {
      SVar3 = this[0x14];
    }
    else {
      *(undefined4 *)(this + 8) = *(undefined4 *)param_2;
      *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_2 + 4);
      *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_1 + 0x1c);
      this[0x14] = (SolarData)0x1;
      SVar3 = (SolarData)0x1;
    }
  }
  return SVar3;
}

