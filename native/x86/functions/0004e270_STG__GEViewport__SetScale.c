/* 0004e270 | STG::GEViewport::SetScale */

/* STG::GEViewport::SetScale(STG::MVector2 const&, STG::MVector2 const&) */

void STG::GEViewport::SetScale(MVector2 *param_1,MVector2 *param_2)

{
  float fVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *extraout_ECX;
  float *pfVar4;
  int unaff_EBX;
  float fVar5;
  float fVar6;
  undefined8 uVar7;
  
  uVar7 = FUN_0002e044();
  pfVar4 = (float *)((ulonglong)uVar7 >> 0x20);
  iVar3 = (int)uVar7;
  uVar2 = extraout_ECX[1];
  *(undefined4 *)(iVar3 + 0x20) = *extraout_ECX;
  *(undefined4 *)(iVar3 + 0x24) = uVar2;
  fVar1 = *(float *)(unaff_EBX + 0x3941c);
  fVar5 = (pfVar4[1] - *(float *)(iVar3 + 0x1c)) / *(float *)(iVar3 + 0x40);
  fVar6 = (*pfVar4 - *(float *)(iVar3 + 0x10)) / *(float *)(iVar3 + 0x3c);
  *(float *)(iVar3 + 0x2c) = (fVar5 + fVar5) - fVar1;
  *(float *)(iVar3 + 0x28) = (fVar6 + fVar6) - fVar1;
  return;
}

