/* 00050c04 | STG::MMatrix::operator= */

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
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  
  uVar2 = *(undefined4 *)(param_1 + 0x28);
  uVar3 = *(undefined4 *)(param_1 + 0x2c);
  uVar12 = *(undefined4 *)param_1;
  uVar13 = *(undefined4 *)(param_1 + 4);
  uVar4 = *(undefined4 *)(param_1 + 0x30);
  uVar11 = *(undefined4 *)(param_1 + 8);
  uVar10 = *(undefined4 *)(param_1 + 0xc);
  uVar5 = *(undefined4 *)(param_1 + 0x34);
  uVar9 = *(undefined4 *)(param_1 + 0x10);
  uVar8 = *(undefined4 *)(param_1 + 0x14);
  uVar7 = *(undefined4 *)(param_1 + 0x18);
  uVar15 = *(undefined4 *)(param_1 + 0x1c);
  uVar14 = *(undefined4 *)(param_1 + 0x24);
  *(undefined4 *)(this + 0x20) = *(undefined4 *)(param_1 + 0x20);
  uVar6 = *(undefined4 *)(param_1 + 0x38);
  uVar1 = *(undefined4 *)(param_1 + 0x3c);
  *(undefined4 *)this = uVar12;
  *(undefined4 *)(this + 4) = uVar13;
  *(undefined4 *)(this + 8) = uVar11;
  *(undefined4 *)(this + 0xc) = uVar10;
  *(undefined4 *)(this + 0x10) = uVar9;
  *(undefined4 *)(this + 0x14) = uVar8;
  *(undefined4 *)(this + 0x18) = uVar7;
  *(undefined4 *)(this + 0x1c) = uVar15;
  *(undefined4 *)(this + 0x24) = uVar14;
  *(undefined4 *)(this + 0x28) = uVar2;
  *(undefined4 *)(this + 0x3c) = uVar1;
  *(undefined4 *)(this + 0x2c) = uVar3;
  *(undefined4 *)(this + 0x30) = uVar4;
  *(undefined4 *)(this + 0x34) = uVar5;
  *(undefined4 *)(this + 0x38) = uVar6;
  return;
}

