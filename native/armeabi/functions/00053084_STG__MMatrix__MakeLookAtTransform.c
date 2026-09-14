/* 00053084 | STG::MMatrix::MakeLookAtTransform */

/* STG::MMatrix::MakeLookAtTransform(STG::MVector3 const&, STG::MVector3 const&, STG::MVector3
   const&) */

void __thiscall
STG::MMatrix::MakeLookAtTransform
          (MMatrix *this,MVector3 *param_1,MVector3 *param_2,MVector3 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 extraout_r0;
  undefined4 uVar7;
  undefined4 extraout_r0_00;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 extraout_r0_01;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  float __x;
  float __x_00;
  float __x_01;
  int local_34;
  int local_30;
  
  uVar10 = *(undefined4 *)param_1;
  uVar11 = *(undefined4 *)(param_1 + 4);
  uVar14 = *(undefined4 *)(param_1 + 8);
  uVar1 = __subsf3(uVar10,*(undefined4 *)param_2);
  uVar2 = __subsf3(uVar11,*(undefined4 *)(param_2 + 4));
  uVar3 = __subsf3(uVar14,*(undefined4 *)(param_2 + 8));
  uVar4 = __mulsf3(uVar2,uVar2);
  uVar5 = __mulsf3(uVar1,uVar1);
  uVar4 = __addsf3(uVar4,uVar5);
  uVar5 = __mulsf3(uVar3,uVar3);
  uVar4 = __addsf3(uVar4,uVar5);
  iVar6 = __aeabi_fcmpgt(uVar4,0);
  if (iVar6 == 0) {
    uVar1 = 0;
    local_30 = -0x80000000;
    uVar2 = 0;
    uVar3 = 0;
  }
  else {
    sqrtf(__x);
    uVar4 = __divsf3(0x3f800000,extraout_r0);
    uVar1 = __mulsf3(uVar4,uVar1);
    uVar2 = __mulsf3(uVar4,uVar2);
    uVar3 = __mulsf3(uVar4,uVar3);
    uVar4 = __mulsf3(uVar2,uVar11);
    uVar5 = __mulsf3(uVar1,uVar10);
    uVar4 = __addsf3(uVar4,uVar5);
    uVar5 = __mulsf3(uVar3,uVar14);
    local_30 = __addsf3(uVar4,uVar5);
    uVar15 = *(undefined4 *)(param_3 + 8);
    uVar12 = *(undefined4 *)(param_3 + 4);
    local_30 = local_30 + -0x80000000;
    uVar4 = __mulsf3(uVar2,uVar15);
    uVar5 = __mulsf3(uVar3,uVar12);
    uVar4 = __subsf3(uVar5,uVar4);
    uVar13 = *(undefined4 *)param_3;
    uVar5 = __mulsf3(uVar3,uVar13);
    uVar15 = __mulsf3(uVar1,uVar15);
    uVar5 = __subsf3(uVar15,uVar5);
    uVar15 = __mulsf3(uVar2,uVar13);
    uVar12 = __mulsf3(uVar1,uVar12);
    uVar15 = __subsf3(uVar15,uVar12);
    uVar12 = __mulsf3(uVar4,uVar4);
    uVar13 = __mulsf3(uVar5,uVar5);
    uVar7 = __mulsf3(uVar15,uVar15);
    uVar12 = __addsf3(uVar12,uVar7);
    uVar12 = __addsf3(uVar12,uVar13);
    iVar6 = __aeabi_fcmpgt(uVar12,0);
    if (iVar6 != 0) {
      sqrtf(__x_00);
      uVar7 = __divsf3(0x3f800000,extraout_r0_00);
      uVar12 = __mulsf3(uVar4,uVar7);
      uVar13 = __mulsf3(uVar7,uVar5);
      uVar15 = __mulsf3(uVar15,uVar7);
      uVar4 = __mulsf3(uVar13,uVar11);
      uVar5 = __mulsf3(uVar12,uVar10);
      uVar4 = __addsf3(uVar5,uVar4);
      uVar5 = __mulsf3(uVar15,uVar14);
      local_34 = __addsf3(uVar4,uVar5);
      local_34 = local_34 + -0x80000000;
      uVar4 = __mulsf3(uVar2,uVar15);
      uVar5 = __mulsf3(uVar3,uVar13);
      uVar4 = __subsf3(uVar4,uVar5);
      uVar5 = __mulsf3(uVar3,uVar12);
      uVar7 = __mulsf3(uVar1,uVar15);
      uVar7 = __subsf3(uVar5,uVar7);
      uVar5 = __mulsf3(uVar1,uVar13);
      uVar8 = __mulsf3(uVar2,uVar12);
      uVar8 = __subsf3(uVar5,uVar8);
      uVar5 = __mulsf3(uVar4,uVar4);
      uVar9 = __mulsf3(uVar7,uVar7);
      uVar5 = __addsf3(uVar9,uVar5);
      uVar9 = __mulsf3(uVar8,uVar8);
      uVar5 = __addsf3(uVar5,uVar9);
      iVar6 = __aeabi_fcmpgt(uVar5,0);
      if (iVar6 == 0) {
        uVar7 = 0;
        iVar6 = -0x80000000;
        uVar4 = uVar7;
        uVar5 = uVar7;
      }
      else {
        sqrtf(__x_01);
        uVar9 = __divsf3(0x3f800000,extraout_r0_01);
        uVar5 = __mulsf3(uVar9,uVar4);
        uVar7 = __mulsf3(uVar9,uVar7);
        uVar4 = __mulsf3(uVar9,uVar8);
        uVar11 = __mulsf3(uVar7,uVar11);
        uVar10 = __mulsf3(uVar5,uVar10);
        uVar10 = __addsf3(uVar10,uVar11);
        uVar11 = __mulsf3(uVar4,uVar14);
        iVar6 = __addsf3(uVar10,uVar11);
        iVar6 = iVar6 + -0x80000000;
      }
      goto LAB_00053520;
    }
  }
  uVar4 = 0;
  iVar6 = -0x80000000;
  local_34 = -0x80000000;
  uVar13 = 0;
  uVar15 = 0;
  uVar7 = 0;
  uVar5 = 0;
  uVar12 = uVar4;
LAB_00053520:
  *(undefined4 *)(this + 0x24) = uVar4;
  *(undefined4 *)(this + 0x14) = uVar7;
  *(int *)(this + 0x38) = local_30;
  *(undefined4 *)this = uVar12;
  *(undefined4 *)(this + 4) = uVar5;
  *(undefined4 *)(this + 8) = uVar1;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x10) = uVar13;
  *(undefined4 *)(this + 0x18) = uVar2;
  *(undefined4 *)(this + 0x1c) = 0;
  *(undefined4 *)(this + 0x20) = uVar15;
  *(undefined4 *)(this + 0x28) = uVar3;
  *(undefined4 *)(this + 0x2c) = 0;
  *(int *)(this + 0x30) = local_34;
  *(int *)(this + 0x34) = iVar6;
  *(undefined4 *)(this + 0x3c) = 0x3f800000;
  return;
}

