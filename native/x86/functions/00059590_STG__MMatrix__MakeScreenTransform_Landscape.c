/* 00059590 | STG::MMatrix::MakeScreenTransform_Landscape */

/* STG::MMatrix::MakeScreenTransform_Landscape(STG::URectangle<unsigned long> const&) */

void STG::MMatrix::MakeScreenTransform_Landscape(URectangle *param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  int *extraout_ECX;
  int unaff_EBX;
  
  puVar7 = (undefined4 *)FUN_0002e044();
  iVar3 = extraout_ECX[1];
  iVar4 = extraout_ECX[3];
  fVar1 = *(float *)(unaff_EBX + 0x2e11c);
  iVar5 = extraout_ECX[2];
  iVar6 = *extraout_ECX;
  fVar2 = *(float *)(unaff_EBX + 0x2e140);
  puVar7[0xc] = 0xbf800000;
  puVar7[10] = 0x3f800000;
  puVar7[0xd] = 0x3f800000;
  puVar7[0xf] = 0x3f800000;
  *puVar7 = 0;
  puVar7[2] = 0;
  puVar7[3] = 0;
  puVar7[5] = 0;
  puVar7[6] = 0;
  puVar7[7] = 0;
  puVar7[8] = 0;
  puVar7[9] = 0;
  puVar7[0xb] = 0;
  puVar7[0xe] = 0;
  puVar7[1] = (uint)(fVar2 / ((float)((uint)(iVar3 - iVar4) >> 0x10) * fVar1 +
                             (float)(iVar3 - iVar4 & 0xffff))) ^
              *(uint *)(FFileBase::Print + unaff_EBX);
  puVar7[4] = fVar2 / ((float)((uint)(iVar5 - iVar6) >> 0x10) * fVar1 +
                      (float)(iVar5 - iVar6 & 0xffff));
  return;
}

