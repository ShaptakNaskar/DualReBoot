/* 0005dae0 | STG::USerialize::Load */

/* STG::USerialize::Load(STG::FFileBase const*, STG::GEVertexBlender&) */

void STG::USerialize::Load(FFileBase *param_1,GEVertexBlender *param_2)

{
  uint uVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  double dVar7;
  float fVar8;
  uint uVar9;
  float fVar10;
  ulong uVar11;
  uint *puVar12;
  uint uVar13;
  int unaff_EBX;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  float fVar18;
  undefined8 local_7c;
  int local_74;
  uint *local_6c;
  uint local_68;
  uint local_54;
  uint uStack_50;
  ulong local_40;
  ulong local_3c;
  uint local_38;
  uint local_34;
  uint local_30;
  int local_2c;
  int local_28;
  undefined4 local_24;
  undefined4 uStack_20;
  undefined4 uStack_14;
  
  uStack_14 = 0x5dae9;
  FUN_0002e044();
  FFileBase::Read(param_1,(uchar *)&local_38,4);
  FFileBase::Read(param_1,(uchar *)&local_40,4);
  FFileBase::Read(param_1,(uchar *)&local_3c,4);
  GEVertexBlender::Initialize(param_2,local_40,local_3c);
  if (2 < local_38) {
    Load(param_1,*(GEAnimationTrack **)param_2);
    if (local_40 == 0) {
      return;
    }
    uVar14 = 0;
    do {
      iVar2 = uVar14 * 4;
      uVar14 = uVar14 + 1;
      FFileBase::Read(param_1,*(uchar **)(*(int *)(param_2 + 0xc) + iVar2),local_3c << 4);
    } while (uVar14 < local_40);
    return;
  }
  LoadLegacyTimeValue((USerialize *)&local_54,param_1,2,local_38);
  uVar11 = local_40;
  uVar1 = uStack_50;
  uVar14 = local_54;
  if (local_40 == 0) {
    local_6c = (uint *)0x0;
LAB_0005df88:
    local_34 = *local_6c;
    local_30 = local_6c[1];
    local_2c = local_34 + uVar14;
    local_28 = local_30 + uVar1 + (uint)CARRY4(local_34,uVar14);
    local_24 = 0;
    uStack_20 = 0;
    GEAnimationTrack::Initialize
              (*(GEAnimationTrack **)param_2,0,0xffffffff,&local_34,&local_2c,0xc,&local_24);
    local_68 = 0xffffffff;
  }
  else {
    local_6c = operator_new__(local_40 << 3);
    if (local_40 == 0) goto LAB_0005df88;
    uVar15 = 0;
    do {
      LoadLegacyTimeValue((USerialize *)&local_54,param_1,2,local_38);
      local_6c[uVar15 * 2] = local_54;
      local_6c[uVar15 * 2 + 1] = uStack_50;
      iVar2 = uVar15 * 4;
      uVar15 = uVar15 + 1;
      FFileBase::Read(param_1,*(uchar **)(*(int *)(param_2 + 0xc) + iVar2),local_3c << 4);
    } while (uVar15 < local_40);
    local_68 = local_40 - 1;
    local_34 = *local_6c;
    local_30 = local_6c[1];
    local_2c = local_34 + uVar14;
    local_28 = local_30 + uVar1 + (uint)CARRY4(local_34,uVar14);
    local_24 = 0;
    uStack_20 = 0;
    GEAnimationTrack::Initialize
              (*(GEAnimationTrack **)param_2,0,local_68,&local_34,&local_2c,0xc,&local_24);
    if (local_68 == 0) goto LAB_0005df66;
  }
  local_74 = 0;
  dVar7 = *(double *)((int)DWORD_ARRAY_00028b54 + unaff_EBX + 0x1383);
  fVar8 = *(float *)((int)DWORD_ARRAY_00028b54 + unaff_EBX + 0x106f);
  fVar3 = *(float *)((int)DWORD_ARRAY_00028b54 + unaff_EBX + 0x107f);
  fVar4 = *(float *)((int)DWORD_ARRAY_00028b54 + unaff_EBX + 0x10c3);
  iVar2 = *(int *)(*(int *)param_2 + 0x10);
  fVar5 = *(float *)((int)DWORD_ARRAY_00028b54 + unaff_EBX + 0x10c7);
  fVar6 = *(float *)((int)DWORD_ARRAY_00028b54 + unaff_EBX + 0x106b);
  uVar14 = 0;
  do {
    uVar1 = uVar14 + 1;
    uVar15 = local_6c[uVar14 * 2];
    uVar9 = local_6c[uVar14 * 2 + 1];
    uVar16 = local_6c[uVar1 * 2] - uVar15;
    puVar12 = (uint *)(iVar2 + local_74);
    *puVar12 = uVar15;
    puVar12[1] = uVar9;
    uVar17 = puVar12[6];
    uVar13 = puVar12[7];
    fVar18 = (float)(uVar14 >> 0x10) * fVar3 + (float)(uVar14 & 0xffff);
    puVar12[8] = (uint)fVar18;
    if ((uVar13 < uVar9) || ((uVar13 <= uVar9 && (uVar17 <= uVar15)))) {
      puVar12[2] = uVar16 / 3 + uVar15;
      puVar12[3] = uVar9 + CARRY4(uVar16 / 3,uVar15);
      puVar12[9] = (uint)(fVar18 + fVar4);
      uVar14 = (uVar16 * 2) / 3;
      puVar12[4] = uVar14 + uVar15;
      puVar12[5] = uVar9 + CARRY4(uVar14,uVar15);
      puVar12[10] = (uint)(fVar18 + fVar5);
    }
    else {
      uVar14 = (uVar13 - uVar9) - (uint)(uVar17 < uVar15);
      local_7c = CONCAT44(uVar14,uVar17 - uVar15);
      puVar12[2] = uVar16 / 3 + uVar15;
      puVar12[3] = uVar9 + CARRY4(uVar16 / 3,uVar15);
      fVar10 = (float)local_7c;
      puVar12[9] = (uint)(fVar18 + fVar4);
      uVar13 = (uVar16 * 2) / 3;
      puVar12[5] = uVar9 + CARRY4(uVar13,uVar15);
      puVar12[4] = uVar13 + uVar15;
      puVar12[0xd] = uVar14;
      puVar12[10] = (uint)(fVar18 + fVar5);
      puVar12[0xc] = uVar17 - uVar15;
      if ((int)uVar14 < 0) {
        fVar10 = fVar10 + fVar8;
      }
      puVar12[0xe] = (uint)(float)(dVar7 / (double)fVar10);
    }
    uVar14 = (uVar16 * 3) / 3;
    puVar12[6] = uVar15 + uVar14;
    uVar17 = uVar9 + CARRY4(uVar15,uVar14);
    puVar12[7] = uVar17;
    puVar12[0xb] = (uint)(fVar18 + fVar6);
    if ((uVar9 <= uVar17) && ((uVar9 < uVar17 || (uVar15 < uVar15 + uVar14)))) {
      puVar12[0xc] = uVar14;
      puVar12[0xd] = 0;
      puVar12[0xe] = (uint)(float)(dVar7 / (double)uVar14);
    }
    local_74 = local_74 + 0x3c;
    uVar14 = uVar1;
  } while (uVar1 < local_68);
  if (uVar11 == 0) {
    return;
  }
LAB_0005df66:
  operator_delete__(local_6c);
  return;
}

