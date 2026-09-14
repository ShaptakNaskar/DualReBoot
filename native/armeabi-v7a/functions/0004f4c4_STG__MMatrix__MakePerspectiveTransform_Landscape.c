/* 0004f4c4 | STG::MMatrix::MakePerspectiveTransform_Landscape */

/* STG::MMatrix::MakePerspectiveTransform_Landscape(float, float, float, float) */

void __thiscall
STG::MMatrix::MakePerspectiveTransform_Landscape
          (MMatrix *this,float param_1,float param_2,float param_3,float param_4)

{
  float fVar1;
  float fVar2;
  
  fVar1 = tanf(param_1 * DAT_0004f564);
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x1c) = 0;
  *(undefined4 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x24) = 0;
  *(undefined4 *)(this + 0x30) = 0;
  *(undefined4 *)(this + 0x34) = 0;
  *(undefined4 *)(this + 0x3c) = 0;
  *(undefined4 *)(this + 0x2c) = 0xbf800000;
  fVar2 = 1.0 / (param_3 - param_4);
  *(float *)(this + 0x10) = 1.0 / fVar1;
  *(float *)(this + 4) = -((1.0 / fVar1) * param_2);
  *(float *)(this + 0x28) = fVar2 * (param_4 + param_3);
  *(float *)(this + 0x38) = (param_3 + param_3) * param_4 * fVar2;
  return;
}

