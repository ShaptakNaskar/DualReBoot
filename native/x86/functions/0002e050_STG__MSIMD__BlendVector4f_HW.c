/* 0002e050 | STG::MSIMD::BlendVector4f_HW */

/* STG::MSIMD::BlendVector4f_HW(float*, float const*, float const*, float, unsigned long) */

void STG::MSIMD::BlendVector4f_HW
               (float *param_1,float *param_2,float *param_3,float param_4,ulong param_5)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  uint uVar10;
  
  if (param_5 << 2 != 0) {
    uVar10 = 0;
    do {
      pfVar1 = param_2 + uVar10;
      fVar4 = pfVar1[1];
      fVar5 = pfVar1[2];
      fVar6 = pfVar1[3];
      pfVar2 = param_3 + uVar10;
      fVar7 = pfVar2[1];
      fVar8 = pfVar2[2];
      fVar9 = pfVar2[3];
      pfVar3 = param_1 + uVar10;
      *pfVar3 = (*pfVar2 - *pfVar1) * param_4 + *pfVar1;
      pfVar3[1] = (fVar7 - fVar4) * param_4 + fVar4;
      pfVar3[2] = (fVar8 - fVar5) * param_4 + fVar5;
      pfVar3[3] = (fVar9 - fVar6) * param_4 + fVar6;
      uVar10 = uVar10 + 4;
    } while (uVar10 < param_5 << 2);
  }
  return;
}

