/* 00056b50 | STG::USerialize::Load */

/* STG::USerialize::Load(STG::FFileBase const*, STG::GEVertexBlender&) */

void STG::USerialize::Load(FFileBase *param_1,GEVertexBlender *param_2)

{
  uint uVar1;
  uint *puVar2;
  undefined4 uVar3;
  ulong uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uchar *puVar7;
  undefined4 extraout_r1;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  bool bVar19;
  undefined8 uVar20;
  uint *local_68;
  uint local_58;
  uint local_54;
  ulong local_4c;
  ulong local_48;
  uint local_44;
  uint local_40;
  uint uStack_3c;
  int local_38;
  int iStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  
  FFileBase::Read(param_1,(uchar *)&local_44,4);
  FFileBase::Read(param_1,(uchar *)&local_4c,4);
  FFileBase::Read(param_1,(uchar *)&local_48,4);
  GEVertexBlender::Initialize(param_2,local_4c,local_48);
  if (local_44 < 3) {
    LoadLegacyTimeValue((USerialize *)&local_58,param_1,2,local_44);
    uVar4 = local_4c;
    uVar9 = local_54;
    uVar10 = local_58;
    if (local_4c == 0) {
      local_68 = (uint *)0x0;
    }
    else {
      local_68 = operator_new__(local_4c << 3);
      if (local_4c != 0) {
        uVar11 = 0;
        do {
          LoadLegacyTimeValue((USerialize *)&local_58,param_1,2,local_44);
          puVar7 = *(uchar **)(*(int *)(param_2 + 0xc) + uVar11 * 4);
          local_68[uVar11 * 2] = local_58;
          (local_68 + uVar11 * 2)[1] = local_54;
          uVar11 = uVar11 + 1;
          FFileBase::Read(param_1,puVar7,local_48 << 4);
        } while (uVar11 < local_4c);
      }
    }
    uVar11 = local_4c - 1;
    local_40 = *local_68;
    uStack_3c = local_68[1];
    local_38 = local_40 + uVar10;
    iStack_34 = uStack_3c + uVar9 + (uint)CARRY4(local_40,uVar10);
    local_30 = 0;
    uStack_2c = 0;
    GEAnimationTrack::Initialize
              (*(GEAnimationTrack **)param_2,0,uVar11,&local_40,&local_38,0xc,&local_30);
    if (uVar11 != 0) {
      iVar18 = 0;
      iVar8 = *(int *)(*(int *)param_2 + 0x10);
      uVar10 = 0;
      uVar6 = extraout_r1;
      do {
        uVar14 = uVar10 + 1;
        uVar16 = *(uint *)((int)local_68 + iVar18);
        uVar17 = ((uint *)((int)local_68 + iVar18))[1];
        uVar12 = local_68[uVar14 * 2];
        uVar5 = __floatunsisf(uVar10,uVar6);
        uVar12 = uVar12 - uVar16;
        puVar2 = (uint *)(iVar8 + iVar18 * 8);
        *puVar2 = uVar16;
        puVar2[1] = uVar17;
        uVar6 = DAT_00056f40;
        iVar15 = iVar8 + iVar18 * 8;
        uVar10 = *(uint *)(iVar15 + 0x18);
        uVar9 = *(uint *)(iVar15 + 0x1c);
        bVar19 = uVar9 <= uVar17;
        if (uVar17 == uVar9) {
          bVar19 = uVar10 <= uVar16;
        }
        *(undefined4 *)(iVar15 + 0x20) = uVar5;
        uVar3 = DAT_00056f40;
        uVar1 = DAT_00056f38;
        if (bVar19) {
          uVar10 = (uint)((ulonglong)uVar12 * (ulonglong)DAT_00056f38 >> 0x21);
          *(uint *)(iVar15 + 8) = uVar16 + uVar10;
          *(uint *)(iVar15 + 0xc) = uVar17 + CARRY4(uVar16,uVar10);
          uVar6 = __addsf3(uVar5,uVar3);
          uVar10 = (uint)((ulonglong)(uVar12 * 2) * (ulonglong)uVar1 >> 0x21);
          *(undefined4 *)(iVar15 + 0x24) = uVar6;
          *(uint *)(iVar15 + 0x10) = uVar16 + uVar10;
          *(uint *)(iVar15 + 0x14) = uVar17 + CARRY4(uVar16,uVar10);
          uVar6 = __addsf3(uVar5,DAT_00056f3c);
          *(undefined4 *)(iVar15 + 0x28) = uVar6;
        }
        else {
          uVar1 = (uint)((ulonglong)uVar12 * (ulonglong)DAT_00056f38 >> 0x21);
          *(uint *)(iVar15 + 8) = uVar16 + uVar1;
          *(uint *)(iVar15 + 0xc) = uVar17 + CARRY4(uVar16,uVar1);
          uVar6 = __addsf3(uVar5,uVar6);
          uVar1 = DAT_00056f38;
          iVar13 = uVar9 - (uVar17 + (uVar10 < uVar16));
          *(undefined4 *)(iVar15 + 0x24) = uVar6;
          uVar9 = (uint)((ulonglong)(uVar12 * 2) * (ulonglong)uVar1 >> 0x21);
          *(uint *)(iVar15 + 0x10) = uVar16 + uVar9;
          *(uint *)(iVar15 + 0x14) = uVar17 + CARRY4(uVar16,uVar9);
          uVar6 = __addsf3(uVar5,DAT_00056f3c);
          *(uint *)(iVar15 + 0x30) = uVar10 - uVar16;
          *(int *)(iVar15 + 0x34) = iVar13;
          *(undefined4 *)(iVar15 + 0x28) = uVar6;
          uVar20 = __floatundidf(uVar10 - uVar16,iVar13);
          __divdf3(0,0x3ff00000,(int)uVar20,(int)((ulonglong)uVar20 >> 0x20));
          uVar6 = __truncdfsf2();
          *(undefined4 *)(iVar15 + 0x38) = uVar6;
        }
        uVar10 = (uint)((ulonglong)(uVar12 * 3) * (ulonglong)DAT_00056f38 >> 0x21);
        uVar9 = uVar17 + CARRY4(uVar16,uVar10);
        *(uint *)(iVar15 + 0x18) = uVar16 + uVar10;
        *(uint *)(iVar15 + 0x1c) = uVar9;
        uVar6 = __addsf3(uVar5,0x3f800000);
        bVar19 = uVar9 <= uVar17;
        if (uVar17 == uVar9) {
          bVar19 = uVar16 + uVar10 <= uVar16;
        }
        *(undefined4 *)(iVar15 + 0x2c) = uVar6;
        uVar6 = 0;
        if (!bVar19) {
          *(uint *)(iVar15 + 0x30) = uVar10;
          *(undefined4 *)(iVar15 + 0x34) = 0;
          uVar20 = __floatundidf(uVar10);
          __divdf3(0,0x3ff00000,(int)uVar20,(int)((ulonglong)uVar20 >> 0x20));
          uVar20 = __truncdfsf2();
          uVar6 = (undefined4)((ulonglong)uVar20 >> 0x20);
          *(int *)(iVar15 + 0x38) = (int)uVar20;
        }
        iVar18 = iVar18 + 8;
        uVar10 = uVar14;
      } while (uVar14 < uVar11);
    }
    if (uVar4 != 0) {
      operator_delete__(local_68);
    }
  }
  else {
    Load(param_1,*(GEAnimationTrack **)param_2);
    if (local_4c != 0) {
      uVar10 = 0;
      do {
        FFileBase::Read(param_1,*(uchar **)(*(int *)(param_2 + 0xc) + uVar10 * 4),local_48 << 4);
        uVar10 = uVar10 + 1;
      } while (uVar10 < local_4c);
    }
  }
  return;
}

