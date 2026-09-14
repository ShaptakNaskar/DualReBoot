/* 0004f420 | STG::MMatrix::MakePerspectiveTransform */

/* STG::MMatrix::MakePerspectiveTransform(float, float, float, float) */

void __thiscall
STG::MMatrix::MakePerspectiveTransform
          (MMatrix *this,float param_1,float param_2,float param_3,float param_4)

{
  float fVar1;
  float fVar2;
  
  fVar1 = tanf(param_1 * DAT_0004f4c0);
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x1c) = 0;
  *(undefined4 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x24) = 0;
  *(undefined4 *)(this + 0x30) = 0;
  *(undefined4 *)(this + 0x34) = 0;
  *(undefined4 *)(this + 0x3c) = 0;
  *(undefined4 *)(this + 0x2c) = 0xbf800000;
  fVar2 = 1.0 / (param_3 - param_4);
  *(float *)(this + 0x14) = 1.0 / fVar1;
  *(float *)this = (1.0 / fVar1) / param_2;
  *(float *)(this + 0x38) = (param_3 + param_3) * param_4 * fVar2;
  *(float *)(this + 0x28) = fVar2 * (param_4 + param_3);
  return;
}

