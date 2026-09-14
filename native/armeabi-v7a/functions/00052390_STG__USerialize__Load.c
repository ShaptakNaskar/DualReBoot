/* 00052390 | STG::USerialize::Load */

/* STG::USerialize::Load(STG::FFileBase const*, STG::GEVertexBlender&) */

void STG::USerialize::Load(FFileBase *param_1,GEVertexBlender *param_2)

{
  uint *puVar1;
  float fVar2;
  float fVar3;
  ulong uVar4;
  uint *puVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  bool bVar16;
  uint in_fpscr;
  double dVar17;
  float fVar18;
  uint local_70;
  uint local_6c;
  ulong local_64;
  ulong local_60;
  uint local_5c;
  uint local_58;
  uint uStack_54;
  int local_50;
  int iStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  
  FFileBase::Read(param_1,(uchar *)&local_5c,4);
  FFileBase::Read(param_1,(uchar *)&local_64,4);
  FFileBase::Read(param_1,(uchar *)&local_60,4);
  GEVertexBlender::Initialize(param_2,local_64,local_60);
  if (local_5c < 3) {
    LoadLegacyTimeValue((USerialize *)&local_70,param_1,2,local_5c);
    uVar4 = local_64;
    uVar7 = local_6c;
    uVar10 = local_70;
    if (local_64 == 0) {
      puVar5 = (uint *)0x0;
    }
    else {
      puVar5 = operator_new__(local_64 << 3);
      if (local_64 != 0) {
        uVar11 = 0;
        do {
          LoadLegacyTimeValue((USerialize *)&local_70,param_1,2,local_5c);
          iVar8 = *(int *)(param_2 + 0xc);
          puVar5[uVar11 * 2] = local_70;
          (puVar5 + uVar11 * 2)[1] = local_6c;
          iVar6 = uVar11 * 4;
          uVar11 = uVar11 + 1;
          FFileBase::Read(param_1,*(uchar **)(iVar8 + iVar6),local_60 << 4);
        } while (uVar11 < local_64);
      }
    }
    local_58 = *puVar5;
    uStack_54 = puVar5[1];
    uVar11 = local_64 - 1;
    local_50 = uVar10 + local_58;
    iStack_4c = uVar7 + uStack_54 + (uint)CARRY4(uVar10,local_58);
    local_48 = 0;
    uStack_44 = 0;
    GEAnimationTrack::Initialize
              (DAT_00052700,*(undefined4 *)param_2,uVar11,&local_58,&local_50,0xc,&local_48);
    fVar3 = DAT_00052708;
    fVar2 = DAT_00052704;
    if (uVar11 != 0) {
      iVar8 = 0;
      iVar6 = *(int *)(*(int *)param_2 + 0x10);
      uVar10 = 0;
      do {
        uVar15 = uVar10 + 1;
        iVar12 = iVar6 + iVar8 * 8;
        uVar13 = *(uint *)((int)puVar5 + iVar8);
        uVar14 = ((uint *)((int)puVar5 + iVar8))[1];
        fVar18 = (float)VectorUnsignedToFloat(uVar10,(byte)(in_fpscr >> 0x16) & 3);
        uVar10 = puVar5[uVar15 * 2] - uVar13;
        puVar1 = (uint *)(iVar6 + iVar8 * 8);
        *puVar1 = uVar13;
        puVar1[1] = uVar14;
        uVar7 = *(uint *)(iVar12 + 0x18);
        uVar9 = *(uint *)(iVar12 + 0x1c);
        *(float *)(iVar12 + 0x20) = fVar18;
        bVar16 = uVar9 <= uVar14;
        if (uVar14 == uVar9) {
          bVar16 = uVar7 <= uVar13;
        }
        if (bVar16) {
          *(uint *)(iVar12 + 8) = uVar13 + uVar10 / 3;
          *(uint *)(iVar12 + 0xc) = uVar14 + CARRY4(uVar13,uVar10 / 3);
          uVar7 = (uVar10 * 2) / 3;
          *(float *)(iVar12 + 0x24) = fVar18 + fVar2;
          *(uint *)(iVar12 + 0x10) = uVar13 + uVar7;
          *(uint *)(iVar12 + 0x14) = uVar14 + CARRY4(uVar13,uVar7);
          *(float *)(iVar12 + 0x28) = fVar18 + fVar3;
        }
        else {
          *(uint *)(iVar12 + 0x30) = uVar7 - uVar13;
          *(uint *)(iVar12 + 0x34) = uVar9 - (uVar14 + (uVar7 < uVar13));
          *(uint *)(iVar12 + 8) = uVar13 + uVar10 / 3;
          *(uint *)(iVar12 + 0xc) = uVar14 + CARRY4(uVar13,uVar10 / 3);
          uVar7 = (uVar10 * 2) / 3;
          *(float *)(iVar12 + 0x24) = fVar18 + fVar2;
          *(uint *)(iVar12 + 0x10) = uVar13 + uVar7;
          *(uint *)(iVar12 + 0x14) = uVar14 + CARRY4(uVar13,uVar7);
          *(float *)(iVar12 + 0x28) = fVar18 + fVar3;
          dVar17 = (double)__floatundidf();
          *(float *)(iVar12 + 0x38) = (float)(1.0 / dVar17);
        }
        iVar8 = iVar8 + 8;
        uVar10 = (uVar10 * 3) / 3;
        *(float *)(iVar12 + 0x2c) = fVar18 + 1.0;
        uVar7 = uVar14 + CARRY4(uVar13,uVar10);
        *(uint *)(iVar12 + 0x18) = uVar13 + uVar10;
        *(uint *)(iVar12 + 0x1c) = uVar7;
        bVar16 = uVar7 <= uVar14;
        if (uVar14 == uVar7) {
          bVar16 = uVar13 + uVar10 <= uVar13;
        }
        if (!bVar16) {
          *(uint *)(iVar12 + 0x30) = uVar10;
          *(undefined4 *)(iVar12 + 0x34) = 0;
          dVar17 = (double)__floatundidf();
          *(float *)(iVar12 + 0x38) = (float)(1.0 / dVar17);
        }
        uVar10 = uVar15;
      } while (uVar15 < uVar11);
    }
    if (uVar4 != 0) {
      operator_delete__(puVar5);
    }
  }
  else {
    Load(param_1,*(GEAnimationTrack **)param_2);
    if (local_64 != 0) {
      uVar10 = 0;
      do {
        iVar6 = uVar10 * 4;
        uVar10 = uVar10 + 1;
        FFileBase::Read(param_1,*(uchar **)(*(int *)(param_2 + 0xc) + iVar6),local_60 << 4);
      } while (uVar10 < local_64);
    }
  }
  return;
}

