/* 0004f3b0 | STG::MMatrix::MakeOrthographicTransform_Landscape */

/* STG::MMatrix::MakeOrthographicTransform_Landscape(float, float, float, float) */

void __thiscall
STG::MMatrix::MakeOrthographicTransform_Landscape
          (MMatrix *this,float param_1,float param_2,float param_3,float param_4)

{
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x1c) = 0;
  *(undefined4 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x24) = 0;
  *(undefined4 *)(this + 0x2c) = 0;
  *(undefined4 *)(this + 0x3c) = 0x3f800000;
  *(undefined4 *)(this + 0x30) = 0;
  *(undefined4 *)(this + 0x34) = 0;
  *(float *)(this + 0x10) = 1.0 / param_1;
  *(float *)(this + 4) = -param_2 / param_1;
  *(float *)(this + 0x28) = -2.0 / (param_4 - param_3);
  *(float *)(this + 0x38) = (param_4 + param_3) / (param_3 - param_4);
  return;
}

