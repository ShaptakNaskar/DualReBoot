/* 000431fc | STG::GEScene::UpdateSimulation */

/* STG::GEScene::UpdateSimulation(STG::UTimeValue<unsigned long long, 1ul> const&,
   STG::UTimeValue<unsigned long long, 1ul> const&, double const*) */

void __thiscall
STG::GEScene::UpdateSimulation
          (GEScene *this,UTimeValue *param_1,UTimeValue *param_2,double *param_3)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  GECamera *pGVar8;
  undefined4 *puVar9;
  uint *puVar10;
  GEScene *pGVar11;
  int iVar12;
  UTime *this_00;
  MMatrix *this_01;
  uint uVar13;
  int iVar14;
  int iVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined4 uVar20;
  undefined1 auStack_198 [80];
  undefined1 auStack_148 [80];
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 local_f0;
  undefined4 uStack_ec;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 local_e0;
  undefined4 uStack_dc;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  float local_58;
  float local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  
  iVar7 = DAT_000438d8 + 0x43220;
  if (this[0x220] == (GEScene)0x0) {
    *(undefined4 *)(this + 0x210) = *(undefined4 *)(this + 0x208);
    *(undefined4 *)(this + 0x214) = *(undefined4 *)(this + 0x20c);
    uVar3 = *(undefined4 *)(param_1 + 4);
    *(undefined4 *)(this + 0x208) = *(undefined4 *)param_1;
    *(undefined4 *)(this + 0x20c) = uVar3;
  }
  else {
    uVar3 = *(undefined4 *)(param_1 + 4);
    *(undefined4 *)(this + 0x210) = *(undefined4 *)param_1;
    *(undefined4 *)(this + 0x214) = uVar3;
    uVar3 = *(undefined4 *)param_1;
    uVar5 = *(undefined4 *)(param_1 + 4);
    this[0x220] = (GEScene)0x0;
    *(undefined4 *)(this + 0x208) = uVar3;
    *(undefined4 *)(this + 0x20c) = uVar5;
  }
  uVar3 = *(undefined4 *)(param_2 + 4);
  *(undefined4 *)(this + 0x218) = *(undefined4 *)param_2;
  *(undefined4 *)(this + 0x21c) = uVar3;
  if (param_3 != (double *)0x0) {
    uVar3 = *(undefined4 *)param_3;
    uVar5 = *(undefined4 *)((int)param_3 + 4);
  }
  else {
    this[0x230] = (GEScene)0x0;
    uVar3 = 0;
    uVar5 = 0x3fe00000;
  }
  *(undefined4 *)(this + 0x228) = uVar3;
  *(undefined4 *)(this + 0x22c) = uVar5;
  iVar2 = DAT_000438dc;
  if (param_3 != (double *)0x0) {
    this[0x230] = (GEScene)0x1;
  }
  puVar10 = *(uint **)(iVar7 + iVar2);
  if ((*puVar10 & 1) == 0) {
    iVar2 = thunk_FUN_0007004c(puVar10);
    this_00 = *(UTime **)(iVar7 + DAT_000438e0);
    if (iVar2 != 0) {
      UTime::UTime(this_00);
      thunk_FUN_000700b0(puVar10);
      __aeabi_atexit(this_00,*(undefined4 *)(iVar7 + DAT_000438e4),
                     *(undefined4 *)(iVar7 + DAT_000438e8));
    }
  }
  else {
    this_00 = *(UTime **)(iVar7 + DAT_000438e0);
  }
  UTime::GetTime_UTC();
  memcpy(this + 0x6e4,auStack_148,0x50);
  if (((*puVar10 & 1) == 0) && (iVar2 = thunk_FUN_0007004c(puVar10), iVar2 != 0)) {
    UTime::UTime(this_00);
    thunk_FUN_000700b0(puVar10);
    __aeabi_atexit(this_00,*(undefined4 *)(iVar7 + DAT_000438e4),
                   *(undefined4 *)(iVar7 + DAT_000438e8));
  }
  UTime::GetTime_Local();
  memcpy(this + 0x734,auStack_198,0x50);
  Internal_UpdateTimeOfDay(this);
  Internal_UpdateAnimationTime(this);
  Internal_RunLogic(this,0);
  if (*(int *)(this + 0x1e4) != 0) {
    iVar7 = 0;
    pGVar11 = this + 0x238;
    uVar13 = 0;
    do {
      iVar2 = *(int *)(this + 0x1c4) + iVar7;
      uVar13 = uVar13 + 1;
      local_f8 = 0;
      uStack_f4 = 0;
      pGVar8 = (GECamera *)(*(int *)(this + 0xb4) + *(int *)(iVar2 + 0x108) * 0x210);
      uVar3 = GEAnimationTrack::Evaluate(iVar2,1,pGVar11,0,&local_f8);
      local_f0 = 0;
      uStack_ec = 0;
      iVar7 = iVar7 + 0x110;
      uVar5 = GEAnimationTrack::Evaluate(iVar2 + 0x58,1,pGVar11,0,&local_f0);
      local_e8 = 0;
      uStack_e4 = 0;
      local_98 = GEAnimationTrack::Evaluate(iVar2 + 0xb0,1,pGVar11,0,&local_e8);
      local_84 = *(undefined4 *)(pGVar8 + 0x1dc);
      local_94 = *(undefined4 *)(pGVar8 + 0x1cc);
      local_90 = *(undefined4 *)(pGVar8 + 0x1d0);
      local_8c = *(undefined4 *)(pGVar8 + 0x1d4);
      local_88 = *(undefined4 *)(pGVar8 + 0x1d8);
      local_80 = *(undefined4 *)(pGVar8 + 0x1e0);
      local_a0 = uVar3;
      local_9c = uVar5;
      GECamera::SetLookAtParams
                (pGVar8,(MVector3 *)&local_a0,(MVector3 *)&local_94,(MVector3 *)&local_88);
    } while (uVar13 < *(uint *)(this + 0x1e4));
  }
  if (*(int *)(this + 0x1e8) != 0) {
    iVar7 = 0;
    pGVar11 = this + 0x238;
    uVar13 = 0;
    do {
      iVar2 = *(int *)(this + 0x1c8) + iVar7;
      uVar13 = uVar13 + 1;
      local_e0 = 0;
      uStack_dc = 0;
      pGVar8 = (GECamera *)(*(int *)(this + 0xb4) + *(int *)(iVar2 + 0x108) * 0x210);
      uVar3 = GEAnimationTrack::Evaluate(iVar2,1,pGVar11,0,&local_e0);
      local_d8 = 0;
      uStack_d4 = 0;
      iVar7 = iVar7 + 0x110;
      uVar5 = GEAnimationTrack::Evaluate(iVar2 + 0x58,1,pGVar11,0,&local_d8);
      local_d0 = 0;
      uStack_cc = 0;
      local_68 = GEAnimationTrack::Evaluate(iVar2 + 0xb0,1,pGVar11,0,&local_d0);
      local_60 = *(undefined4 *)(pGVar8 + 0x1dc);
      local_7c = *(undefined4 *)(pGVar8 + 0x1c0);
      local_78 = *(undefined4 *)(pGVar8 + 0x1c4);
      local_74 = *(undefined4 *)(pGVar8 + 0x1c8);
      local_64 = *(undefined4 *)(pGVar8 + 0x1d8);
      local_5c = *(undefined4 *)(pGVar8 + 0x1e0);
      local_70 = uVar3;
      local_6c = uVar5;
      GECamera::SetLookAtParams
                (pGVar8,(MVector3 *)&local_7c,(MVector3 *)&local_70,(MVector3 *)&local_64);
    } while (uVar13 < *(uint *)(this + 0x1e8));
  }
  Internal_UpdateShownModels(this);
  Internal_UpdateIntersectables(this);
  Internal_UpdateLocalTimeOffsets(this);
  fVar17 = DAT_000438d4;
  if (*(int *)(this + 500) != 0) {
    iVar7 = 0;
    uVar13 = 0;
    do {
      uVar13 = uVar13 + 1;
      iVar2 = *(int *)(this + 0x1d4) + iVar7;
      iVar12 = *(int *)(iVar2 + 0x58);
      iVar7 = iVar7 + 0x60;
      local_c8 = 0;
      uStack_c4 = 0;
      fVar16 = (float)GEAnimationTrack::Evaluate
                                (iVar2,1,this + 0x238,
                                 *(undefined1 *)(*(int *)(this + 0x118) + iVar12),&local_c8);
      uVar4 = *(uint *)(this + 500);
      if (1.0 < fVar16) {
        fVar16 = 1.0;
      }
      if (fVar16 < 0.0) {
        fVar16 = fVar17;
      }
      *(float *)(*(int *)(*(int *)(this + 0xb0) + iVar12 * 4) + 0x98) = fVar16;
    } while (uVar13 < uVar4);
  }
  uVar13 = *(uint *)(this + 0x1ec);
  if (uVar13 != 0) {
    iVar7 = 0;
    pGVar11 = this + 0x238;
    uVar4 = 0;
    do {
      while( true ) {
        uVar4 = uVar4 + 1;
        iVar2 = *(int *)(this + 0x1cc) + iVar7;
        iVar7 = iVar7 + 0x170;
        iVar14 = *(int *)(iVar2 + 0x160);
        iVar12 = *(int *)(iVar2 + 0x168);
        if (*(char *)(*(int *)(this + 0xd4) + iVar14) == '\0') break;
        uVar1 = *(undefined1 *)(*(int *)(this + 0x118) + iVar14);
        iVar15 = *(int *)(this + 0x1a8) + iVar14 * 8;
        iVar14 = *(int *)(*(int *)(*(int *)(*(int *)(this + 0xb0) + iVar14 * 4) + 0x84) +
                         *(int *)(iVar2 + 0x164) * 4);
        fVar17 = (float)GEAnimationTrack::Evaluate(iVar2,0,pGVar11,uVar1,iVar15);
        this_01 = (MMatrix *)(iVar14 + iVar12 * 0x40 + 0xbc);
        fVar16 = (float)GEAnimationTrack::Evaluate(iVar2 + 0x58,0,pGVar11,uVar1,iVar15);
        fVar18 = (float)GEAnimationTrack::Evaluate(iVar2 + 0xb0,0,pGVar11,uVar1,iVar15);
        fVar19 = (float)GEAnimationTrack::Evaluate(iVar2 + 0x108,0,pGVar11,uVar1,iVar15);
        MMatrix::SetScale(this_01,fVar18,fVar19,1.0);
        local_50 = 0;
        local_58 = fVar17 + 0.5 + fVar18 * -0.5;
        local_54 = fVar16 + 0.5 + fVar19 * -0.5;
        MMatrix::SetPosition(this_01,(MVector3 *)&local_58);
        uVar13 = *(uint *)(this + 0x1ec);
        if (uVar13 <= uVar4) goto LAB_0004370c;
      }
    } while (uVar4 < uVar13);
  }
