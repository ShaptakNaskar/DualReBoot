/* 0002ea9c | STG::MSIMD::BlendVector4f_HW */

/* STG::MSIMD::BlendVector4f_HW(float*, float const*, float const*, float, unsigned long) */

void STG::MSIMD::BlendVector4f_HW
               (float *param_1,float *param_2,float *param_3,float param_4,ulong param_5)

{
  undefined4 uVar1;
  uint uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float extraout_s0;
  int in_stack_00000000;
  
  if (in_stack_00000000 << 2 != 0) {
    uVar2 = 0;
    do {
      fVar3 = param_2[1];
      fVar5 = param_2[2];
      uVar1 = __subsf3(param_4,param_3[1],fVar3);
      uVar1 = __mulsf3(uVar1,param_5);
      fVar3 = (float)__addsf3(uVar1,fVar3);
      uVar1 = __subsf3(param_3[2],fVar5);
      uVar1 = __mulsf3(uVar1,param_5);
      fVar5 = (float)__addsf3(uVar1,fVar5);
      fVar4 = param_2[3];
      fVar6 = *param_2;
      uVar1 = __subsf3(param_3[3],fVar4);
      uVar1 = __mulsf3(uVar1,param_5);
      fVar4 = (float)__addsf3(uVar1,fVar4);
      uVar1 = __subsf3(*param_3,fVar6);
      uVar1 = __mulsf3(uVar1,param_5);
      fVar6 = (float)__addsf3(uVar1,fVar6);
      uVar2 = uVar2 + 4;
      *param_1 = fVar6;
      param_1[1] = fVar3;
      param_1[2] = fVar5;
      param_1[3] = fVar4;
      param_2 = param_2 + 4;
      param_1 = param_1 + 4;
      param_3 = param_3 + 4;
      param_4 = extraout_s0;
    } while (uVar2 < (uint)(in_stack_00000000 << 2));
  }
  return;
}

