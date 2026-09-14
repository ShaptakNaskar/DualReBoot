/* 0004f0c4 | STG::MMatrix::ComputeInverseFast */

/* STG::MMatrix::ComputeInverseFast(STG::MMatrix&) const */

void __thiscall STG::MMatrix::ComputeInverseFast(MMatrix *this,MMatrix *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  ComputeTranspose(this,param_1);
  fVar1 = *(float *)(this + 0x30);
  fVar2 = *(float *)(this + 0x34);
  fVar3 = *(float *)(this + 0x38);
  *(undefined4 *)(param_1 + 0x3c) = 0x3f800000;
  *(float *)(param_1 + 0x30) = -fVar1;
  *(float *)(param_1 + 0x34) = -fVar2;
  *(float *)(param_1 + 0x38) = -fVar3;
  return;
}

