/* 00059310 | STG::MMatrix::MakePerspectiveTransform */

/* STG::MMatrix::MakePerspectiveTransform(float, float, float, float) */

void __thiscall
STG::MMatrix::MakePerspectiveTransform
          (MMatrix *this,float param_1,float param_2,float param_3,float param_4)

{
  int unaff_EBX;
  float fVar1;
  float fVar2;
  
  FUN_0002e044();
  fVar2 = tanf(*(float *)(unaff_EBX + 0x2e3e5) * param_1);
  fVar1 = *(float *)(unaff_EBX + 0x2e391);
  fVar2 = fVar1 / fVar2;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x1c) = 0;
  *(undefined4 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x24) = 0;
  *(undefined4 *)(this + 0x2c) = 0xbf800000;
  *(undefined4 *)(this + 0x30) = 0;
  *(undefined4 *)(this + 0x34) = 0;
  *(undefined4 *)(this + 0x3c) = 0;
  *(float *)(this + 0x14) = fVar2;
  fVar1 = fVar1 / (param_3 - param_4);
  *(float *)(this + 0x28) = (param_4 + param_3) * fVar1;
  *(float *)(this + 0x38) = (param_3 + param_3) * param_4 * fVar1;
  *(float *)this = fVar2 / param_2;
  return;
}

