/* 000489d4 | STG::GEViewport::GEViewport */

/* STG::GEViewport::GEViewport(STG::URectangle<unsigned long> const&) */

GEViewport * __thiscall STG::GEViewport::GEViewport(GEViewport *this,URectangle *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar5 = *(int *)(param_1 + 0xc);
  iVar3 = *(int *)param_1;
  iVar4 = *(int *)(param_1 + 4);
  iVar6 = *(int *)(param_1 + 8);
  *(int *)this = iVar3;
  *(int *)(this + 4) = iVar4;
  *(int *)(this + 8) = iVar6;
  *(int *)(this + 0xc) = iVar5;
  *(int *)(this + 0x34) = iVar6 - iVar3;
  *(int *)(this + 0x38) = iVar4 - iVar5;
  uVar1 = __floatunsisf(iVar3);
  *(undefined4 *)(this + 0x10) = uVar1;
  uVar1 = __floatunsisf(iVar6);
  *(undefined4 *)(this + 0x18) = uVar1;
  uVar1 = __floatunsisf(iVar5);
  *(undefined4 *)(this + 0x1c) = uVar1;
  uVar1 = __floatunsisf(iVar4);
  *(undefined4 *)(this + 0x14) = uVar1;
  uVar1 = __floatunsisf(iVar6 - iVar3);
  *(undefined4 *)(this + 0x3c) = uVar1;
  uVar2 = __floatunsisf(iVar4 - iVar5);
  *(undefined4 *)(this + 0x40) = uVar2;
  uVar1 = __divsf3(uVar1,uVar2);
  *(undefined4 *)(this + 0x30) = uVar1;
  *(undefined4 *)(this + 0x20) = 0x3f800000;
  *(undefined4 *)(this + 0x24) = 0x3f800000;
  *(undefined4 *)(this + 0x28) = 0;
  *(undefined4 *)(this + 0x2c) = 0;
  return this;
}

