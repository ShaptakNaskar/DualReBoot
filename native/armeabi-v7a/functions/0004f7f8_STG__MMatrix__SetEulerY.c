/* 0004f7f8 | STG::MMatrix::SetEulerY */

/* STG::MMatrix::SetEulerY(float) */

void __thiscall STG::MMatrix::SetEulerY(MMatrix *this,float param_1)

{
  float fVar1;
  float fVar2;
  
  fVar1 = cosf(param_1);
  fVar2 = sinf(param_1);
  *(float *)this = fVar1;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 4) = 0;
  *(float *)(this + 0x28) = fVar1;
  *(undefined4 *)(this + 0x24) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x14) = 0x3f800000;
  *(float *)(this + 8) = fVar2;
  *(float *)(this + 0x20) = -fVar2;
  return;
}

