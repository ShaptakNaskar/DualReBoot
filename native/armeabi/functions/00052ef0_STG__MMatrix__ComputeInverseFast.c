/* 00052ef0 | STG::MMatrix::ComputeInverseFast */

/* STG::MMatrix::ComputeInverseFast(STG::MMatrix&) const */

void __thiscall STG::MMatrix::ComputeInverseFast(MMatrix *this,MMatrix *param_1)

{
  int iVar1;
  int iVar2;
  
  ComputeTranspose(this,param_1);
  iVar1 = *(int *)(this + 0x30);
  iVar2 = *(int *)(this + 0x34);
  *(int *)(param_1 + 0x38) = *(int *)(this + 0x38) + -0x80000000;
  *(int *)(param_1 + 0x30) = iVar1 + -0x80000000;
  *(int *)(param_1 + 0x34) = iVar2 + -0x80000000;
  *(undefined4 *)(param_1 + 0x3c) = 0x3f800000;
  return;
}

