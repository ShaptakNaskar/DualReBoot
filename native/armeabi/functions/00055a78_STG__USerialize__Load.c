/* 00055a78 | STG::USerialize::Load */

/* STG::USerialize::Load(STG::FFileBase const*, STG::GEAnimationTrack&) */

void STG::USerialize::Load(FFileBase *param_1,GEAnimationTrack *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  ulong uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  undefined4 local_50;
  undefined4 uStack_4c;
  uchar local_45;
  undefined4 local_44;
  uint local_40;
  ulong local_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  
  FFileBase::Read(param_1,(uchar *)&local_3c,4);
  uVar4 = local_3c;
  FFileBase::Read(param_1,(uchar *)&local_44,4);
  FFileBase::Read(param_1,(uchar *)&local_40,4);
  LoadLegacyTimeValue((USerialize *)&local_50,param_1,4,uVar4);
  local_38 = local_50;
  uStack_34 = uStack_4c;
  LoadLegacyTimeValue((USerialize *)&local_50,param_1,4,uVar4);
  local_30 = local_50;
  uStack_2c = uStack_4c;
  if (1 < uVar4) {
    FFileBase::Read(param_1,&local_45,1);
    FFileBase::Read(param_1,(uchar *)&local_3c,4);
    if (local_45 != '\0') goto joined_r0x00055b38;
  }
  local_3c = 0xc;
joined_r0x00055b38:
  uStack_24 = 0;
  local_28 = 0;
  if (2 < uVar4) {
    uStack_24 = 0;
    local_28 = 0;
    LoadLegacyTimeValue((USerialize *)&local_50,param_1,4,uVar4);
    local_28 = local_50;
    uStack_24 = uStack_4c;
  }
  GEAnimationTrack::Initialize(param_2,local_44,local_40,&local_38,&local_30,local_3c,&local_28);
  if (local_40 != 0) {
    uVar9 = 0;
    do {
      Load(param_1,(GEAnimationCurve *)(*(int *)(param_2 + 0x10) + uVar9 * 0x40));
      uVar9 = uVar9 + 1;
    } while (uVar9 < local_40);
  }
  if (uVar4 < 5) {
    if (local_40 != 0) {
      iVar8 = *(int *)(param_2 + 0x18);
      iVar7 = *(int *)(param_2 + 0x10);
      iVar6 = *(int *)(param_2 + 0x20);
      uVar9 = 0;
      do {
        iVar1 = uVar9 * 8;
        iVar10 = uVar9 * 0x40;
        puVar2 = (undefined4 *)(iVar7 + iVar10);
        uVar5 = puVar2[1];
        puVar3 = (undefined4 *)(iVar8 + iVar1);
        *puVar3 = *puVar2;
        puVar3[1] = uVar5;
        uVar9 = uVar9 + 1;
        iVar10 = iVar7 + iVar10;
        uVar5 = *(undefined4 *)(iVar10 + 0x1c);
        puVar2 = (undefined4 *)(iVar6 + iVar1);
        *puVar2 = *(undefined4 *)(iVar10 + 0x18);
        puVar2[1] = uVar5;
      } while (uVar9 != local_40);
    }
  }
  else if (local_40 != 0) {
    uVar9 = 0;
    do {
      FFileBase::Read(param_1,(uchar *)(*(int *)(param_2 + 0x18) + uVar9 * 8),8);
      FFileBase::Read(param_1,(uchar *)(*(int *)(param_2 + 0x20) + uVar9 * 8),8);
      uVar9 = uVar9 + 1;
    } while (uVar9 < local_40);
  }
  return;
}

