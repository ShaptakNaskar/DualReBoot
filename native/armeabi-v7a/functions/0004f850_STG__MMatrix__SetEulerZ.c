/* 0004f850 | STG::MMatrix::SetEulerZ */

/* STG::MMatrix::SetEulerZ(float) */

void __thiscall STG::MMatrix::SetEulerZ(MMatrix *this,float param_1)

{
  float fVar1;
  float fVar2;
  
  fVar1 = cosf(param_1);
  fVar2 = sinf(param_1);
  *(float *)this = fVar1;
  *(undefined4 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x24) = 0;
  *(float *)(this + 0x14) = fVar1;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x28) = 0x3f800000;
  *(float *)(this + 0x10) = fVar2;
  *(float *)(this + 4) = -fVar2;
  return;
}

