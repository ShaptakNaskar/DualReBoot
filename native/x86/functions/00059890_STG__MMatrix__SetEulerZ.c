/* 00059890 | STG::MMatrix::SetEulerZ */

/* STG::MMatrix::SetEulerZ(float) */

void __thiscall STG::MMatrix::SetEulerZ(MMatrix *this,float param_1)

{
  uint uVar1;
  int unaff_EBX;
  float fVar2;
  float fVar3;
  
  FUN_0002e044();
  fVar2 = cosf(param_1);
  fVar3 = sinf(param_1);
  uVar1 = *(uint *)(mmap + unaff_EBX + 2);
  *(float *)this = fVar2;
  *(undefined4 *)(this + 0x20) = 0;
  *(float *)(this + 0x10) = fVar3;
  *(uint *)(this + 4) = (uint)fVar3 ^ uVar1;
  *(float *)(this + 0x14) = fVar2;
  *(undefined4 *)(this + 0x24) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x28) = 0x3f800000;
  return;
}

