/* 000591c0 | STG::MMatrix::MakeOrthographicTransform */

/* STG::MMatrix::MakeOrthographicTransform(float, float, float, float) */

void __thiscall
STG::MMatrix::MakeOrthographicTransform
          (MMatrix *this,float param_1,float param_2,float param_3,float param_4)

{
  float fVar1;
  float fVar2;
  int extraout_ECX;
  
  FUN_0002e915();
  fVar1 = *(float *)(extraout_ECX + 0x2e4e3);
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  fVar2 = *(float *)(extraout_ECX + 0x2e533);
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x1c) = 0;
  *(undefined4 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x24) = 0;
  *(undefined4 *)(this + 0x2c) = 0;
  *(undefined4 *)(this + 0x30) = 0;
  *(undefined4 *)(this + 0x34) = 0;
  *(float *)(this + 0x3c) = fVar1;
  *(float *)this = fVar1 / (param_2 * param_1);
  *(float *)(this + 0x14) = fVar1 / param_1;
  *(float *)(this + 0x28) = fVar2 / (param_4 - param_3);
  *(float *)(this + 0x38) = (param_4 + param_3) / (param_3 - param_4);
  return;
}

