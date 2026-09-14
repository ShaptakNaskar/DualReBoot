/* 00059800 | STG::MMatrix::SetEulerY */

/* STG::MMatrix::SetEulerY(float) */

void __thiscall STG::MMatrix::SetEulerY(MMatrix *this,float param_1)

{
  uint uVar1;
  int unaff_EBX;
  float fVar2;
  float fVar3;
  
  FUN_0002e044();
  fVar2 = cosf(param_1);
  fVar3 = sinf(param_1);
  uVar1 = *(uint *)(realloc + unaff_EBX + 2);
  *(float *)this = fVar2;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 4) = 0;
  *(uint *)(this + 0x20) = uVar1 ^ (uint)fVar3;
  *(undefined4 *)(this + 0x14) = 0x3f800000;
  *(undefined4 *)(this + 0x24) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  *(float *)(this + 8) = fVar3;
  *(float *)(this + 0x28) = fVar2;
  return;
}

