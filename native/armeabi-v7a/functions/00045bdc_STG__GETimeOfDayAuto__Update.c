/* 00045bdc | STG::GETimeOfDayAuto::Update */

/* STG::GETimeOfDayAuto::Update() */

void STG::GETimeOfDayAuto::Update(void)

{
  TimeStruct *in_r0;
  int iVar1;
  TimeStruct *in_r1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  UTime *this;
  
  iVar3 = DAT_00045ce8 + 0x45bfc;
  puVar4 = *(uint **)(iVar3 + DAT_00045cec);
  if ((*puVar4 & 1) == 0) {
    iVar1 = thunk_FUN_0007004c(puVar4);
    this = *(UTime **)(iVar3 + DAT_00045cf0);
    if (iVar1 != 0) {
      UTime::UTime(this);
      thunk_FUN_000700b0(puVar4);
      __aeabi_atexit(this,*(undefined4 *)(iVar3 + DAT_00045cf4),
                     *(undefined4 *)(iVar3 + DAT_00045cf8));
      UTime::GetTime_UTC();
      uVar2 = *puVar4;
      goto joined_r0x00045ca8;
    }
  }
  else {
    this = *(UTime **)(iVar3 + DAT_00045cf0);
  }
  UTime::GetTime_UTC();
  uVar2 = *puVar4;
joined_r0x00045ca8:
  if (((uVar2 & 1) == 0) && (iVar1 = thunk_FUN_0007004c(puVar4), iVar1 != 0)) {
    UTime::UTime(this);
    thunk_FUN_000700b0(puVar4);
    __aeabi_atexit(this,*(undefined4 *)(iVar3 + DAT_00045cf4),*(undefined4 *)(iVar3 + DAT_00045cf8))
    ;
  }
  UTime::GetTime_Local();
  Update(in_r0,in_r1);
  return;
}

