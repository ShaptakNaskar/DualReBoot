/* 000557a4 | STG::USerialize::Load */

/* STG::USerialize::Load(STG::FFileBase const*, STG::GEAnimationCurve&) */

void STG::USerialize::Load(FFileBase *param_1,GEAnimationCurve *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined4 uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  bool bVar11;
  undefined8 uVar12;
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
  uVar8 = *(uint *)(param_2 + 0x18);
  uVar9 = *(uint *)(param_2 + 0x1c);
  bVar11 = uVar9 <= uVar4;
  if (uVar4 == uVar9) {
    bVar11 = uVar8 <= uVar1;
  }
  *(uint *)param_2 = uVar1;
  *(uint *)(param_2 + 4) = uVar4;
  *(undefined4 *)(param_2 + 0x20) = local_38;
  if (bVar11) {
    *(uint *)(param_2 + 8) = uVar2;
    *(undefined4 *)(param_2 + 0x24) = local_34;
    *(uint *)(param_2 + 0xc) = uVar5;
    *(uint *)(param_2 + 0x10) = uVar3;
    *(uint *)(param_2 + 0x14) = uVar6;
    *(undefined4 *)(param_2 + 0x28) = local_30;
  }
  else {
    iVar10 = uVar9 - (uVar4 + (uVar8 < uVar1));
    uVar12 = __floatundidf(uVar8 - uVar1,iVar10);
    __divdf3(0,0x3ff00000,(int)uVar12,(int)((ulonglong)uVar12 >> 0x20));
    uVar7 = __truncdfsf2();
    *(uint *)(param_2 + 0x30) = uVar8 - uVar1;
    *(int *)(param_2 + 0x34) = iVar10;
    *(undefined4 *)(param_2 + 0x24) = local_34;
    *(uint *)(param_2 + 8) = uVar2;
    *(uint *)(param_2 + 0xc) = uVar5;
    *(uint *)(param_2 + 0x10) = uVar3;
    *(uint *)(param_2 + 0x14) = uVar6;
    *(undefined4 *)(param_2 + 0x28) = local_30;
    *(undefined4 *)(param_2 + 0x38) = uVar7;
  }
  bVar11 = local_44 <= uVar4;
  if (uVar4 == local_44) {
    bVar11 = local_48 <= uVar1;
  }
  *(uint *)(param_2 + 0x18) = local_48;
  *(uint *)(param_2 + 0x1c) = local_44;
  *(undefined4 *)(param_2 + 0x2c) = local_2c[0];
  if (!bVar11) {
    *(uint *)(param_2 + 0x30) = local_48 - uVar1;
    *(uint *)(param_2 + 0x34) = local_44 - (uVar4 + (local_48 < uVar1));
    uVar12 = __floatundidf();
    __divdf3(0,0x3ff00000,(int)uVar12,(int)((ulonglong)uVar12 >> 0x20));
    uVar7 = __truncdfsf2();
    *(undefined4 *)(param_2 + 0x38) = uVar7;
  }
  return;
}

