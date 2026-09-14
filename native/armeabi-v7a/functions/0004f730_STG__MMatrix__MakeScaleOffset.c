/* 0004f730 | STG::MMatrix::MakeScaleOffset */

/* STG::MMatrix::MakeScaleOffset(STG::MVector3 const&, STG::MVector3 const&) */

void __thiscall STG::MMatrix::MakeScaleOffset(MMatrix *this,MVector3 *param_1,MVector3 *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar1 = *(float *)param_1;
  fVar2 = *(float *)(param_1 + 4);
  fVar3 = *(float *)(param_1 + 8);
  fVar4 = *(float *)param_2;
  fVar5 = *(float *)(param_2 + 4);
  fVar6 = *(float *)(param_2 + 8);
  *(float *)this = fVar1;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(float *)(this + 0x14) = fVar2;
  *(undefined4 *)(this + 0xc) = 0;
  *(float *)(this + 0x28) = fVar3;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x1c) = 0;
  *(undefined4 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x24) = 0;
  *(undefined4 *)(this + 0x2c) = 0;
  *(undefined4 *)(this + 0x3c) = 0x3f800000;
  *(float *)(this + 0x30) = fVar4 - fVar4 * fVar1;
  *(float *)(this + 0x34) = fVar5 - fVar5 * fVar2;
  *(float *)(this + 0x38) = fVar6 - fVar6 * fVar3;
  return;
}

