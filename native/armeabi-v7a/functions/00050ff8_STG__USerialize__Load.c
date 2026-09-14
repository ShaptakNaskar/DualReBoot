/* 00050ff8 | STG::USerialize::Load */

/* STG::USerialize::Load(STG::FFileBase const*, STG::GEAnimationCurve&) */

void STG::USerialize::Load(FFileBase *param_1,GEAnimationCurve *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  bool bVar10;
  double dVar11;
  uint local_48;
  uint local_44;
  ulong local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c [2];
  
  FFileBase::Read(param_1,(uchar *)&local_3c,4);
  LoadLegacyTimeValue((USerialize *)&local_48,param_1,2,local_3c);
  uVar4 = local_44;
  uVar1 = local_48;
  LoadLegacyTimeValue((USerialize *)&local_48,param_1,2,local_3c);
  uVar5 = local_44;
  uVar2 = local_48;
  LoadLegacyTimeValue((USerialize *)&local_48,param_1,2,local_3c);
  uVar6 = local_44;
  uVar3 = local_48;
  LoadLegacyTimeValue((USerialize *)&local_48,param_1,2,local_3c);
  FFileBase::Read(param_1,(uchar *)&local_38,4);
  FFileBase::Read(param_1,(uchar *)&local_34,4);
  FFileBase::Read(param_1,(uchar *)&local_30,4);
  FFileBase::Read(param_1,(uchar *)local_2c,4);
  uVar7 = *(uint *)(param_2 + 0x18);
  uVar8 = *(uint *)(param_2 + 0x1c);
  bVar10 = uVar8 <= uVar4;
  if (uVar4 == uVar8) {
    bVar10 = uVar7 <= uVar1;
  }
  *(uint *)param_2 = uVar1;
  *(uint *)(param_2 + 4) = uVar4;
  *(undefined4 *)(param_2 + 0x20) = local_38;
  if (bVar10) {
    *(uint *)(param_2 + 8) = uVar2;
    *(uint *)(param_2 + 0xc) = uVar5;
    *(undefined4 *)(param_2 + 0x24) = local_34;
    *(uint *)(param_2 + 0x10) = uVar3;
    *(uint *)(param_2 + 0x14) = uVar6;
    *(undefined4 *)(param_2 + 0x28) = local_30;
  }
  else {
    iVar9 = uVar8 - (uVar4 + (uVar7 < uVar1));
    dVar11 = (double)__floatundidf(uVar7 - uVar1,iVar9);
    *(undefined4 *)(param_2 + 0x24) = local_34;
    *(uint *)(param_2 + 8) = uVar2;
    *(uint *)(param_2 + 0xc) = uVar5;
    *(undefined4 *)(param_2 + 0x28) = local_30;
    *(uint *)(param_2 + 0x10) = uVar3;
    *(uint *)(param_2 + 0x14) = uVar6;
    *(uint *)(param_2 + 0x30) = uVar7 - uVar1;
    *(int *)(param_2 + 0x34) = iVar9;
    *(float *)(param_2 + 0x38) = (float)(1.0 / dVar11);
  }
  bVar10 = local_44 <= uVar4;
  if (uVar4 == local_44) {
    bVar10 = local_48 <= uVar1;
  }
  *(uint *)(param_2 + 0x18) = local_48;
  *(uint *)(param_2 + 0x1c) = local_44;
  *(undefined4 *)(param_2 + 0x2c) = local_2c[0];
  if (!bVar10) {
    *(uint *)(param_2 + 0x30) = local_48 - uVar1;
    *(uint *)(param_2 + 0x34) = local_44 - (uVar4 + (local_48 < uVar1));
    dVar11 = (double)__floatundidf();
    *(float *)(param_2 + 0x38) = (float)(1.0 / dVar11);
  }
  return;
}

