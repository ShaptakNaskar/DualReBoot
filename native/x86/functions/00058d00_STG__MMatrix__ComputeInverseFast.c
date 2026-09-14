/* 00058d00 | STG::MMatrix::ComputeInverseFast */

/* STG::MMatrix::ComputeInverseFast(STG::MMatrix&) const */

void __thiscall STG::MMatrix::ComputeInverseFast(MMatrix *this,MMatrix *param_1)

{
  uint uVar1;
  uint uVar2;
  int unaff_EBX;
  
  FUN_0002e044();
  ComputeTranspose(this,param_1);
  uVar1 = *(uint *)(unaff_EBX + 0x2ea9a);
  uVar2 = *(uint *)(this + 0x30);
  *(undefined4 *)(param_1 + 0x3c) = 0x3f800000;
  *(uint *)(param_1 + 0x30) = uVar2 ^ uVar1;
  *(uint *)(param_1 + 0x34) = *(uint *)(this + 0x34) ^ uVar1;
  *(uint *)(param_1 + 0x38) = *(uint *)(this + 0x38) ^ uVar1;
  return;
}

