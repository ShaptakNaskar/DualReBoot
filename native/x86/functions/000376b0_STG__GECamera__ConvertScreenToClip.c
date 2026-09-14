/* 000376b0 | STG::GECamera::ConvertScreenToClip */

/* STG::GECamera::ConvertScreenToClip(STG::URectangle<unsigned long> const&, STG::MVector2 const&,
   STG::MVector2&) const */

void STG::GECamera::ConvertScreenToClip(URectangle *param_1,MVector2 *param_2,MVector2 *param_3)

{
  float fVar1;
  uint *puVar2;
  float *extraout_ECX;
  int unaff_EBX;
  float fVar3;
  float fVar4;
  float fVar5;
  float *in_stack_00000010;
  
  puVar2 = (uint *)FUN_0002e044();
  fVar3 = *(float *)(unaff_EBX + 0x4fffc);
  fVar5 = (float)(*puVar2 >> 0x10) * fVar3 + (float)(*puVar2 & 0xffff);
  fVar4 = (float)(puVar2[3] >> 0x10) * fVar3 + (float)(puVar2[3] & 0xffff);
  fVar1 = *(float *)(unaff_EBX + 0x4ffe8);
  fVar4 = (extraout_ECX[1] - fVar4) /
          (((float)(puVar2[1] >> 0x10) * fVar3 + (float)(puVar2[1] & 0xffff)) - fVar4);
  fVar3 = (*extraout_ECX - fVar5) /
          (((float)(puVar2[2] >> 0x10) * fVar3 + (float)(puVar2[2] & 0xffff)) - fVar5);
  in_stack_00000010[1] = (fVar4 + fVar4) - fVar1;
  *in_stack_00000010 = (fVar3 + fVar3) - fVar1;
  return;
}

