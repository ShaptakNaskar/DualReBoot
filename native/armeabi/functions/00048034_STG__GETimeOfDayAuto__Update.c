/* 00048034 | STG::GETimeOfDayAuto::Update */

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
  
  iVar3 = DAT_00048140 + 0x4804c;
  puVar4 = *(uint **)(iVar3 + DAT_00048144);
  if ((*puVar4 & 1) == 0) {
    iVar1 = thunk_FUN_00074338(puVar4);
    this = *(UTime **)(iVar3 + DAT_00048148);
    if (iVar1 != 0) {
      UTime::UTime(this);
      thunk_FUN_000743a0(puVar4);
      __aeabi_atexit(this,*(undefined4 *)(iVar3 + DAT_0004814c),
                     *(undefined4 *)(iVar3 + DAT_00048150));
      UTime::GetTime_UTC();
      uVar2 = *puVar4;
      goto joined_r0x00048100;
    }
  }
  else {
    this = *(UTime **)(iVar3 + DAT_00048148);
  }
  UTime::GetTime_UTC();
  uVar2 = *puVar4;
joined_r0x00048100:
  if (((uVar2 & 1) == 0) && (iVar1 = thunk_FUN_00074338(puVar4), iVar1 != 0)) {
    UTime::UTime(this);
    thunk_FUN_000743a0(puVar4);
    __aeabi_atexit(this,*(undefined4 *)(iVar3 + DAT_0004814c),*(undefined4 *)(iVar3 + DAT_00048150))
    ;
  }
  UTime::GetTime_Local();
  Update(in_r0,in_r1);
  return;
}

