/* 000512b0 | STG::USerialize::Load */

/* STG::USerialize::Load(STG::FFileBase const*, STG::GEAnimationTrack&) */

void STG::USerialize::Load(FFileBase *param_1,GEAnimationTrack *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  ulong uVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  undefined4 local_50;
  undefined4 uStack_4c;
  uchar local_45;
  GEAnimationTrack *local_44;
  uint local_40;
  ulong local_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  
  FFileBase::Read(param_1,(uchar *)&local_3c,4);
  uVar5 = local_3c;
  FFileBase::Read(param_1,(uchar *)&local_44,4);
  FFileBase::Read(param_1,(uchar *)&local_40,4);
  LoadLegacyTimeValue((USerialize *)&local_50,param_1,4,uVar5);
  local_38 = local_50;
  uStack_34 = uStack_4c;
  LoadLegacyTimeValue((USerialize *)&local_50,param_1,4,uVar5);
  local_30 = local_50;
  uStack_2c = uStack_4c;
  if (1 < uVar5) {
    FFileBase::Read(param_1,&local_45,1);
    FFileBase::Read(param_1,(uchar *)&local_3c,4);
    if (local_45 != '\0') goto joined_r0x00051370;
  }
  local_3c = 0xc;
joined_r0x00051370:
  uStack_24 = 0;
  local_28 = 0;
  if (2 < uVar5) {
    uStack_24 = 0;
    local_28 = 0;
    LoadLegacyTimeValue((USerialize *)&local_50,param_1,4,uVar5);
    local_28 = local_50;
    uStack_24 = uStack_4c;
  }
  GEAnimationTrack::Initialize(local_44,param_2,local_40,&local_38,&local_30,local_3c,&local_28);
  if (local_40 != 0) {
    uVar10 = 0;
    do {
      iVar7 = uVar10 * 0x40;
      uVar10 = uVar10 + 1;
      Load(param_1,(GEAnimationCurve *)(*(int *)(param_2 + 0x10) + iVar7));
    } while (uVar10 < local_40);
  }
  if (uVar5 < 5) {
    if (local_40 != 0) {
      iVar9 = *(int *)(param_2 + 0x18);
      uVar10 = 0;
      iVar8 = *(int *)(param_2 + 0x10);
      iVar7 = *(int *)(param_2 + 0x20);
      do {
        iVar1 = uVar10 * 0x40;
        iVar2 = uVar10 * 8;
        iVar11 = iVar8 + iVar1;
        uVar10 = uVar10 + 1;
        puVar3 = (undefined4 *)(iVar1 + iVar8);
        uVar6 = puVar3[1];
        puVar4 = (undefined4 *)(iVar9 + iVar2);
        *puVar4 = *puVar3;
        puVar4[1] = uVar6;
        uVar6 = *(undefined4 *)(iVar11 + 0x1c);
        puVar3 = (undefined4 *)(iVar7 + iVar2);
        *puVar3 = *(undefined4 *)(iVar11 + 0x18);
        puVar3[1] = uVar6;
      } while (uVar10 != local_40);
    }
  }
  else if (local_40 != 0) {
    uVar10 = 0;
    do {
      iVar7 = uVar10 * 8;
      uVar10 = uVar10 + 1;
      FFileBase::Read(param_1,(uchar *)(*(int *)(param_2 + 0x18) + iVar7),8);
      FFileBase::Read(param_1,(uchar *)(*(int *)(param_2 + 0x20) + iVar7),8);
    } while (uVar10 < local_40);
  }
  return;
}

