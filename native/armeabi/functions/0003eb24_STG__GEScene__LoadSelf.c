/* 0003eb24 | STG::GEScene::LoadSelf */

/* STG::GEScene::LoadSelf(STG::FFileBase const*) */

undefined4 __thiscall STG::GEScene::LoadSelf(GEScene *this,FFileBase *param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  UTime *this_00;
  undefined1 auStack_e8 [80];
  undefined1 auStack_98 [84];
  TimeStruct aTStack_44 [8];
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  GEScene local_24;
  
  iVar3 = DAT_0003ecf8 + 0x3eb3c;
  if (param_1 == (FFileBase *)0x0) {
    uVar1 = 0;
  }
  else {
    puVar4 = *(uint **)(iVar3 + DAT_0003ecfc);
    if ((*puVar4 & 1) == 0) {
      iVar2 = thunk_FUN_00074338(puVar4);
      this_00 = *(UTime **)(iVar3 + DAT_0003ed00);
      if (iVar2 != 0) {
        UTime::UTime(this_00);
        thunk_FUN_000743a0(puVar4);
        __aeabi_atexit(this_00,*(undefined4 *)(iVar3 + DAT_0003ed04),
                       *(undefined4 *)(iVar3 + DAT_0003ed08));
      }
    }
    else {
      this_00 = *(UTime **)(iVar3 + DAT_0003ed00);
    }
    UTime::GetTime_UTC();
    memcpy(this + 0x644,auStack_98,0x50);
    if (((*puVar4 & 1) == 0) && (iVar2 = thunk_FUN_00074338(puVar4), iVar2 != 0)) {
      UTime::UTime(this_00);
      thunk_FUN_000743a0(puVar4);
      __aeabi_atexit(this_00,*(undefined4 *)(iVar3 + DAT_0003ed04),
                     *(undefined4 *)(iVar3 + DAT_0003ed08));
    }
    UTime::GetTime_Local();
    memcpy(this + 0x694,auStack_e8,0x50);
    GETimeOfDayAuto::Update(aTStack_44,(TimeStruct *)(this + 0x5dc));
    GETimeOfDay::operator=((GETimeOfDay *)(this + 0x5fc),(GETimeOfDay *)aTStack_44);
    *(undefined4 *)(this + 0x604) = local_3c;
    this[0x61c] = local_24;
    *(undefined4 *)(this + 0x608) = local_38;
    *(undefined4 *)(this + 0x60c) = local_34;
    *(undefined4 *)(this + 0x610) = local_30;
    *(undefined4 *)(this + 0x614) = local_2c;
    *(undefined4 *)(this + 0x618) = local_28;
    GETimeOfDay::operator=((GETimeOfDay *)(this + 0x620),(GETimeOfDay *)(this + 0x5fc));
    this[0x640] = this[0x61c];
    *(undefined4 *)(this + 0x634) = *(undefined4 *)(this + 0x610);
    *(undefined4 *)(this + 0x638) = *(undefined4 *)(this + 0x614);
    *(undefined4 *)(this + 0x628) = *(undefined4 *)(this + 0x604);
    *(undefined4 *)(this + 0x62c) = *(undefined4 *)(this + 0x608);
    *(undefined4 *)(this + 0x630) = *(undefined4 *)(this + 0x60c);
    *(undefined4 *)(this + 0x63c) = *(undefined4 *)(this + 0x618);
    USerialize::Load(param_1,this);
    this[0x784] = (GEScene)0x0;
    uVar1 = 1;
  }
  return uVar1;
}

