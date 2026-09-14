/* 00053c80 | STG::MMatrix::SetEulerZ */

/* STG::MMatrix::SetEulerZ(float) */

void __thiscall STG::MMatrix::SetEulerZ(MMatrix *this,float param_1)

{
  undefined4 extraout_r0;
  int extraout_r0_00;
  float __x;
  
  __x = cosf(param_1);
  sinf(__x);
  *(undefined4 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x24) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)this = extraout_r0;
  *(int *)(this + 0x10) = extraout_r0_00;
  *(int *)(this + 4) = extraout_r0_00 + -0x80000000;
  *(undefined4 *)(this + 0x14) = extraout_r0;
  *(undefined4 *)(this + 0x28) = 0x3f800000;
  return;
}

