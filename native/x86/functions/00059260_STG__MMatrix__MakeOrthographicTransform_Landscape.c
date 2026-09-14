/* 00059260 | STG::MMatrix::MakeOrthographicTransform_Landscape */

/* STG::MMatrix::MakeOrthographicTransform_Landscape(float, float, float, float) */

void __thiscall
STG::MMatrix::MakeOrthographicTransform_Landscape
          (MMatrix *this,float param_1,float param_2,float param_3,float param_4)

{
  uint uVar1;
  float fVar2;
  int extraout_ECX;
  
  FUN_0002e915();
  uVar1 = *(uint *)(extraout_ECX + 0x2e54b);
  fVar2 = *(float *)(extraout_ECX + 0x2e443);
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x1c) = 0;
  *(undefined4 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x24) = 0;
  *(undefined4 *)(this + 0x2c) = 0;
  *(undefined4 *)(this + 0x30) = 0;
  *(undefined4 *)(this + 0x34) = 0;
  *(float *)(this + 0x3c) = fVar2;
  *(float *)(this + 4) = (float)((uint)param_2 ^ uVar1) / param_1;
  *(float *)(this + 0x10) = fVar2 / param_1;
  *(float *)(this + 0x28) = *(float *)(extraout_ECX + 0x2e493) / (param_4 - param_3);
  *(float *)(this + 0x38) = (param_4 + param_3) / (param_3 - param_4);
  return;
}

