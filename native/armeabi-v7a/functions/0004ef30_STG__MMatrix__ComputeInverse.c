/* 0004ef30 | STG::MMatrix::ComputeInverse */

/* WARNING: Removing unreachable block (ram,0x0004ef58) */
/* STG::MMatrix::ComputeInverse(STG::MMatrix&) const */

void __thiscall STG::MMatrix::ComputeInverse(MMatrix *this,MMatrix *param_1)

{
  float fVar1;
  
  ComputeAdjoint(this,param_1);
  fVar1 = (float)GetDeterminant(this);
  if (0xf < (uint)ABS(fVar1)) {
    fVar1 = 1.0 / fVar1;
    *(float *)param_1 = *(float *)param_1 * fVar1;
    *(float *)(param_1 + 4) = *(float *)(param_1 + 4) * fVar1;
    *(float *)(param_1 + 8) = *(float *)(param_1 + 8) * fVar1;
    *(float *)(param_1 + 0xc) = *(float *)(param_1 + 0xc) * fVar1;
    *(float *)(param_1 + 0x10) = *(float *)(param_1 + 0x10) * fVar1;
    *(float *)(param_1 + 0x14) = *(float *)(param_1 + 0x14) * fVar1;
    *(float *)(param_1 + 0x18) = *(float *)(param_1 + 0x18) * fVar1;
    *(float *)(param_1 + 0x1c) = *(float *)(param_1 + 0x1c) * fVar1;
    *(float *)(param_1 + 0x20) = *(float *)(param_1 + 0x20) * fVar1;
    *(float *)(param_1 + 0x24) = *(float *)(param_1 + 0x24) * fVar1;
    *(float *)(param_1 + 0x28) = *(float *)(param_1 + 0x28) * fVar1;
    *(float *)(param_1 + 0x2c) = *(float *)(param_1 + 0x2c) * fVar1;
    *(float *)(param_1 + 0x30) = *(float *)(param_1 + 0x30) * fVar1;
    *(float *)(param_1 + 0x34) = *(float *)(param_1 + 0x34) * fVar1;
    *(float *)(param_1 + 0x38) = *(float *)(param_1 + 0x38) * fVar1;
    *(float *)(param_1 + 0x3c) = *(float *)(param_1 + 0x3c) * fVar1;
  }
  return;
}

