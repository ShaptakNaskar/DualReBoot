/* 0005c600 | STG::USerialize::Load */

/* STG::USerialize::Load(STG::FFileBase const*, STG::GEAnimationTrack&) */

void STG::USerialize::Load(FFileBase *param_1,GEAnimationTrack *param_2)

{
  FFileBase *this;
  GEAnimationTrack *pGVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 *extraout_ECX;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  int local_78;
  undefined4 local_68;
  undefined4 local_64;
  uchar local_59;
  undefined4 local_58;
  uint local_54;
  uint local_50 [4];
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_18;
  
  local_18 = 0x5c618;
  FUN_0002e044();
  this = (FFileBase *)*extraout_ECX;
  pGVar1 = (GEAnimationTrack *)extraout_ECX[1];
  FFileBase::Read(this,(uchar *)local_50,4);
  uVar6 = local_50[0];
  FFileBase::Read(this,(uchar *)&local_58,4);
  FFileBase::Read(this,(uchar *)&local_54,4);
  LoadLegacyTimeValue((USerialize *)&local_68,this,4,uVar6);
  local_2c = local_64;
  local_30 = local_68;
  LoadLegacyTimeValue((USerialize *)&local_68,this,4,uVar6);
  local_28 = local_68;
  local_24 = local_64;
  if (uVar6 < 2) {
    local_40 = 0;
    local_3c = 0;
    uVar9 = 0xc;
  }
  else {
    FFileBase::Read(this,&local_59,1);
    FFileBase::Read(this,(uchar *)local_50,4);
    uVar9 = 0xc;
    if (local_59 != '\0') {
      uVar9 = local_50[0];
    }
    local_40 = 0;
    local_3c = 0;
    if (uVar6 != 2) {
      LoadLegacyTimeValue((USerialize *)&local_68,this,4,uVar6);
      local_40 = local_68;
      local_3c = local_64;
    }
  }
  GEAnimationTrack::Initialize(pGVar1,local_58,local_54,&local_30,&local_28,uVar9,&local_40);
  uVar9 = 0;
  if (local_54 != 0) {
    uVar8 = 0;
    iVar7 = 0;
    do {
      uVar8 = uVar8 + 1;
      Load(this,(GEAnimationCurve *)(iVar7 + *(int *)(pGVar1 + 0x10)));
      uVar9 = local_54;
      iVar7 = iVar7 + 0x3c;
    } while (uVar8 < local_54);
  }
  if (uVar6 < 5) {
    if (local_54 != 0) {
      iVar7 = *(int *)(pGVar1 + 0x10);
      iVar2 = *(int *)(pGVar1 + 0x18);
      iVar3 = *(int *)(pGVar1 + 0x20);
      uVar6 = 0;
      local_78 = 0;
      do {
        puVar5 = (undefined4 *)(iVar7 + local_78);
        local_78 = local_78 + 0x3c;
        uVar4 = *puVar5;
        *(undefined4 *)(iVar2 + 4 + uVar6 * 8) = puVar5[1];
        *(undefined4 *)(iVar2 + uVar6 * 8) = uVar4;
        uVar4 = puVar5[7];
        *(undefined4 *)(iVar3 + uVar6 * 8) = puVar5[6];
        *(undefined4 *)(iVar3 + 4 + uVar6 * 8) = uVar4;
        uVar6 = uVar6 + 1;
      } while (uVar6 != local_54);
    }
  }
  else if (uVar9 != 0) {
    uVar6 = 0;
    do {
      iVar7 = uVar6 * 8;
      uVar6 = uVar6 + 1;
      FFileBase::Read(this,(uchar *)(iVar7 + *(int *)(pGVar1 + 0x18)),8);
      FFileBase::Read(this,(uchar *)(iVar7 + *(int *)(pGVar1 + 0x20)),8);
    } while (uVar6 < local_54);
    return;
  }
  return;
}

