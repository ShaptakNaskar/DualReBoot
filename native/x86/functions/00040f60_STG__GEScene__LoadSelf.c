/* 00040f60 | STG::GEScene::LoadSelf */

/* STG::GEScene::LoadSelf(STG::FFileBase const*) */

undefined4 STG::GEScene::LoadSelf(FFileBase *param_1)

{
  GEScene *pGVar1;
  FFileBase *pFVar2;
  char *pcVar3;
  undefined4 uVar4;
  undefined4 *extraout_ECX;
  int iVar5;
  int unaff_EBX;
  undefined4 *puVar6;
  GEScene *pGVar7;
  byte bVar8;
  undefined4 local_f0 [20];
  undefined4 local_a0 [23];
  TimeStruct local_44 [8];
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  GEScene local_24;
  undefined4 local_18;
  
  bVar8 = 0;
  local_18 = 0x40f77;
  uVar4 = FUN_0002e044();
  pGVar1 = (GEScene *)*extraout_ECX;
  pFVar2 = (FFileBase *)extraout_ECX[1];
  if (pFVar2 != (FFileBase *)0x0) {
    if (**(char **)(unaff_EBX + 0x5af35) == '\0') {
      iVar5 = FUN_00080eb0(*(char **)(unaff_EBX + 0x5af35));
      if (iVar5 != 0) {
        UTime::UTime(*(UTime **)(unaff_EBX + 0x5af39));
        FUN_00080f40(*(undefined4 *)(unaff_EBX + 0x5af35));
        __cxa_atexit(*(undefined4 *)(unaff_EBX + 0x5af3d),*(undefined4 *)(unaff_EBX + 0x5af39),
                     *(undefined4 *)(unaff_EBX + 0x5aef1));
      }
    }
    uVar4 = *(undefined4 *)(unaff_EBX + 0x5af39);
    UTime::GetTime_UTC();
    pcVar3 = *(char **)(unaff_EBX + 0x5af35);
    puVar6 = local_a0;
    pGVar7 = pGVar1 + 0x630;
    for (iVar5 = 0x14; iVar5 != 0; iVar5 = iVar5 + -1) {
      *(undefined4 *)pGVar7 = *puVar6;
      puVar6 = puVar6 + (uint)bVar8 * -2 + 1;
      pGVar7 = pGVar7 + (uint)bVar8 * -8 + 4;
    }
    if (*pcVar3 == '\0') {
      iVar5 = FUN_00080eb0(pcVar3,uVar4);
      if (iVar5 != 0) {
        UTime::UTime(*(UTime **)(unaff_EBX + 0x5af39));
        FUN_00080f40(*(undefined4 *)(unaff_EBX + 0x5af35));
        __cxa_atexit(*(undefined4 *)(unaff_EBX + 0x5af3d),*(undefined4 *)(unaff_EBX + 0x5af39),
                     *(undefined4 *)(unaff_EBX + 0x5aef1));
      }
    }
    UTime::GetTime_Local();
    puVar6 = local_f0;
    pGVar7 = pGVar1 + 0x680;
    for (iVar5 = 0x14; iVar5 != 0; iVar5 = iVar5 + -1) {
      *(undefined4 *)pGVar7 = *puVar6;
      puVar6 = puVar6 + (uint)bVar8 * -2 + 1;
      pGVar7 = pGVar7 + (uint)bVar8 * -8 + 4;
    }
    GETimeOfDayAuto::Update(local_44,(TimeStruct *)(pGVar1 + 0x5c8));
    GETimeOfDay::operator=((GETimeOfDay *)(pGVar1 + 0x5e8),(GETimeOfDay *)local_44);
    *(undefined4 *)(pGVar1 + 0x5f0) = local_3c;
    *(undefined4 *)(pGVar1 + 0x5f4) = local_38;
    *(undefined4 *)(pGVar1 + 0x5f8) = local_34;
    *(undefined4 *)(pGVar1 + 0x5fc) = local_30;
    *(undefined4 *)(pGVar1 + 0x600) = local_2c;
    *(undefined4 *)(pGVar1 + 0x604) = local_28;
    pGVar1[0x608] = local_24;
    GETimeOfDay::operator=((GETimeOfDay *)(pGVar1 + 0x60c),(GETimeOfDay *)(pGVar1 + 0x5e8));
    *(undefined4 *)(pGVar1 + 0x614) = *(undefined4 *)(pGVar1 + 0x5f0);
    *(undefined4 *)(pGVar1 + 0x618) = *(undefined4 *)(pGVar1 + 0x5f4);
    *(undefined4 *)(pGVar1 + 0x61c) = *(undefined4 *)(pGVar1 + 0x5f8);
    *(undefined4 *)(pGVar1 + 0x620) = *(undefined4 *)(pGVar1 + 0x5fc);
    *(undefined4 *)(pGVar1 + 0x624) = *(undefined4 *)(pGVar1 + 0x600);
    *(undefined4 *)(pGVar1 + 0x628) = *(undefined4 *)(pGVar1 + 0x604);
    pGVar1[0x62c] = pGVar1[0x608];
    USerialize::Load(pFVar2,pGVar1);
    uVar4 = 1;
    pGVar1[0x770] = (GEScene)0x0;
  }
  return uVar4;
}

