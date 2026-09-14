/* 000520f4 | STG::MMatrix::GetDeterminant */

/* STG::MMatrix::GetDeterminant() const */

void __thiscall STG::MMatrix::GetDeterminant(MMatrix *this)

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
  
  uVar8 = *(undefined4 *)(this + 0x28);
  uVar12 = *(undefined4 *)(this + 0x3c);
  uVar9 = *(undefined4 *)(this + 0x2c);
  uVar10 = *(undefined4 *)(this + 0x38);
  uVar1 = __mulsf3(uVar12,uVar8);
  uVar5 = *(undefined4 *)(this + 0x24);
  uVar2 = __mulsf3(uVar10,uVar9);
  uVar1 = __subsf3(uVar1,uVar2);
  uVar2 = __mulsf3(uVar12,uVar5);
  uVar7 = *(undefined4 *)(this + 0x34);
  uVar3 = __mulsf3(uVar7,uVar9);
  uVar2 = __subsf3(uVar2,uVar3);
  uVar3 = __mulsf3(uVar10,uVar5);
  uVar4 = __mulsf3(uVar7,uVar8);
  uVar3 = __subsf3(uVar3,uVar4);
  uVar6 = *(undefined4 *)(this + 0x20);
  uVar4 = __mulsf3(uVar12,uVar6);
  uVar12 = *(undefined4 *)(this + 0x30);
  uVar9 = __mulsf3(uVar12,uVar9);
  uVar4 = __subsf3(uVar4,uVar9);
  uVar9 = __mulsf3(uVar10,uVar6);
  uVar8 = __mulsf3(uVar12,uVar8);
  uVar9 = __subsf3(uVar9,uVar8);
  uVar8 = __mulsf3(uVar7,uVar6);
  uVar5 = __mulsf3(uVar12,uVar5);
  uVar8 = __subsf3(uVar8,uVar5);
  uVar11 = *(undefined4 *)(this + 0x1c);
  uVar10 = *(undefined4 *)(this + 0x10);
  uVar5 = __mulsf3(uVar8,uVar11);
  uVar12 = __mulsf3(uVar2,uVar10);
  uVar5 = __addsf3(uVar5,uVar12);
  uVar7 = *(undefined4 *)(this + 0x14);
  uVar12 = __mulsf3(uVar4,uVar7);
  uVar5 = __subsf3(uVar5,uVar12);
  uVar5 = __mulsf3(uVar5,*(undefined4 *)(this + 8));
  uVar12 = __mulsf3(uVar3,uVar11);
  uVar6 = __mulsf3(uVar1,uVar7);
  uVar12 = __addsf3(uVar12,uVar6);
  uVar6 = *(undefined4 *)(this + 0x18);
  uVar2 = __mulsf3(uVar2,uVar6);
  uVar2 = __subsf3(uVar12,uVar2);
  uVar2 = __mulsf3(uVar2,*(undefined4 *)this);
  uVar2 = __addsf3(uVar5,uVar2);
  uVar5 = __mulsf3(uVar9,uVar11);
  uVar1 = __mulsf3(uVar1,uVar10);
  uVar1 = __addsf3(uVar5,uVar1);
  uVar4 = __mulsf3(uVar4,uVar6);
  uVar1 = __subsf3(uVar1,uVar4);
  uVar1 = __mulsf3(uVar1,*(undefined4 *)(this + 4));
  uVar1 = __subsf3(uVar2,uVar1);
  uVar2 = __mulsf3(uVar8,uVar6);
  uVar3 = __mulsf3(uVar3,uVar10);
  uVar2 = __addsf3(uVar2,uVar3);
  uVar3 = __mulsf3(uVar9,uVar7);
  uVar2 = __subsf3(uVar2,uVar3);
  uVar2 = __mulsf3(uVar2,*(undefined4 *)(this + 0xc));
  __subsf3(uVar1,uVar2);
  return;
}