LAB_0004370c:
  uVar13 = *(uint *)(this + 0x1e0);
  if (uVar13 != 0) {
    iVar7 = 0;
    pGVar11 = this + 0x238;
    uVar4 = 0;
    do {
      iVar12 = *(int *)(this + 0x1c0) + iVar7;
      uVar4 = uVar4 + 1;
      iVar7 = iVar7 + 0x110;
      iVar2 = *(int *)(iVar12 + 0x108);
      if ((*(char *)(*(int *)(this + 0xd4) + iVar2) != '\0') ||
         (*(int *)(*(int *)(this + 0x108) + iVar2 * 4) != 0)) {
        uVar1 = *(undefined1 *)(*(int *)(this + 0x118) + iVar2);
        iVar14 = *(int *)(this + 0x1a8) + iVar2 * 8;
        fVar17 = (float)GEAnimationTrack::Evaluate(iVar12,0,pGVar11,uVar1,iVar14);
        fVar16 = (float)GEAnimationTrack::Evaluate(iVar12 + 0x58,0,pGVar11,uVar1,iVar14);
        fVar18 = (float)GEAnimationTrack::Evaluate(iVar12 + 0xb0,0,pGVar11,uVar1,iVar14);
        MMatrix::SetEulerXZY((MMatrix *)(*(int *)(this + 0xbc) + iVar2 * 0x40),fVar17,fVar16,fVar18)
        ;
        uVar13 = *(uint *)(this + 0x1e0);
      }
    } while (uVar4 < uVar13);
  }
  uVar13 = *(uint *)(this + 0x1dc);
  if (uVar13 != 0) {
    iVar7 = 0;
    pGVar11 = this + 0x238;
    uVar4 = 0;
    do {
      iVar12 = *(int *)(this + 0x1bc) + iVar7;
      uVar4 = uVar4 + 1;
      iVar7 = iVar7 + 0x110;
      iVar2 = *(int *)(iVar12 + 0x108);
      if ((*(char *)(*(int *)(this + 0xd4) + iVar2) != '\0') ||
         (*(int *)(*(int *)(this + 0x108) + iVar2 * 4) != 0)) {
        uVar1 = *(undefined1 *)(*(int *)(this + 0x118) + iVar2);
        iVar14 = *(int *)(this + 0x1a8) + iVar2 * 8;
        uVar3 = GEAnimationTrack::Evaluate(iVar12,0,pGVar11,uVar1,iVar14);
        uVar5 = GEAnimationTrack::Evaluate(iVar12 + 0x58,0,pGVar11,uVar1,iVar14);
        local_44 = GEAnimationTrack::Evaluate(iVar12 + 0xb0,0,pGVar11,uVar1,iVar14);
        local_4c = uVar3;
        local_48 = uVar5;
        MMatrix::SetPosition
                  ((MMatrix *)(*(int *)(this + 0xbc) + iVar2 * 0x40),(MVector3 *)&local_4c);
        uVar13 = *(uint *)(this + 0x1dc);
      }
    } while (uVar4 < uVar13);
  }
  uVar13 = *(uint *)(this + 0x1f0);
  if (uVar13 != 0) {
    iVar7 = 0;
    pGVar11 = this + 0x238;
    uVar4 = 0;
    do {
      while( true ) {
        puVar9 = (undefined4 *)(*(int *)(this + 0x1d0) + iVar7);
        if (*(char *)(*(int *)(this + 0xd4) + puVar9[0x58]) != '\0') break;
LAB_00043980:
        uVar4 = uVar4 + 1;
        iVar7 = iVar7 + 0x168;
        if (uVar13 <= uVar4) goto LAB_00043a04;
      }
      iVar2 = *(int *)(*(int *)(this + 0xb0) + puVar9[0x58] * 4);
      if (this[0x221] != (GEScene)0x0) {
        local_c0 = 0;
        uStack_bc = 0;
        uVar3 = GEAnimationTrack::Evaluate(puVar9,2,pGVar11,0,&local_c0);
        local_b8 = 0;
        uStack_b4 = 0;
        uVar5 = GEAnimationTrack::Evaluate(puVar9 + 0x16,2,pGVar11,0,&local_b8);
        local_b0 = 0;
        uStack_ac = 0;
        uVar6 = GEAnimationTrack::Evaluate(puVar9 + 0x2c,2,pGVar11,0,&local_b0);
        local_a8 = 0;
        uStack_a4 = 0;
        uVar20 = GEAnimationTrack::Evaluate(puVar9 + 0x42,2,pGVar11,0,&local_a8);
        *(undefined4 *)(iVar2 + 0x88) = uVar3;
        *(undefined4 *)(iVar2 + 0x8c) = uVar5;
        *(undefined4 *)(iVar2 + 0x90) = uVar6;
        *(undefined4 *)(iVar2 + 0x94) = uVar20;
        uVar13 = *(uint *)(this + 0x1f0);
        goto LAB_00043980;
      }
      uVar5 = puVar9[0x2c];
      uVar4 = uVar4 + 1;
      iVar7 = iVar7 + 0x168;
      uVar3 = puVar9[0x16];
      uVar6 = puVar9[0x42];
      *(undefined4 *)(iVar2 + 0x88) = *puVar9;
      *(undefined4 *)(iVar2 + 0x8c) = uVar3;
      *(undefined4 *)(iVar2 + 0x90) = uVar5;
      *(undefined4 *)(iVar2 + 0x94) = uVar6;
      uVar13 = *(uint *)(this + 0x1f0);
    } while (uVar4 < uVar13);
  }
LAB_00043a04:
  Internal_RunLogic(this,1);
  return;
}

