/* 0004f7a0 | STG::MMatrix::SetEulerX */

/* STG::MMatrix::SetEulerX(float) */

void __thiscall STG::MMatrix::SetEulerX(MMatrix *this,float param_1)

{
  float fVar1;
  float fVar2;
  
  fVar1 = cosf(param_1);
  fVar2 = sinf(param_1);
  *(float *)(this + 0x14) = fVar1;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x20) = 0;
  *(float *)(this + 0x28) = fVar1;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)this = 0x3f800000;
  *(float *)(this + 0x24) = fVar2;
  *(float *)(this + 0x18) = -fVar2;
  return;
}

