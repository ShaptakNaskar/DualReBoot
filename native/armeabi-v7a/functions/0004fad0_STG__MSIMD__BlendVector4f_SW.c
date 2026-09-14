/* 0004fad0 | STG::MSIMD::BlendVector4f_SW */

/* STG::MSIMD::BlendVector4f_SW(float*, float const*, float const*, float, unsigned long) */

void STG::MSIMD::BlendVector4f_SW
               (float *param_1,float *param_2,float *param_3,float param_4,ulong param_5)

{
  float *pfVar1;
  float *pfVar2;
  uint uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  if (param_5 * 4 != 0) {
    uVar3 = 0;
    do {
      fVar7 = *param_2;
      pfVar1 = param_2 + 1;
      fVar6 = param_2[2];
      pfVar2 = param_3 + 1;
      fVar4 = param_3[2];
      fVar5 = *param_3;
      uVar3 = uVar3 + 4;
      param_3 = param_3 + 4;
      param_2 = param_2 + 4;
      param_1[1] = *pfVar1 + (*pfVar2 - *pfVar1) * param_4;
      param_1[2] = fVar6 + (fVar4 - fVar6) * param_4;
      *param_1 = fVar7 + (fVar5 - fVar7) * param_4;
      param_1 = param_1 + 4;
    } while (uVar3 < param_5 * 4);
  }
  return;
}

