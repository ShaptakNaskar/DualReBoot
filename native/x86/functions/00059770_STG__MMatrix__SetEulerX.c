/* 00059770 | STG::MMatrix::SetEulerX */

/* STG::MMatrix::SetEulerX(float) */

void __thiscall STG::MMatrix::SetEulerX(MMatrix *this,float param_1)

{
  uint uVar1;
  int unaff_EBX;
  float fVar2;
  float fVar3;
  
  FUN_0002e044();
  fVar2 = cosf(param_1);
  fVar3 = sinf(param_1);
  uVar1 = *(uint *)(unaff_EBX + 0x2e02a);
  *(undefined4 *)this = 0x3f800000;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(float *)(this + 0x14) = fVar2;
  *(float *)(this + 0x24) = fVar3;
  *(uint *)(this + 0x18) = (uint)fVar3 ^ uVar1;
  *(float *)(this + 0x28) = fVar2;
  return;
}

