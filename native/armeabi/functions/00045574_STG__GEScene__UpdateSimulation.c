/* 00045574 | STG::GEScene::UpdateSimulation */

/* STG::GEScene::UpdateSimulation(STG::UTimeValue<unsigned long long, 1ul> const&,
   STG::UTimeValue<unsigned long long, 1ul> const&, double const*) */

void __thiscall
STG::GEScene::UpdateSimulation
          (GEScene *this,UTimeValue *param_1,UTimeValue *param_2,double *param_3)

{
  undefined1 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  GECamera *pGVar9;
  undefined4 *puVar10;
  uint *puVar11;
  GEScene *pGVar12;
  int iVar13;
  UTime *this_00;
  int iVar14;
  int iVar15;
  MMatrix *this_01;
  float extraout_s0;
  float extraout_s0_00;
  float extraout_s1;
  float extraout_s1_00;
  float extraout_s2;
  float extraout_s2_00;
  uint local_184;
  undefined1 auStack_180 [80];
  undefined1 auStack_130 [80];
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
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 local_90;
  undefined4 uStack_8c;
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
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  
  iVar8 = DAT_00045ed4 + 0x45594;
  if (this[0x220] == (GEScene)0x0) {
    *(undefined4 *)(this + 0x210) = *(undefined4 *)(this + 0x208);
    *(undefined4 *)(this + 0x214) = *(undefined4 *)(this + 0x20c);
    uVar4 = *(undefined4 *)(param_1 + 4);
    *(undefined4 *)(this + 0x208) = *(undefined4 *)param_1;
    *(undefined4 *)(this + 0x20c) = uVar4;
    uVar4 = *(undefined4 *)(param_2 + 4);
    *(undefined4 *)(this + 0x218) = *(undefined4 *)param_2;
    *(undefined4 *)(this + 0x21c) = uVar4;
  }
  else {
    uVar4 = *(undefined4 *)(param_1 + 4);
    *(undefined4 *)(this + 0x210) = *(undefined4 *)param_1;
    *(undefined4 *)(this + 0x214) = uVar4;
    uVar4 = *(undefined4 *)(param_1 + 4);
    *(undefined4 *)(this + 0x208) = *(undefined4 *)param_1;
    *(undefined4 *)(this + 0x20c) = uVar4;
    this[0x220] = (GEScene)0x0;
    uVar4 = *(undefined4 *)(param_2 + 4);
    *(undefined4 *)(this + 0x218) = *(undefined4 *)param_2;
    *(undefined4 *)(this + 0x21c) = uVar4;
  }
  if (param_3 == (double *)0x0) {
    this[0x230] = (GEScene)0x0;
    *(undefined4 *)(this + 0x228) = 0;
    *(undefined4 *)(this + 0x22c) = 0x3fe00000;
    puVar11 = *(uint **)(iVar8 + DAT_00045ed8);
    uVar6 = *puVar11;
  }
  else {
    uVar4 = *(undefined4 *)param_3;
    uVar5 = *(undefined4 *)((int)param_3 + 4);
    this[0x230] = (GEScene)0x1;
    *(undefined4 *)(this + 0x228) = uVar4;
    *(undefined4 *)(this + 0x22c) = uVar5;
    puVar11 = *(uint **)(iVar8 + DAT_00045ed8);
    uVar6 = *puVar11;
  }
  if ((uVar6 & 1) == 0) {
    iVar14 = thunk_FUN_00074338(puVar11);
    this_00 = *(UTime **)(iVar8 + DAT_00045edc);
    if (iVar14 != 0) {
      UTime::UTime(this_00);
      thunk_FUN_000743a0(puVar11);
      __aeabi_atexit(this_00,*(undefined4 *)(iVar8 + DAT_00045ee0),
                     *(undefined4 *)(iVar8 + DAT_00045ee4));
    }
  }
  else {
    this_00 = *(UTime **)(iVar8 + DAT_00045edc);
  }
  UTime::GetTime_UTC();
  memcpy(this + 0x6e4,auStack_130,0x50);
  if (((*puVar11 & 1) == 0) && (iVar14 = thunk_FUN_00074338(puVar11), iVar14 != 0)) {
    UTime::UTime(this_00);
    thunk_FUN_000743a0(puVar11);
    __aeabi_atexit(this_00,*(undefined4 *)(iVar8 + DAT_00045ee0),
                   *(undefined4 *)(iVar8 + DAT_00045ee4));
  }
  UTime::GetTime_Local();
  memcpy(this + 0x734,auStack_180,0x50);
  Internal_UpdateTimeOfDay(this);
  Internal_UpdateAnimationTime(this);
  Internal_RunLogic(this,0);
  if (*(int *)(this + 0x1e4) != 0) {
    iVar8 = 0;
    pGVar12 = this + 0x238;
    local_184 = 0;
    do {
      iVar14 = *(int *)(this + 0x1c4) + iVar8;
      pGVar9 = (GECamera *)(*(int *)(iVar14 + 0x108) * 0x210 + *(int *)(this + 0xb4));
      local_e0 = 0;
      uStack_dc = 0;
      uVar4 = GEAnimationTrack::Evaluate(iVar14,1,pGVar12,0,&local_e0);
      local_d8 = 0;
      uStack_d4 = 0;
      uVar5 = GEAnimationTrack::Evaluate(iVar14 + 0x58,1,pGVar12,0,&local_d8);
      local_d0 = 0;
      uStack_cc = 0;
      local_80 = GEAnimationTrack::Evaluate(iVar14 + 0xb0,1,pGVar12,0,&local_d0);
      local_70 = *(undefined4 *)(pGVar9 + 0x1d8);
      local_68 = *(undefined4 *)(pGVar9 + 0x1e0);
      local_6c = *(undefined4 *)(pGVar9 + 0x1dc);
      local_7c = *(undefined4 *)(pGVar9 + 0x1cc);
      local_78 = *(undefined4 *)(pGVar9 + 0x1d0);
      local_74 = *(undefined4 *)(pGVar9 + 0x1d4);
      local_88 = uVar4;
      local_84 = uVar5;
      GECamera::SetLookAtParams
                (pGVar9,(MVector3 *)&local_88,(MVector3 *)&local_7c,(MVector3 *)&local_70);
      iVar8 = iVar8 + 0x110;
      local_184 = local_184 + 1;
    } while (local_184 < *(uint *)(this + 0x1e4));
  }
  if (*(int *)(this + 0x1e8) != 0) {
    iVar8 = 0;
    pGVar12 = this + 0x238;
    local_184 = 0;
    do {
      iVar14 = *(int *)(this + 0x1c8) + iVar8;
      local_c8 = 0;
      uStack_c4 = 0;
      pGVar9 = (GECamera *)(*(int *)(iVar14 + 0x108) * 0x210 + *(int *)(this + 0xb4));
      uVar4 = GEAnimationTrack::Evaluate(iVar14,1,pGVar12,0,&local_c8);
      local_c0 = 0;
      uStack_bc = 0;
      uVar5 = GEAnimationTrack::Evaluate(iVar14 + 0x58,1,pGVar12,0,&local_c0);
      local_b8 = 0;
      uStack_b4 = 0;
      local_50 = GEAnimationTrack::Evaluate(iVar14 + 0xb0,1,pGVar12,0,&local_b8);
      local_4c = *(undefined4 *)(pGVar9 + 0x1d8);
      local_44 = *(undefined4 *)(pGVar9 + 0x1e0);
      local_48 = *(undefined4 *)(pGVar9 + 0x1dc);
      local_64 = *(undefined4 *)(pGVar9 + 0x1c0);
      local_60 = *(undefined4 *)(pGVar9 + 0x1c4);
      local_5c = *(undefined4 *)(pGVar9 + 0x1c8);
      local_58 = uVar4;
      local_54 = uVar5;
      GECamera::SetLookAtParams
                (pGVar9,(MVector3 *)&local_64,(MVector3 *)&local_58,(MVector3 *)&local_4c);
      iVar8 = iVar8 + 0x110;
      local_184 = local_184 + 1;
    } while (local_184 < *(uint *)(this + 0x1e8));
  }
  Internal_UpdateShownModels(this);
  Internal_UpdateIntersectables(this);
  Internal_UpdateLocalTimeOffsets(this);
  if (*(int *)(this + 500) != 0) {
    iVar8 = 0;
    uVar6 = 0;
    do {
      iVar13 = *(int *)(*(int *)(this + 0x1d4) + iVar8 + 0x58);
      local_b0 = 0;
      uStack_ac = 0;
      uVar4 = GEAnimationTrack::Evaluate
                        (*(int *)(this + 0x1d4) + iVar8,1,this + 0x238,
                         *(undefined1 *)(*(int *)(this + 0x118) + iVar13),&local_b0);
      iVar14 = __aeabi_fcmple(uVar4,0x3f800000);
      if (iVar14 == 0) {
        uVar4 = 0x3f800000;
      }
      iVar13 = *(int *)(*(int *)(this + 0xb0) + iVar13 * 4);
      iVar14 = __aeabi_fcmpge(uVar4,0);
      uVar7 = *(uint *)(this + 500);
      uVar6 = uVar6 + 1;
      if (iVar14 == 0) {
        uVar4 = 0;
      }
      iVar8 = iVar8 + 0x60;
      *(undefined4 *)(iVar13 + 0x98) = uVar4;
    } while (uVar6 < uVar7);
  }
  uVar6 = *(uint *)(this + 0x1ec);
  if (uVar6 != 0) {
    iVar8 = 0;
    uVar7 = 0;
    pGVar12 = this + 0x238;
    do {
      while( true ) {
        uVar7 = uVar7 + 1;
        iVar13 = *(int *)(this + 0x1cc) + iVar8;
        iVar14 = *(int *)(iVar13 + 0x160);
        iVar8 = iVar8 + 0x170;
        if (*(char *)(*(int *)(this + 0xd4) + iVar14) == '\0') break;
        uVar1 = *(undefined1 *)(*(int *)(this + 0x118) + iVar14);
        iVar15 = *(int *)(this + 0x1a8) + iVar14 * 8;
        this_01 = (MMatrix *)
                  (*(int *)(*(int *)(*(int *)(*(int *)(this + 0xb0) + iVar14 * 4) + 0x84) +
                           *(int *)(iVar13 + 0x164) * 4) + *(int *)(iVar13 + 0x168) * 0x40 + 0xbc);
        uVar4 = GEAnimationTrack::Evaluate(iVar13,0,pGVar12,uVar1,iVar15);
        uVar5 = GEAnimationTrack::Evaluate(iVar13 + 0x58,0,pGVar12,uVar1,iVar15);
        uVar2 = GEAnimationTrack::Evaluate(iVar13 + 0xb0,0,pGVar12,uVar1,iVar15);
        uVar3 = GEAnimationTrack::Evaluate(iVar13 + 0x108,0,pGVar12,uVar1,iVar15);
        MMatrix::SetScale(this_01,extraout_s0,extraout_s1,extraout_s2);
        uVar4 = __addsf3(uVar4,0x3f000000);
        uVar2 = __mulsf3(uVar2,0xbf000000);
        local_40 = __addsf3(uVar4,uVar2);
        uVar4 = __addsf3(uVar5,0x3f000000);
        uVar5 = __mulsf3(uVar3,0xbf000000);
        local_3c = __addsf3(uVar4,uVar5);
        local_38 = 0;
        MMatrix::SetPosition(this_01,(MVector3 *)&local_40);
        uVar6 = *(uint *)(this + 0x1ec);
        if (uVar6 <= uVar7) goto LAB_00045ad4;
      }
    } while (uVar7 < uVar6);
  }
LAB_00045ad4:
  uVar6 = *(uint *)(this + 0x1e0);
  if (uVar6 != 0) {
    iVar8 = 0;
    uVar7 = 0;
    pGVar12 = this + 0x238;
    do {
      iVar13 = *(int *)(this + 0x1c0) + iVar8;
      iVar14 = *(int *)(iVar13 + 0x108);
      uVar7 = uVar7 + 1;
      iVar8 = iVar8 + 0x110;
      if ((*(char *)(*(int *)(this + 0xd4) + iVar14) != '\0') ||
         (*(int *)(*(int *)(this + 0x108) + iVar14 * 4) != 0)) {
        uVar1 = *(undefined1 *)(*(int *)(this + 0x118) + iVar14);
        iVar14 = *(int *)(this + 0x1a8) + iVar14 * 8;
        GEAnimationTrack::Evaluate(iVar13,0,pGVar12,uVar1,iVar14);
        GEAnimationTrack::Evaluate(iVar13 + 0x58,0,pGVar12,uVar1,iVar14);
        GEAnimationTrack::Evaluate(iVar13 + 0xb0,0,pGVar12,uVar1,iVar14);
        MMatrix::SetEulerXZY(extraout_s0_00,extraout_s1_00,extraout_s2_00);
        uVar6 = *(uint *)(this + 0x1e0);
      }
    } while (uVar7 < uVar6);
  }
  uVar6 = *(uint *)(this + 0x1dc);
  if (uVar6 != 0) {
    iVar8 = 0;
    uVar7 = 0;
    pGVar12 = this + 0x238;
    do {
      iVar13 = *(int *)(this + 0x1bc) + iVar8;
      iVar14 = *(int *)(iVar13 + 0x108);
      uVar7 = uVar7 + 1;
      iVar8 = iVar8 + 0x110;
      if ((*(char *)(*(int *)(this + 0xd4) + iVar14) != '\0') ||
         (*(int *)(*(int *)(this + 0x108) + iVar14 * 4) != 0)) {
        uVar1 = *(undefined1 *)(*(int *)(this + 0x118) + iVar14);
        iVar15 = *(int *)(this + 0x1a8) + iVar14 * 8;
        uVar4 = GEAnimationTrack::Evaluate(iVar13,0,pGVar12,uVar1,iVar15);
        uVar5 = GEAnimationTrack::Evaluate(iVar13 + 0x58,0,pGVar12,uVar1,iVar15);
        local_2c = GEAnimationTrack::Evaluate(iVar13 + 0xb0,0,pGVar12,uVar1,iVar15);
        local_34 = uVar4;
        local_30 = uVar5;
        MMatrix::SetPosition
                  ((MMatrix *)(*(int *)(this + 0xbc) + iVar14 * 0x40),(MVector3 *)&local_34);
        uVar6 = *(uint *)(this + 0x1dc);
      }
    } while (uVar7 < uVar6);
  }
  uVar6 = *(uint *)(this + 0x1f0);
  if (uVar6 != 0) {
    iVar8 = 0;
    pGVar12 = this + 0x238;
    uVar7 = 0;
    do {
      while( true ) {
        puVar10 = (undefined4 *)(*(int *)(this + 0x1d0) + iVar8);
        if (*(char *)(*(int *)(this + 0xd4) + puVar10[0x58]) != '\0') break;
LAB_00045d5c:
        uVar7 = uVar7 + 1;
        iVar8 = iVar8 + 0x168;
        if (uVar6 <= uVar7) goto LAB_00045de0;
      }
      iVar14 = *(int *)(*(int *)(this + 0xb0) + puVar10[0x58] * 4);
      if (this[0x221] != (GEScene)0x0) {
        local_a8 = 0;
        uStack_a4 = 0;
        uVar4 = GEAnimationTrack::Evaluate(puVar10,2,pGVar12,0,&local_a8);
        local_a0 = 0;
        uStack_9c = 0;
        uVar5 = GEAnimationTrack::Evaluate(puVar10 + 0x16,2,pGVar12,0,&local_a0);
        local_98 = 0;
        uStack_94 = 0;
        uVar2 = GEAnimationTrack::Evaluate(puVar10 + 0x2c,2,pGVar12,0,&local_98);
        local_90 = 0;
        uStack_8c = 0;
        uVar3 = GEAnimationTrack::Evaluate(puVar10 + 0x42,2,pGVar12,0,&local_90);
        *(undefined4 *)(iVar14 + 0x88) = uVar4;
        *(undefined4 *)(iVar14 + 0x8c) = uVar5;
        *(undefined4 *)(iVar14 + 0x90) = uVar2;
        *(undefined4 *)(iVar14 + 0x94) = uVar3;
        uVar6 = *(uint *)(this + 0x1f0);
        goto LAB_00045d5c;
      }
      uVar5 = puVar10[0x2c];
      uVar4 = puVar10[0x16];
      uVar2 = puVar10[0x42];
      *(undefined4 *)(iVar14 + 0x88) = *puVar10;
      *(undefined4 *)(iVar14 + 0x8c) = uVar4;
      *(undefined4 *)(iVar14 + 0x90) = uVar5;
      *(undefined4 *)(iVar14 + 0x94) = uVar2;
      uVar6 = *(uint *)(this + 0x1f0);
      uVar7 = uVar7 + 1;
      iVar8 = iVar8 + 0x168;
    } while (uVar7 < uVar6);
  }
LAB_00045de0:
  Internal_RunLogic(this,1);
  return;
}

