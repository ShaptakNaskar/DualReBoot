/* 0004f5f8 | STG::MMatrix::MakeScreenTransform_Landscape */

/* STG::MMatrix::MakeScreenTransform_Landscape(STG::URectangle<unsigned long> const&) */

void __thiscall STG::MMatrix::MakeScreenTransform_Landscape(MMatrix *this,URectangle *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint in_fpscr;
  float fVar5;
  float fVar6;
  
  iVar2 = *(int *)(param_1 + 4);
  iVar4 = *(int *)(param_1 + 8);
  iVar3 = *(int *)(param_1 + 0xc);
  iVar1 = *(int *)param_1;
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 0x28) = 0x3f800000;
  fVar6 = (float)VectorUnsignedToFloat(iVar2 - iVar3,(byte)(in_fpscr >> 0x16) & 3);
  *(undefined4 *)(this + 0x34) = 0x3f800000;
  *(undefined4 *)(this + 0x3c) = 0x3f800000;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  fVar5 = (float)VectorUnsignedToFloat(iVar4 - iVar1,(byte)(in_fpscr >> 0x16) & 3);
  *(undefined4 *)(this + 0x1c) = 0;
  *(undefined4 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x24) = 0;
  *(undefined4 *)(this + 0x2c) = 0;
  *(undefined4 *)(this + 0x38) = 0;
  *(undefined4 *)(this + 0x30) = 0xbf800000;
  *(float *)(this + 0x10) = 2.0 / fVar5;
  *(float *)(this + 4) = -(2.0 / fVar6);
  return;
}

