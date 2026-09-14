/* 0004e464 | STG::MMatrix::operator= */

/* STG::MMatrix::TEMPNAMEPLACEHOLDERVALUE(STG::MMatrix const&) */

void __thiscall STG::MMatrix::operator=(MMatrix *this,MMatrix *param_1)

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
  
  uVar8 = *(undefined4 *)param_1;
  uVar6 = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(this + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
  uVar5 = *(undefined4 *)(param_1 + 8);
  uVar4 = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(this + 0x28) = *(undefined4 *)(param_1 + 0x28);
  uVar3 = *(undefined4 *)(param_1 + 0x10);
  uVar2 = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(this + 0x2c) = *(undefined4 *)(param_1 + 0x2c);
  uVar10 = *(undefined4 *)(param_1 + 0x18);
  uVar7 = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)(this + 0x30) = *(undefined4 *)(param_1 + 0x30);
  uVar1 = *(undefined4 *)(param_1 + 0x34);
  uVar9 = *(undefined4 *)(param_1 + 0x24);
  *(undefined4 *)this = uVar8;
  *(undefined4 *)(this + 0x34) = uVar1;
  uVar8 = *(undefined4 *)(param_1 + 0x38);
  uVar1 = *(undefined4 *)(param_1 + 0x3c);
  *(undefined4 *)(this + 4) = uVar6;
  *(undefined4 *)(this + 0x38) = uVar8;
  *(undefined4 *)(this + 8) = uVar5;
  *(undefined4 *)(this + 0xc) = uVar4;
  *(undefined4 *)(this + 0x10) = uVar3;
  *(undefined4 *)(this + 0x14) = uVar2;
  *(undefined4 *)(this + 0x18) = uVar10;
  *(undefined4 *)(this + 0x20) = uVar7;
  *(undefined4 *)(this + 0x24) = uVar9;
  *(undefined4 *)(this + 0x3c) = uVar1;
  return;
}

