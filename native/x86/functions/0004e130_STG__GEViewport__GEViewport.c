/* 0004e130 | STG::GEViewport::GEViewport */

/* STG::GEViewport::GEViewport(STG::URectangle<unsigned long> const&) */

void __thiscall STG::GEViewport::GEViewport(GEViewport *this,URectangle *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int unaff_EBX;
  uint uVar5;
  uint uVar6;
  float fVar7;
  float fVar8;
  
  FUN_0002e044();
  fVar7 = *(float *)(unaff_EBX + 0x39583);
  uVar1 = *(uint *)(param_1 + 8);
  uVar2 = *(uint *)param_1;
  uVar3 = *(uint *)(param_1 + 4);
  uVar5 = uVar1 - uVar2;
  uVar4 = *(uint *)(param_1 + 0xc);
  *(uint *)(this + 0x34) = uVar5;
  uVar6 = uVar3 - uVar4;
  *(uint *)this = uVar2;
  *(uint *)(this + 0x38) = uVar6;
  *(uint *)(this + 8) = uVar1;
  *(uint *)(this + 0xc) = uVar4;
  *(uint *)(this + 4) = uVar3;
  *(float *)(this + 0x10) = (float)(uVar2 >> 0x10) * fVar7 + (float)(uVar2 & 0xffff);
  *(float *)(this + 0x18) = (float)(uVar1 >> 0x10) * fVar7 + (float)(uVar1 & 0xffff);
  *(float *)(this + 0x1c) = (float)(uVar4 >> 0x10) * fVar7 + (float)(uVar4 & 0xffff);
  *(float *)(this + 0x14) = (float)(uVar3 >> 0x10) * fVar7 + (float)(uVar3 & 0xffff);
  fVar8 = (float)(uVar5 >> 0x10) * fVar7 + (float)(uVar5 & 0xffff);
  *(float *)(this + 0x3c) = fVar8;
  fVar7 = (float)(uVar6 >> 0x10) * fVar7 + (float)(uVar6 & 0xffff);
  *(float *)(this + 0x40) = fVar7;
  *(undefined4 *)(this + 0x20) = 0x3f800000;
  *(undefined4 *)(this + 0x24) = 0x3f800000;
  *(undefined4 *)(this + 0x28) = 0;
  *(undefined4 *)(this + 0x2c) = 0;
  *(float *)(this + 0x30) = fVar8 / fVar7;
  return;
}

