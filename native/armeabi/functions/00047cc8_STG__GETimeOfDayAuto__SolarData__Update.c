/* 00047cc8 | STG::GETimeOfDayAuto::SolarData::Update */

/* STG::GETimeOfDayAuto::SolarData::Update(STG::UTime::TimeStruct<(STG::UTime::ETimeValue)0> const&,
   STG::MLocation const&) */

SolarData __thiscall
STG::GETimeOfDayAuto::SolarData::Update(SolarData *this,TimeStruct *param_1,MLocation *param_2)

{
  SolarData SVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  UTime *this_00;
  uint *puVar6;
  
  iVar5 = DAT_00047de0 + 0x47cec;
  if ((((this[0x14] == (SolarData)0x0) || (*(int *)(this + 8) != *(int *)param_2)) ||
      (*(int *)(this + 0xc) != *(int *)(param_2 + 4))) ||
     (*(int *)(this + 0x10) != *(int *)(param_1 + 0x1c))) {
    this[0x14] = (SolarData)0x0;
    puVar6 = *(uint **)(iVar5 + DAT_00047de4);
    if ((*puVar6 & 1) == 0) {
      iVar2 = thunk_FUN_00074338(puVar6);
      this_00 = *(UTime **)(iVar5 + DAT_00047de8);
      if (iVar2 != 0) {
        UTime::UTime(this_00);
        thunk_FUN_000743a0(puVar6);
        __aeabi_atexit(this_00,*(undefined4 *)(iVar5 + DAT_00047dec),
                       *(undefined4 *)(iVar5 + DAT_00047df0));
      }
    }
    else {
      this_00 = *(UTime **)(iVar5 + DAT_00047de8);
    }
    iVar5 = UTime::ComputeSolarEvents(this_00,param_1,param_2,this,this + 4);
    if (iVar5 == 0) {
      SVar1 = this[0x14];
    }
    else {
      uVar3 = *(undefined4 *)(param_1 + 0x1c);
      *(undefined4 *)(this + 8) = *(undefined4 *)param_2;
      uVar4 = *(undefined4 *)(param_2 + 4);
      SVar1 = (SolarData)0x1;
      *(undefined4 *)(this + 0x10) = uVar3;
      *(undefined4 *)(this + 0xc) = uVar4;
      this[0x14] = (SolarData)0x1;
    }
  }
  else {
    SVar1 = (SolarData)0x1;
  }
  return SVar1;
}

