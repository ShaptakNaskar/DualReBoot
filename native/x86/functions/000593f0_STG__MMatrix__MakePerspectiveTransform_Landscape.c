/* 000593f0 | STG::MMatrix::MakePerspectiveTransform_Landscape */

/* STG::MMatrix::MakePerspectiveTransform_Landscape(float, float, float, float) */

void __thiscall
STG::MMatrix::MakePerspectiveTransform_Landscape
          (MMatrix *this,float param_1,float param_2,float param_3,float param_4)

{
  uint uVar1;
  int unaff_EBX;
  float fVar2;
  float fVar3;
  
  FUN_0002e044();
  fVar3 = tanf(*(float *)(unaff_EBX + 0x2e302) * param_1);
  fVar2 = *(float *)(unaff_EBX + 0x2e2ae);
  fVar3 = fVar2 / fVar3;
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x1c) = 0;
  *(undefined4 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x24) = 0;
  *(undefined4 *)(this + 0x2c) = 0xbf800000;
  fVar2 = fVar2 / (param_3 - param_4);
  uVar1 = *(uint *)(&DAT_0002e3b6 + unaff_EBX);
  *(undefined4 *)(this + 0x30) = 0;
  *(undefined4 *)(this + 0x34) = 0;
  *(undefined4 *)(this + 0x3c) = 0;
  *(float *)(this + 0x10) = fVar3;
  *(float *)(this + 4) = (float)(uVar1 ^ (uint)fVar3) * param_2;
  *(float *)(this + 0x28) = (param_4 + param_3) * fVar2;
  *(float *)(this + 0x38) = (param_3 + param_3) * param_4 * fVar2;
  return;
}

