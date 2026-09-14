/* 00045874 | STG::GETimeOfDayAuto::SolarData::Update */

/* STG::GETimeOfDayAuto::SolarData::Update(STG::UTime::TimeStruct<(STG::UTime::ETimeValue)0> const&,
   STG::MLocation const&) */

SolarData __thiscall
STG::GETimeOfDayAuto::SolarData::Update(SolarData *this,TimeStruct *param_1,MLocation *param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  SolarData SVar4;
  undefined4 uVar5;
  int iVar6;
  UTime *this_00;
  uint *puVar7;
  
  iVar6 = DAT_0004598c + 0x45898;
  if ((((this[0x14] == (SolarData)0x0) || (*(int *)(this + 8) != *(int *)param_2)) ||
      (*(int *)(this + 0xc) != *(int *)(param_2 + 4))) ||
     (*(int *)(this + 0x10) != *(int *)(param_1 + 0x1c))) {
    this[0x14] = (SolarData)0x0;
    puVar7 = *(uint **)(iVar6 + DAT_00045990);
    if ((*puVar7 & 1) == 0) {
      iVar2 = thunk_FUN_0007004c(puVar7);
      this_00 = *(UTime **)(iVar6 + DAT_00045994);
      if (iVar2 != 0) {
        UTime::UTime(this_00);
        thunk_FUN_000700b0(puVar7);
        __aeabi_atexit(this_00,*(undefined4 *)(iVar6 + DAT_00045998),
                       *(undefined4 *)(iVar6 + DAT_0004599c));
      }
    }
    else {
      this_00 = *(UTime **)(iVar6 + DAT_00045994);
    }
    iVar6 = UTime::ComputeSolarEvents(this_00,param_1,param_2,this,this + 4);
    if (iVar6 == 0) {
      SVar4 = this[0x14];
    }
    else {
      uVar1 = *(undefined4 *)param_2;
      uVar3 = *(undefined4 *)(param_2 + 4);
      SVar4 = (SolarData)0x1;
      uVar5 = *(undefined4 *)(param_1 + 0x1c);
      this[0x14] = (SolarData)0x1;
      *(undefined4 *)(this + 8) = uVar1;
      *(undefined4 *)(this + 0xc) = uVar3;
      *(undefined4 *)(this + 0x10) = uVar5;
    }
  }
  else {
    SVar4 = (SolarData)0x1;
  }
  return SVar4;
}

