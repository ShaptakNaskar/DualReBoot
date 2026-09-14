/* 00053c2c | STG::MMatrix::SetEulerY */

/* STG::MMatrix::SetEulerY(float) */

void __thiscall STG::MMatrix::SetEulerY(MMatrix *this,float param_1)

{
  undefined4 extraout_r0;
  int extraout_r0_00;
  float __x;
  
  __x = cosf(param_1);
  sinf(__x);
  *(int *)(this + 0x20) = extraout_r0_00 + -0x80000000;
  *(undefined4 *)this = extraout_r0;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 0x14) = 0x3f800000;
  *(undefined4 *)(this + 0x24) = 0;
  *(int *)(this + 8) = extraout_r0_00;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x28) = extraout_r0;
  return;
}

