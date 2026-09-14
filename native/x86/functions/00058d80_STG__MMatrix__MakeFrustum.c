/* 00058d80 | STG::MMatrix::MakeFrustum */

/* STG::MMatrix::MakeFrustum(float, float, float, float, float, float) */

void __thiscall
STG::MMatrix::MakeFrustum
          (MMatrix *this,float param_1,float param_2,float param_3,float param_4,float param_5,
          float param_6)

{
  float fVar1;
  
  fVar1 = param_5 + param_5;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x1c) = 0;
  *(undefined4 *)(this + 0x2c) = 0xbf800000;
  *(undefined4 *)(this + 0x30) = 0;
  *(undefined4 *)(this + 0x34) = 0;
  *(undefined4 *)(this + 0x3c) = 0;
  *(float *)this = fVar1 / (param_2 - param_1);
  *(float *)(this + 0x20) = (param_2 + param_1) / (param_2 - param_1);
  *(float *)(this + 0x14) = fVar1 / (param_4 - param_3);
  *(float *)(this + 0x24) = (param_4 + param_3) / (param_4 - param_3);
  *(float *)(this + 0x28) = (param_5 + param_6) / (param_5 - param_6);
  *(float *)(this + 0x38) = (fVar1 * param_6) / (param_5 - param_6);
  return;
}

