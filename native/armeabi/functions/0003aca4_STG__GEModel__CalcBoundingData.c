/* 0003aca4 | STG::GEModel::CalcBoundingData */

/* STG::GEModel::CalcBoundingData(STG::MMatrix const&, STG::UArrayFixed<STG::MVector3, unsigned
   long> const&) */

void __thiscall STG::GEModel::CalcBoundingData(GEModel *this,MMatrix *param_1,UArrayFixed *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 extraout_r0;
  int iVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 *puVar22;
  uint uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  float __x;
  undefined4 local_f4;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  int local_98;
  uint local_94;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  
  *(undefined4 *)(this + 0x60) = 0xff7fffff;
  *(undefined4 *)(this + 100) = 0xff7fffff;
  *(undefined4 *)(this + 0x68) = 0xff7fffff;
  *(undefined4 *)(this + 0x54) = 0x7f7fffff;
  *(undefined4 *)(this + 0x58) = 0x7f7fffff;
  *(undefined4 *)(this + 0x5c) = 0x7f7fffff;
  *(undefined4 *)(this + 0x6c) = 0;
  *(undefined4 *)(this + 0x70) = 0;
  *(undefined4 *)(this + 0x74) = 0;
  uVar1 = *(uint *)(param_2 + 4);
  *(undefined4 *)(this + 0x78) = 0;
  if (uVar1 == 0) {
    uVar10 = 0;
    local_88 = 0x7f7fffff;
    local_8c = 0xff7fffff;
    local_ec = 0;
    local_f0 = 0;
    local_f4 = 0;
    local_80 = 0x7f7fffff;
    local_7c = 0x7f7fffff;
    local_84 = 0xff7fffff;
    local_78 = 0xff7fffff;
  }
  else {
    iVar9 = *(int *)param_2;
    uVar10 = *(undefined4 *)param_1;
    uVar11 = *(undefined4 *)(param_1 + 0x10);
    uVar12 = *(undefined4 *)(param_1 + 0x20);
    uVar13 = *(undefined4 *)(param_1 + 0x30);
    uVar14 = *(undefined4 *)(param_1 + 4);
    uVar15 = *(undefined4 *)(param_1 + 0x14);
    uVar16 = *(undefined4 *)(param_1 + 0x24);
    uVar17 = *(undefined4 *)(param_1 + 0x34);
    uVar18 = *(undefined4 *)(param_1 + 8);
    uVar19 = *(undefined4 *)(param_1 + 0x18);
    uVar20 = *(undefined4 *)(param_1 + 0x28);
    local_b0 = 0;
    uVar21 = *(undefined4 *)(param_1 + 0x38);
    local_98 = 0;
    local_94 = 0;
    local_88 = 0x7f7fffff;
    local_a8 = 0;
    local_ac = 0;
    local_9c = 0;
    local_a0 = 0;
    local_a4 = 0;
    local_e8 = 0;
    local_8c = 0xff7fffff;
    local_80 = 0x7f7fffff;
    local_7c = 0x7f7fffff;
    local_84 = 0xff7fffff;
    local_78 = 0xff7fffff;
    do {
      uVar26 = *(undefined4 *)(iVar9 + local_98);
      uVar25 = *(undefined4 *)(iVar9 + local_98 + 4);
      uVar24 = *(undefined4 *)(iVar9 + local_98 + 8);
      uVar2 = __mulsf3(uVar10,uVar26);
      uVar3 = __mulsf3(uVar11,uVar25);
      uVar2 = __addsf3(uVar2,uVar3);
      uVar2 = __addsf3(uVar2,uVar13);
      uVar3 = __mulsf3(uVar12,uVar24);
      uVar2 = __addsf3(uVar2,uVar3);
      uVar3 = __mulsf3(uVar14,uVar26);
      uVar4 = __mulsf3(uVar15,uVar25);
      uVar3 = __addsf3(uVar3,uVar4);
      uVar3 = __addsf3(uVar3,uVar17);
      uVar4 = __mulsf3(uVar16,uVar24);
      uVar3 = __addsf3(uVar3,uVar4);
      uVar4 = __mulsf3(uVar18,uVar26);
      uVar5 = __mulsf3(uVar19,uVar25);
      uVar4 = __addsf3(uVar4,uVar5);
      uVar4 = __addsf3(uVar4,uVar21);
      uVar5 = __mulsf3(uVar20,uVar24);
      uVar4 = __addsf3(uVar4,uVar5);
      iVar6 = __aeabi_fcmpge(local_78,uVar2);
      if (iVar6 == 0) {
        local_78 = uVar2;
      }
      iVar6 = __aeabi_fcmpge(local_84,uVar3);
      if (iVar6 == 0) {
        local_84 = uVar3;
      }
      iVar6 = __aeabi_fcmpge(local_8c,uVar4);
      if (iVar6 == 0) {
        local_8c = uVar4;
      }
      iVar6 = __aeabi_fcmple(local_7c,uVar2);
      if (iVar6 == 0) {
        local_7c = uVar2;
      }
      iVar6 = __aeabi_fcmple(local_80,uVar3);
      if (iVar6 == 0) {
        local_80 = uVar3;
      }
      iVar6 = __aeabi_fcmple(local_88,uVar4);
      if (iVar6 == 0) {
        local_88 = uVar4;
      }
      if (local_94 < uVar1) {
        puVar22 = (undefined4 *)(iVar9 + local_98 + 0x14);
        uVar23 = local_94;
        while( true ) {
          uVar5 = __mulsf3(uVar26,uVar10);
          uVar7 = __mulsf3(uVar25,uVar11);
          uVar5 = __addsf3(uVar5,uVar7);
          uVar5 = __addsf3(uVar5,uVar13);
          uVar7 = __mulsf3(uVar24,uVar12);
          uVar5 = __addsf3(uVar5,uVar7);
          uVar7 = __mulsf3(uVar26,uVar14);
          uVar8 = __mulsf3(uVar25,uVar15);
          uVar7 = __addsf3(uVar7,uVar8);
          uVar7 = __addsf3(uVar7,uVar17);
          uVar8 = __mulsf3(uVar24,uVar16);
          uVar7 = __addsf3(uVar7,uVar8);
          uVar26 = __mulsf3(uVar26,uVar18);
          uVar25 = __mulsf3(uVar25,uVar19);
          uVar25 = __addsf3(uVar26,uVar25);
          uVar25 = __addsf3(uVar25,uVar21);
          uVar24 = __mulsf3(uVar24,uVar20);
          uVar24 = __addsf3(uVar25,uVar24);
          uVar25 = __subsf3(uVar5,uVar2);
          uVar26 = __subsf3(uVar7,uVar3);
          uVar8 = __subsf3(uVar24,uVar4);
          uVar26 = __mulsf3(uVar26,uVar26);
          uVar25 = __mulsf3(uVar25,uVar25);
          uVar25 = __addsf3(uVar26,uVar25);
          uVar26 = __mulsf3(uVar8,uVar8);
          uVar25 = __addsf3(uVar25,uVar26);
          iVar6 = __aeabi_fcmpgt(uVar25,local_e8);
          if (iVar6 != 0) {
            local_e8 = uVar25;
            local_b0 = uVar2;
            local_ac = uVar4;
            local_a8 = uVar3;
            local_a4 = uVar24;
            local_a0 = uVar7;
            local_9c = uVar5;
          }
          uVar23 = uVar23 + 1;
          if (uVar1 <= uVar23) break;
          uVar24 = *puVar22;
          uVar26 = puVar22[-2];
          uVar25 = puVar22[-1];
          puVar22 = puVar22 + 3;
        }
      }
      local_94 = local_94 + 1;
      local_98 = local_98 + 0xc;
    } while (local_94 != uVar1);
    uVar10 = __subsf3(local_9c,local_b0);
    uVar11 = __subsf3(local_a0,local_a8);
    uVar12 = __subsf3(local_a4,local_ac);
    uVar10 = __mulsf3(uVar10,0x3f000000);
    local_f4 = __addsf3(uVar10,local_b0);
    uVar10 = __mulsf3(uVar11,0x3f000000);
    local_f0 = __addsf3(uVar10,local_a8);
    uVar10 = __mulsf3(uVar12,0x3f000000);
    local_ec = __addsf3(uVar10,local_ac);
    uVar10 = __subsf3(local_b0,local_f4);
    uVar11 = __subsf3(local_a8,local_f0);
    uVar12 = __subsf3(local_ac,local_ec);
    uVar10 = __mulsf3(uVar10,uVar10);
    uVar11 = __mulsf3(uVar11,uVar11);
    uVar10 = __addsf3(uVar11,uVar10);
    uVar11 = __mulsf3(uVar12,uVar12);
    __x = (float)__addsf3(uVar10,uVar11);
    sqrtf(__x);
    uVar10 = extraout_r0;
  }
  MMatrix::ComputeInverse(param_1);
  uVar11 = __mulsf3(local_78,local_68);
  uVar12 = __mulsf3(local_84,local_58);
  uVar11 = __addsf3(uVar11,uVar12);
  uVar11 = __addsf3(uVar11,local_38);
  uVar12 = __mulsf3(local_8c,local_48);
  uVar11 = __addsf3(uVar11,uVar12);
  *(undefined4 *)(this + 0x60) = uVar11;
  uVar11 = __mulsf3(local_78,local_64);
  uVar12 = __mulsf3(local_84,local_54);
  uVar11 = __addsf3(uVar11,uVar12);
  uVar11 = __addsf3(uVar11,local_34);
  uVar12 = __mulsf3(local_8c,local_44);
  uVar11 = __addsf3(uVar11,uVar12);
  *(undefined4 *)(this + 100) = uVar11;
  uVar11 = __mulsf3(local_78,local_60);
  uVar12 = __mulsf3(local_84,local_50);
  uVar11 = __addsf3(uVar11,uVar12);
  uVar11 = __addsf3(uVar11,local_30);
  uVar12 = __mulsf3(local_8c,local_40);
  uVar11 = __addsf3(uVar11,uVar12);
  *(undefined4 *)(this + 0x68) = uVar11;
  uVar11 = __mulsf3(local_7c,local_68);
  uVar12 = __mulsf3(local_80,local_58);
  uVar11 = __addsf3(uVar11,uVar12);
  uVar11 = __addsf3(uVar11,local_38);
  uVar12 = __mulsf3(local_88,local_48);
  uVar11 = __addsf3(uVar11,uVar12);
  *(undefined4 *)(this + 0x54) = uVar11;
  uVar11 = __mulsf3(local_7c,local_64);
  uVar12 = __mulsf3(local_80,local_54);
  uVar11 = __addsf3(uVar11,uVar12);
  uVar11 = __addsf3(uVar11,local_34);
  uVar12 = __mulsf3(local_88,local_44);
  uVar11 = __addsf3(uVar11,uVar12);
  *(undefined4 *)(this + 0x58) = uVar11;
  uVar11 = __mulsf3(local_7c,local_60);
  uVar12 = __mulsf3(local_80,local_50);
  uVar11 = __addsf3(uVar11,uVar12);
  uVar11 = __addsf3(uVar11,local_30);
  uVar12 = __mulsf3(local_88,local_40);
  uVar11 = __addsf3(uVar11,uVar12);
  *(undefined4 *)(this + 0x5c) = uVar11;
  uVar11 = __mulsf3(local_f4,local_68);
  uVar12 = __mulsf3(local_f0,local_58);
  uVar11 = __addsf3(uVar11,uVar12);
  uVar11 = __addsf3(uVar11,local_38);
  uVar12 = __mulsf3(local_ec,local_48);
  uVar11 = __addsf3(uVar11,uVar12);
  *(undefined4 *)(this + 0x6c) = uVar11;
  uVar11 = __mulsf3(local_f4,local_64);
  uVar12 = __mulsf3(local_f0,local_54);
  uVar11 = __addsf3(uVar11,uVar12);
  uVar11 = __addsf3(uVar11,local_34);
  uVar12 = __mulsf3(local_ec,local_44);
  uVar11 = __addsf3(uVar11,uVar12);
  *(undefined4 *)(this + 0x70) = uVar11;
  uVar11 = __mulsf3(local_f4,local_60);
  uVar12 = __mulsf3(local_f0,local_50);
  uVar11 = __addsf3(uVar11,uVar12);
  uVar11 = __addsf3(uVar11,local_30);
  uVar12 = __mulsf3(local_ec,local_40);
  uVar11 = __addsf3(uVar11,uVar12);
  *(undefined4 *)(this + 0x78) = uVar10;
  *(undefined4 *)(this + 0x74) = uVar11;
  return;
}

