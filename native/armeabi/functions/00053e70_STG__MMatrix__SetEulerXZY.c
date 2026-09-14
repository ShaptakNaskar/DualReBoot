/* 00053e70 | STG::MMatrix::SetEulerXZY */

/* STG::MMatrix::SetEulerXZY(float, float, float) */

void STG::MMatrix::SetEulerXZY(float param_1,float param_2,float param_3)

{
  undefined4 *in_r0;
  undefined4 extraout_r0;
  undefined4 extraout_r0_00;
  undefined4 extraout_r0_01;
  undefined4 extraout_r0_02;
  undefined4 extraout_r0_03;
  int extraout_r0_04;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  float fVar6;
  
  fVar6 = cosf(param_1);
  fVar6 = sinf(fVar6);
  fVar6 = cosf(fVar6);
  fVar6 = sinf(fVar6);
  fVar6 = cosf(fVar6);
  sinf(fVar6);
  uVar1 = __mulsf3(extraout_r0_02,extraout_r0_00);
  uVar2 = __mulsf3(extraout_r0_01,extraout_r0_00);
  uVar3 = __mulsf3(extraout_r0_02,extraout_r0);
  uVar4 = __mulsf3(extraout_r0_01,extraout_r0);
  uVar5 = __mulsf3(extraout_r0_03,extraout_r0_01);
  *in_r0 = uVar5;
  uVar5 = __mulsf3(uVar4,extraout_r0_04);
  uVar5 = __addsf3(uVar5,uVar1);
  in_r0[4] = uVar5;
  uVar5 = __mulsf3(uVar2,extraout_r0_04);
  uVar5 = __subsf3(uVar5,uVar3);
  in_r0[1] = extraout_r0_04 + -0x80000000;
  in_r0[8] = uVar5;
  uVar5 = __mulsf3(extraout_r0_03,extraout_r0);
  in_r0[5] = uVar5;
  uVar5 = __mulsf3(extraout_r0_03,extraout_r0_00);
  in_r0[9] = uVar5;
  uVar5 = __mulsf3(extraout_r0_03,extraout_r0_02);
  in_r0[2] = uVar5;
  uVar3 = __mulsf3(uVar3,extraout_r0_04);
  uVar2 = __subsf3(uVar3,uVar2);
  in_r0[6] = uVar2;
  uVar1 = __mulsf3(uVar1,extraout_r0_04);
  uVar1 = __addsf3(uVar1,uVar4);
  in_r0[10] = uVar1;
  return;
}

