/* 0004656c | STG::GEViewport::GEViewport */

/* STG::GEViewport::GEViewport(STG::URectangle<unsigned long> const&) */

void __thiscall STG::GEViewport::GEViewport(GEViewport *this,URectangle *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint in_fpscr;
  float fVar5;
  undefined4 uVar6;
  float fVar7;
  undefined4 uVar8;
  
  iVar3 = *(int *)param_1;
  iVar2 = *(int *)(param_1 + 4);
  iVar4 = *(int *)(param_1 + 8);
  iVar1 = *(int *)(param_1 + 0xc);
  fVar5 = (float)VectorUnsignedToFloat(iVar4 - iVar3,(byte)(in_fpscr >> 0x16) & 3);
  *(undefined4 *)(this + 0x28) = 0;
  *(int *)this = iVar3;
  *(int *)(this + 4) = iVar2;
  *(int *)(this + 8) = iVar4;
  *(undefined4 *)(this + 0x2c) = 0;
  *(int *)(this + 0xc) = iVar1;
  *(int *)(this + 0x34) = iVar4 - iVar3;
  fVar7 = (float)VectorUnsignedToFloat(iVar2 - iVar1,(byte)(in_fpscr >> 0x16) & 3);
  *(float *)(this + 0x3c) = fVar5;
  *(int *)(this + 0x38) = iVar2 - iVar1;
  *(undefined4 *)(this + 0x20) = 0x3f800000;
  *(undefined4 *)(this + 0x24) = 0x3f800000;
  *(float *)(this + 0x40) = fVar7;
  *(float *)(this + 0x30) = fVar5 / fVar7;
  uVar6 = VectorUnsignedToFloat(iVar3,(byte)(in_fpscr >> 0x16) & 3);
  uVar8 = VectorUnsignedToFloat(iVar4,(byte)(in_fpscr >> 0x16) & 3);
  *(undefined4 *)(this + 0x10) = uVar6;
  *(undefined4 *)(this + 0x18) = uVar8;
  uVar6 = VectorUnsignedToFloat(iVar1,(byte)(in_fpscr >> 0x16) & 3);
  uVar8 = VectorUnsignedToFloat(iVar2,(byte)(in_fpscr >> 0x16) & 3);
  *(undefined4 *)(this + 0x1c) = uVar6;
  *(undefined4 *)(this + 0x14) = uVar8;
  return;
}

