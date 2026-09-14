/* 000594e0 | STG::MMatrix::MakeScreenTransform */

/* STG::MMatrix::MakeScreenTransform(STG::URectangle<unsigned long> const&) */

void STG::MMatrix::MakeScreenTransform(URectangle *param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  float *pfVar7;
  int *extraout_ECX;
  int unaff_EBX;
  
  pfVar7 = (float *)FUN_0002e044();
  iVar3 = extraout_ECX[1];
  iVar4 = extraout_ECX[3];
  fVar1 = *(float *)(unaff_EBX + 0x2e1cd);
  iVar5 = extraout_ECX[2];
  iVar6 = *extraout_ECX;
  pfVar7[0xc] = -1.0;
  fVar2 = *(float *)(unaff_EBX + 0x2e1f1);
  pfVar7[10] = 1.0;
  pfVar7[0xd] = -1.0;
  pfVar7[0xf] = 1.0;
  pfVar7[1] = 0.0;
  pfVar7[2] = 0.0;
  pfVar7[3] = 0.0;
  pfVar7[4] = 0.0;
  pfVar7[6] = 0.0;
  pfVar7[7] = 0.0;
  pfVar7[8] = 0.0;
  pfVar7[9] = 0.0;
  pfVar7[0xb] = 0.0;
  pfVar7[0xe] = 0.0;
  pfVar7[5] = fVar2 / ((float)((uint)(iVar3 - iVar4) >> 0x10) * fVar1 +
                      (float)(iVar3 - iVar4 & 0xffff));
  *pfVar7 = fVar2 / ((float)((uint)(iVar5 - iVar6) >> 0x10) * fVar1 +
                    (float)(iVar5 - iVar6 & 0xffff));
  return;
}

