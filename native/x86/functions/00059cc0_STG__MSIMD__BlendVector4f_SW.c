/* 00059cc0 | STG::MSIMD::BlendVector4f_SW */

/* STG::MSIMD::BlendVector4f_SW(float*, float const*, float const*, float, unsigned long) */

void STG::MSIMD::BlendVector4f_SW
               (float *param_1,float *param_2,float *param_3,float param_4,ulong param_5)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  uint uVar6;
  
  if (param_5 << 2 != 0) {
    uVar6 = 0;
    do {
      pfVar1 = param_2 + 1;
      uVar6 = uVar6 + 4;
      fVar2 = param_2[2];
      fVar3 = *param_2;
      param_2 = param_2 + 4;
      fVar4 = param_3[2];
      fVar5 = *param_3;
      param_1[1] = (param_3[1] - *pfVar1) * param_4 + *pfVar1;
      param_3 = param_3 + 4;
      param_1[2] = (fVar4 - fVar2) * param_4 + fVar2;
      *param_1 = (fVar5 - fVar3) * param_4 + fVar3;
      param_1 = param_1 + 4;
    } while (uVar6 < param_5 << 2);
  }
  return;
}

