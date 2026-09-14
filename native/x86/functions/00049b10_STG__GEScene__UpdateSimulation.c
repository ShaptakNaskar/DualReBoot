/* 00049b10 | STG::GEScene::UpdateSimulation */

/* STG::GEScene::UpdateSimulation(STG::UTimeValue<unsigned long long, 1ul> const&,
   STG::UTimeValue<unsigned long long, 1ul> const&, double const*) */

void STG::GEScene::UpdateSimulation(UTimeValue *param_1,UTimeValue *param_2,double *param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  GEScene *this;
  undefined4 *puVar4;
  undefined8 *puVar5;
  undefined4 uVar6;
  UTime *pUVar7;
  undefined4 *extraout_ECX;
  int iVar8;
  uint uVar9;
  int iVar10;
  MMatrix *this_00;
  int unaff_EBX;
  undefined4 *puVar11;
  GEAnimationTrack *pGVar12;
  GEScene *pGVar13;
  GECamera *pGVar14;
  byte bVar15;
  longdouble lVar16;
  longdouble lVar17;
  longdouble lVar18;
  longdouble lVar19;
  float fVar20;
  undefined4 uVar21;
  uint local_184;
  undefined4 local_180 [20];
  undefined4 local_130 [22];
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  float local_80;
  float local_7c;
  float local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  float local_50;
  float local_4c;
  float local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  float local_38;
  float local_34;
  undefined4 local_30;
  float local_2c;
  float local_28;
  float local_24;
  undefined4 local_18;
  
  bVar15 = 0;
  local_18 = 0x49b25;
  FUN_0002e044();
  this = (GEScene *)*extraout_ECX;
  puVar11 = (undefined4 *)extraout_ECX[2];
  puVar4 = (undefined4 *)extraout_ECX[1];
  puVar5 = (undefined8 *)extraout_ECX[3];
  if (this[0x21c] == (GEScene)0x0) {
    *(undefined4 *)(this + 0x20c) = *(undefined4 *)(this + 0x204);
    *(undefined4 *)(this + 0x210) = *(undefined4 *)(this + 0x208);
    uVar21 = *puVar4;
    *(undefined4 *)(this + 0x208) = puVar4[1];
    *(undefined4 *)(this + 0x204) = uVar21;
  }
  else {
    uVar21 = *puVar4;
    *(undefined4 *)(this + 0x210) = puVar4[1];
    *(undefined4 *)(this + 0x20c) = uVar21;
    uVar21 = *puVar4;
    *(undefined4 *)(this + 0x208) = puVar4[1];
    *(undefined4 *)(this + 0x204) = uVar21;
    this[0x21c] = (GEScene)0x0;
  }
  uVar21 = *puVar11;
  *(undefined4 *)(this + 0x218) = puVar11[1];
  *(undefined4 *)(this + 0x214) = uVar21;
  if (puVar5 == (undefined8 *)0x0) {
    uVar2 = *(undefined8 *)(unaff_EBX + 0x3deab);
    this[0x228] = (GEScene)0x0;
    *(undefined8 *)(this + 0x220) = uVar2;
  }
  else {
    uVar2 = *puVar5;
    this[0x228] = (GEScene)0x1;
    *(undefined8 *)(this + 0x220) = uVar2;
  }
  if ((**(char **)(unaff_EBX + 0x52387) == '\0') &&
     (iVar8 = FUN_00080eb0(*(char **)(unaff_EBX + 0x52387)), iVar8 != 0)) {
    pUVar7 = *(UTime **)(unaff_EBX + 0x5238b);
    UTime::UTime(pUVar7);
    FUN_00080f40(*(undefined4 *)(unaff_EBX + 0x52387));
    __cxa_atexit(*(undefined4 *)(unaff_EBX + 0x5238f),pUVar7,*(undefined4 *)(unaff_EBX + 0x52343));
  }
  uVar21 = *(undefined4 *)(unaff_EBX + 0x5238b);
  UTime::GetTime_UTC();
  puVar11 = local_130;
  pGVar13 = this + 0x6d0;
  for (iVar8 = 0x14; iVar8 != 0; iVar8 = iVar8 + -1) {
    *(undefined4 *)pGVar13 = *puVar11;
    puVar11 = puVar11 + (uint)bVar15 * -2 + 1;
    pGVar13 = pGVar13 + (uint)bVar15 * -8 + 4;
  }
  if ((**(char **)(unaff_EBX + 0x52387) == '\0') &&
     (iVar8 = FUN_00080eb0(*(char **)(unaff_EBX + 0x52387),uVar21), iVar8 != 0)) {
    pUVar7 = *(UTime **)(unaff_EBX + 0x5238b);
    UTime::UTime(pUVar7);
    FUN_00080f40(*(undefined4 *)(unaff_EBX + 0x52387));
    __cxa_atexit(*(undefined4 *)(unaff_EBX + 0x5238f),pUVar7,*(undefined4 *)(unaff_EBX + 0x52343));
  }
  UTime::GetTime_Local();
  puVar11 = local_180;
  pGVar13 = this + 0x720;
  for (iVar8 = 0x14; iVar8 != 0; iVar8 = iVar8 + -1) {
    *(undefined4 *)pGVar13 = *puVar11;
    puVar11 = puVar11 + (uint)bVar15 * -2 + 1;
    pGVar13 = pGVar13 + (uint)bVar15 * -8 + 4;
  }
  Internal_UpdateTimeOfDay(this);
  Internal_UpdateAnimationTime(this);
  Internal_RunLogic(this,0);
  if (*(int *)(this + 0x1e4) != 0) {
    pGVar13 = this + 0x22c;
    uVar9 = 0;
    do {
      pGVar12 = (GEAnimationTrack *)(uVar9 * 0x100 + *(int *)(this + 0x1c4));
      local_d8 = 0;
      local_d4 = 0;
      pGVar14 = (GECamera *)(*(int *)(pGVar12 + 0xfc) * 0x210 + *(int *)(this + 0xb4));
      lVar16 = (longdouble)GEAnimationTrack::Evaluate(pGVar12,1,pGVar13,0,&local_d8);
      local_d0 = 0;
      local_cc = 0;
      lVar17 = (longdouble)GEAnimationTrack::Evaluate(pGVar12 + 0x54,1,pGVar13,0,&local_d0);
      local_c8 = 0;
      local_c4 = 0;
      lVar18 = (longdouble)GEAnimationTrack::Evaluate(pGVar12 + 0xa8,1,pGVar13,0,&local_c8);
      local_74 = *(undefined4 *)(pGVar14 + 0x1cc);
      local_70 = *(undefined4 *)(pGVar14 + 0x1d0);
      local_6c = *(undefined4 *)(pGVar14 + 0x1d4);
      local_68 = *(undefined4 *)(pGVar14 + 0x1d8);
      local_64 = *(undefined4 *)(pGVar14 + 0x1dc);
      local_60 = *(undefined4 *)(pGVar14 + 0x1e0);
      local_78 = (float)lVar18;
      local_80 = (float)lVar16;
      local_7c = (float)lVar17;
      GECamera::SetLookAtParams
                (pGVar14,(MVector3 *)&local_80,(MVector3 *)&local_74,(MVector3 *)&local_68);
      uVar9 = uVar9 + 1;
    } while (uVar9 < *(uint *)(this + 0x1e4));
  }
  if (*(int *)(this + 0x1e8) != 0) {
    pGVar13 = this + 0x22c;
    uVar9 = 0;
    do {
      pGVar12 = (GEAnimationTrack *)(uVar9 * 0x100 + *(int *)(this + 0x1c8));
      local_c0 = 0;
      local_bc = 0;
      pGVar14 = (GECamera *)(*(int *)(pGVar12 + 0xfc) * 0x210 + *(int *)(this + 0xb4));
      lVar16 = (longdouble)GEAnimationTrack::Evaluate(pGVar12,1,pGVar13,0,&local_c0);
      local_b8 = 0;
      local_b4 = 0;
      lVar17 = (longdouble)GEAnimationTrack::Evaluate(pGVar12 + 0x54,1,pGVar13,0,&local_b8);
      local_b0 = 0;
      local_ac = 0;
      lVar18 = (longdouble)GEAnimationTrack::Evaluate(pGVar12 + 0xa8,1,pGVar13,0,&local_b0);
      local_5c = *(undefined4 *)(pGVar14 + 0x1c0);
      local_58 = *(undefined4 *)(pGVar14 + 0x1c4);
      local_54 = *(undefined4 *)(pGVar14 + 0x1c8);
      local_44 = *(undefined4 *)(pGVar14 + 0x1d8);
      local_40 = *(undefined4 *)(pGVar14 + 0x1dc);
      local_3c = *(undefined4 *)(pGVar14 + 0x1e0);
      local_48 = (float)lVar18;
      local_50 = (float)lVar16;
      local_4c = (float)lVar17;
      GECamera::SetLookAtParams
                (pGVar14,(MVector3 *)&local_5c,(MVector3 *)&local_50,(MVector3 *)&local_44);
      uVar9 = uVar9 + 1;
    } while (uVar9 < *(uint *)(this + 0x1e8));
  }
  Internal_UpdateShownModels(this);
  Internal_UpdateIntersectables(this);
  Internal_UpdateLocalTimeOffsets(this);
  if (*(int *)(this + 500) != 0) {
    iVar8 = 0;
    local_184 = 0;
    do {
      pGVar12 = (GEAnimationTrack *)(*(int *)(this + 0x1d4) + iVar8);
      iVar8 = iVar8 + 0x58;
      iVar10 = *(int *)(pGVar12 + 0x54);
      local_a8 = 0;
      local_a4 = 0;
      lVar16 = (longdouble)
               GEAnimationTrack::Evaluate
                         (pGVar12,1,this + 0x22c,*(undefined1 *)(*(int *)(this + 0x118) + iVar10),
                          &local_a8);
      fVar20 = (float)lVar16;
      if (*(float *)(unaff_EBX + 0x3db83) <= (float)lVar16) {
        fVar20 = *(float *)(unaff_EBX + 0x3db83);
      }
      local_184 = local_184 + 1;
      if (fVar20 <= 0.0) {
        fVar20 = 0.0;
      }
      *(float *)(*(int *)(*(int *)(this + 0xb0) + iVar10 * 4) + 0x98) = fVar20;
    } while (local_184 < *(uint *)(this + 500));
  }
  local_184 = *(uint *)(this + 0x1ec);
  if (local_184 != 0) {
    uVar9 = 0;
    do {
      while( true ) {
        pGVar12 = (GEAnimationTrack *)(uVar9 * 0x15c + *(int *)(this + 0x1cc));
        iVar8 = *(int *)(pGVar12 + 0x150);
        if (*(char *)(*(int *)(this + 0xd4) + iVar8) == '\0') break;
        uVar9 = uVar9 + 1;
        iVar10 = iVar8 * 8 + *(int *)(this + 0x1a8);
        this_00 = (MMatrix *)
                  (*(int *)(pGVar12 + 0x158) * 0x40 +
                   *(int *)(*(int *)(*(int *)(*(int *)(this + 0xb0) + iVar8 * 4) + 0x84) +
                           *(int *)(pGVar12 + 0x154) * 4) + 0xbc);
        uVar3 = *(undefined1 *)(*(int *)(this + 0x118) + iVar8);
        pGVar13 = this + 0x22c;
        lVar16 = (longdouble)GEAnimationTrack::Evaluate(pGVar12,0,pGVar13,uVar3,iVar10);
        lVar17 = (longdouble)GEAnimationTrack::Evaluate(pGVar12 + 0x54,0,pGVar13,uVar3,iVar10);
        lVar18 = (longdouble)GEAnimationTrack::Evaluate(pGVar12 + 0xa8,0,pGVar13,uVar3,iVar10);
        lVar19 = (longdouble)GEAnimationTrack::Evaluate(pGVar12 + 0xfc,0,pGVar13,uVar3,iVar10);
        MMatrix::SetScale(this_00,(float)lVar18,(float)lVar19,1.0);
        local_30 = 0;
        local_38 = (float)lVar16 + *(float *)(unaff_EBX + 0x3dbab) +
                   (float)lVar18 * *(float *)(unaff_EBX + 0x3dba3);
        local_34 = (float)lVar17 + *(float *)(unaff_EBX + 0x3dbab) +
                   *(float *)(unaff_EBX + 0x3dba3) * (float)lVar19;
        MMatrix::SetPosition(this_00,(MVector3 *)&local_38);
        local_184 = *(uint *)(this + 0x1ec);
        if (local_184 <= uVar9) goto LAB_0004a36d;
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 < local_184);
  }
LAB_0004a36d:
  local_184 = *(uint *)(this + 0x1e0);
  if (local_184 != 0) {
    pGVar13 = this + 0x22c;
    uVar9 = 0;
    do {
      pGVar12 = (GEAnimationTrack *)(uVar9 * 0x100 + *(int *)(this + 0x1c0));
      iVar8 = *(int *)(pGVar12 + 0xfc);
      if ((*(char *)(*(int *)(this + 0xd4) + iVar8) != '\0') ||
         (*(int *)(*(int *)(this + 0x108) + iVar8 * 4) != 0)) {
        iVar10 = iVar8 * 8 + *(int *)(this + 0x1a8);
        uVar3 = *(undefined1 *)(*(int *)(this + 0x118) + iVar8);
        lVar16 = (longdouble)GEAnimationTrack::Evaluate(pGVar12,0,pGVar13,uVar3,iVar10);
        lVar17 = (longdouble)GEAnimationTrack::Evaluate(pGVar12 + 0x54,0,pGVar13,uVar3,iVar10);
        lVar18 = (longdouble)GEAnimationTrack::Evaluate(pGVar12 + 0xa8,0,pGVar13,uVar3,iVar10);
        MMatrix::SetEulerXZY
                  ((MMatrix *)(iVar8 * 0x40 + *(int *)(this + 0xbc)),(float)lVar16,(float)lVar17,
                   (float)lVar18);
        local_184 = *(uint *)(this + 0x1e0);
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 < local_184);
  }
  local_184 = *(uint *)(this + 0x1dc);
  if (local_184 != 0) {
    pGVar13 = this + 0x22c;
    uVar9 = 0;
    do {
      pGVar12 = (GEAnimationTrack *)(uVar9 * 0x100 + *(int *)(this + 0x1bc));
      iVar8 = *(int *)(pGVar12 + 0xfc);
      if ((*(char *)(*(int *)(this + 0xd4) + iVar8) != '\0') ||
         (*(int *)(*(int *)(this + 0x108) + iVar8 * 4) != 0)) {
        iVar10 = iVar8 * 8 + *(int *)(this + 0x1a8);
        uVar3 = *(undefined1 *)(*(int *)(this + 0x118) + iVar8);
        lVar16 = (longdouble)GEAnimationTrack::Evaluate(pGVar12,0,pGVar13,uVar3,iVar10);
        lVar17 = (longdouble)GEAnimationTrack::Evaluate(pGVar12 + 0x54,0,pGVar13,uVar3,iVar10);
        lVar18 = (longdouble)GEAnimationTrack::Evaluate(pGVar12 + 0xa8,0,pGVar13,uVar3,iVar10);
        local_24 = (float)lVar18;
        local_2c = (float)lVar16;
        local_28 = (float)lVar17;
        MMatrix::SetPosition
                  ((MMatrix *)(iVar8 * 0x40 + *(int *)(this + 0xbc)),(MVector3 *)&local_2c);
        local_184 = *(uint *)(this + 0x1dc);
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 < local_184);
  }
  local_184 = *(uint *)(this + 0x1f0);
  if (local_184 != 0) {
    pGVar13 = this + 0x22c;
    uVar9 = 0;
    do {
      while( true ) {
        pGVar12 = (GEAnimationTrack *)(uVar9 * 0x154 + *(int *)(this + 0x1d0));
        if (*(char *)(*(int *)(this + 0xd4) + *(int *)(pGVar12 + 0x150)) != '\0') break;
LAB_0004a6d5:
        uVar9 = uVar9 + 1;
        if (local_184 <= uVar9) goto LAB_0004a890;
      }
      iVar8 = *(int *)(*(int *)(this + 0xb0) + *(int *)(pGVar12 + 0x150) * 4);
      if (this[0x21d] == (GEScene)0x0) {
        uVar6 = *(undefined4 *)(pGVar12 + 0x54);
        uVar21 = *(undefined4 *)(pGVar12 + 0xa8);
        uVar1 = *(undefined4 *)(pGVar12 + 0xfc);
        *(undefined4 *)(iVar8 + 0x88) = *(undefined4 *)pGVar12;
        *(undefined4 *)(iVar8 + 0x8c) = uVar6;
        *(undefined4 *)(iVar8 + 0x90) = uVar21;
        *(undefined4 *)(iVar8 + 0x94) = uVar1;
        local_184 = *(uint *)(this + 0x1f0);
        goto LAB_0004a6d5;
      }
      local_a0 = 0;
      local_9c = 0;
      uVar9 = uVar9 + 1;
      lVar16 = (longdouble)GEAnimationTrack::Evaluate(pGVar12,2,pGVar13,0,&local_a0);
      local_98 = 0;
      local_94 = 0;
      lVar17 = (longdouble)GEAnimationTrack::Evaluate(pGVar12 + 0x54,2,pGVar13,0,&local_98);
      local_90 = 0;
      local_8c = 0;
      lVar18 = (longdouble)GEAnimationTrack::Evaluate(pGVar12 + 0xa8,2,pGVar13,0,&local_90);
      local_88 = 0;
      local_84 = 0;
      lVar19 = (longdouble)GEAnimationTrack::Evaluate(pGVar12 + 0xfc,2,pGVar13,0,&local_88);
      *(float *)(iVar8 + 0x88) = (float)lVar16;
      *(float *)(iVar8 + 0x8c) = (float)lVar17;
      *(float *)(iVar8 + 0x90) = (float)lVar18;
      *(float *)(iVar8 + 0x94) = (float)lVar19;
      local_184 = *(uint *)(this + 0x1f0);
    } while (uVar9 < local_184);
  }
LAB_0004a890:
  Internal_RunLogic(this,1);
  return;
}

