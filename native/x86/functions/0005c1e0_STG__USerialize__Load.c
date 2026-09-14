/* 0005c1e0 | STG::USerialize::Load */

/* STG::USerialize::Load(STG::FFileBase const*, STG::GEAnimationCurve&) */

void STG::USerialize::Load(FFileBase *param_1,GEAnimationCurve *param_2)

{
  FFileBase *this;
  uint *puVar1;
  uint uVar2;
  double dVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uchar *puVar10;
  undefined4 *extraout_ECX;
  uint uVar11;
  int unaff_EBX;
  uint local_48;
  uint local_44;
  ulong local_34;
  uint local_30;
  uint local_2c;
  uint local_28;
  uint local_24 [3];
  undefined4 local_18;
  
  local_18 = 0x5c1f8;
  puVar10 = (uchar *)FUN_0002e044();
  this = (FFileBase *)*extraout_ECX;
  puVar1 = (uint *)extraout_ECX[1];
  FFileBase::Read(this,puVar10,4);
  LoadLegacyTimeValue((USerialize *)&local_48,this,2,local_34);
  uVar7 = local_44;
  uVar4 = local_48;
  LoadLegacyTimeValue((USerialize *)&local_48,this,2,local_34);
  uVar8 = local_44;
  uVar5 = local_48;
  LoadLegacyTimeValue((USerialize *)&local_48,this,2,local_34);
  uVar9 = local_44;
  uVar6 = local_48;
  LoadLegacyTimeValue((USerialize *)&local_48,this,2,local_34);
  FFileBase::Read(this,(uchar *)&local_30,4);
  FFileBase::Read(this,(uchar *)&local_2c,4);
  FFileBase::Read(this,(uchar *)&local_28,4);
  FFileBase::Read(this,(uchar *)local_24,4);
  *puVar1 = uVar4;
  puVar1[1] = uVar7;
  puVar1[8] = local_30;
  uVar11 = puVar1[7];
  uVar2 = puVar1[6];
  if ((uVar11 < uVar7) || ((uVar11 <= uVar7 && (uVar2 <= uVar4)))) {
    puVar1[2] = uVar5;
    puVar1[9] = local_2c;
    puVar1[3] = uVar8;
    puVar1[4] = uVar6;
    puVar1[5] = uVar9;
    puVar1[10] = local_28;
  }
  else {
    uVar11 = (uVar11 - uVar7) - (uint)(uVar2 < uVar4);
    puVar1[3] = uVar8;
    puVar1[2] = uVar5;
    puVar1[5] = uVar9;
    puVar1[9] = local_2c;
    puVar1[4] = uVar6;
    puVar1[10] = local_28;
    puVar1[0xc] = uVar2 - uVar4;
    puVar1[0xd] = uVar11;
    dVar3 = (double)CONCAT44(uVar11,uVar2 - uVar4);
    if ((int)uVar11 < 0) {
      dVar3 = dVar3 + (double)*(float *)((int)&__DT_REL[0x1cc].r_info + unaff_EBX);
    }
    puVar1[0xe] = (uint)(float)(*(double *)((int)&__DT_REL[0x22f].r_offset + unaff_EBX) / dVar3);
  }
  puVar1[6] = local_48;
  puVar1[7] = local_44;
  puVar1[0xb] = local_24[0];
  if (uVar7 <= local_44) {
    if ((local_44 <= uVar7) && (local_48 <= uVar4)) {
      return;
    }
    uVar11 = (local_44 - uVar7) - (uint)(local_48 < uVar4);
    puVar1[0xc] = local_48 - uVar4;
    puVar1[0xd] = uVar11;
    dVar3 = (double)CONCAT44(uVar11,local_48 - uVar4);
    if ((int)uVar11 < 0) {
      dVar3 = dVar3 + (double)*(float *)((int)&__DT_REL[0x1cc].r_info + unaff_EBX);
    }
    puVar1[0xe] = (uint)(float)(*(double *)((int)&__DT_REL[0x22f].r_offset + unaff_EBX) / dVar3);
  }
  return;
}

