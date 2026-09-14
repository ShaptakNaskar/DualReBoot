/* 0004f038 | STG::MMatrix::ComputeTranspose */

/* STG::MMatrix::ComputeTranspose(STG::MMatrix&) const */

void __thiscall STG::MMatrix::ComputeTranspose(MMatrix *this,MMatrix *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  
  uVar9 = *(undefined4 *)(this + 0x24);
  uVar4 = *(undefined4 *)(this + 0x20);
  uVar3 = *(undefined4 *)(this + 0x30);
  uVar1 = *(undefined4 *)(this + 0x34);
  uVar2 = *(undefined4 *)(this + 0x38);
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(this + 0x10);
  *(undefined4 *)(param_1 + 8) = uVar4;
  *(undefined4 *)(param_1 + 0x18) = uVar9;
  *(undefined4 *)(param_1 + 0x1c) = uVar1;
  *(undefined4 *)(param_1 + 0x2c) = uVar2;
  uVar7 = *(undefined4 *)this;
  *(undefined4 *)(param_1 + 0xc) = uVar3;
  uVar8 = *(undefined4 *)(this + 4);
  uVar6 = *(undefined4 *)(this + 0x14);
  uVar5 = *(undefined4 *)(this + 8);
  uVar9 = *(undefined4 *)(this + 0x18);
  uVar4 = *(undefined4 *)(this + 0x28);
  uVar3 = *(undefined4 *)(this + 0xc);
  uVar10 = *(undefined4 *)(this + 0x1c);
  uVar1 = *(undefined4 *)(this + 0x2c);
  uVar2 = *(undefined4 *)(this + 0x3c);
  *(undefined4 *)param_1 = uVar7;
  *(undefined4 *)(param_1 + 0x10) = uVar8;
  *(undefined4 *)(param_1 + 0x14) = uVar6;
  *(undefined4 *)(param_1 + 0x20) = uVar5;
  *(undefined4 *)(param_1 + 0x24) = uVar9;
  *(undefined4 *)(param_1 + 0x28) = uVar4;
  *(undefined4 *)(param_1 + 0x30) = uVar3;
  *(undefined4 *)(param_1 + 0x34) = uVar10;
  *(undefined4 *)(param_1 + 0x38) = uVar1;
  *(undefined4 *)(param_1 + 0x3c) = uVar2;
  return;
}

