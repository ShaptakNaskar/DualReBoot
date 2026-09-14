/* 00051d54 | STG::MMatrix::Transform3x3_Transpose */

/* STG::MMatrix::Transform3x3_Transpose(STG::MMatrix const&, STG::MMatrix&) const */

void __thiscall
STG::MMatrix::Transform3x3_Transpose(MMatrix *this,MMatrix *param_1,MMatrix *param_2)

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
  
  uVar6 = *(undefined4 *)(this + 0x10);
  uVar1 = __mulsf3(uVar6,*(undefined4 *)(param_1 + 0x10));
  uVar2 = __mulsf3(*(undefined4 *)param_1,*(undefined4 *)this);
  uVar1 = __addsf3(uVar1,uVar2);
  uVar8 = *(undefined4 *)(this + 0x20);
  uVar2 = __mulsf3(uVar8,*(undefined4 *)(param_1 + 0x20));
  uVar1 = __addsf3(uVar1,uVar2);
  uVar11 = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)param_2 = uVar1;
  uVar1 = __mulsf3(uVar11,uVar6);
  uVar6 = *(undefined4 *)this;
  uVar2 = __mulsf3(uVar6,*(undefined4 *)(param_1 + 4));
  uVar1 = __addsf3(uVar1,uVar2);
  uVar10 = *(undefined4 *)(param_1 + 0x24);
  uVar2 = __mulsf3(uVar10,uVar8);
  uVar1 = __addsf3(uVar1,uVar2);
  uVar13 = *(undefined4 *)(param_1 + 0x18);
  uVar3 = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(param_2 + 0x10) = uVar1;
  uVar1 = __mulsf3(uVar13,*(undefined4 *)(this + 0x10));
  uVar2 = __mulsf3(uVar3,uVar6);
  uVar1 = __addsf3(uVar1,uVar2);
  uVar7 = *(undefined4 *)(param_1 + 0x28);
  uVar2 = __mulsf3(uVar7,uVar8);
  uVar1 = __addsf3(uVar1,uVar2);
  uVar5 = *(undefined4 *)(param_1 + 0x10);
  uVar12 = *(undefined4 *)(this + 0x14);
  uVar2 = *(undefined4 *)(this + 0x30);
  *(undefined4 *)(param_2 + 0x20) = uVar1;
  uVar6 = *(undefined4 *)param_1;
  *(undefined4 *)(param_2 + 0x30) = uVar2;
  uVar1 = __mulsf3(uVar5,uVar12);
  uVar9 = *(undefined4 *)(this + 0x24);
  uVar2 = __mulsf3(uVar6,*(undefined4 *)(this + 4));
  uVar8 = *(undefined4 *)(param_1 + 0x20);
  uVar1 = __addsf3(uVar1,uVar2);
  uVar2 = __mulsf3(uVar8,uVar9);
  uVar1 = __addsf3(uVar1,uVar2);
  *(undefined4 *)(param_2 + 4) = uVar1;
  uVar4 = *(undefined4 *)(param_1 + 4);
  uVar1 = __mulsf3(uVar12,uVar11);
  uVar11 = *(undefined4 *)(this + 4);
  uVar2 = __mulsf3(uVar4,uVar11);
  uVar1 = __addsf3(uVar1,uVar2);
  uVar2 = __mulsf3(uVar9,uVar10);
  uVar1 = __addsf3(uVar1,uVar2);
  *(undefined4 *)(param_2 + 0x14) = uVar1;
  uVar1 = __mulsf3(uVar13,*(undefined4 *)(this + 0x14));
  uVar2 = __mulsf3(uVar11,uVar3);
  uVar1 = __addsf3(uVar1,uVar2);
  uVar2 = __mulsf3(uVar9,uVar7);
  uVar1 = __addsf3(uVar1,uVar2);
  *(undefined4 *)(param_2 + 0x24) = uVar1;
  uVar3 = *(undefined4 *)(this + 0x18);
  *(undefined4 *)(param_2 + 0x34) = *(undefined4 *)(this + 0x34);
  uVar1 = __mulsf3(uVar3,uVar5);
  uVar2 = __mulsf3(uVar6,*(undefined4 *)(this + 8));
  uVar1 = __addsf3(uVar1,uVar2);
  uVar5 = *(undefined4 *)(this + 0x28);
  uVar2 = __mulsf3(uVar5,uVar8);
  uVar1 = __addsf3(uVar1,uVar2);
  uVar2 = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(param_2 + 8) = uVar1;
  uVar1 = __mulsf3(uVar3,uVar2);
  uVar6 = *(undefined4 *)(this + 8);
  uVar2 = __mulsf3(uVar6,uVar4);
  uVar1 = __addsf3(uVar1,uVar2);
  uVar2 = __mulsf3(uVar5,*(undefined4 *)(param_1 + 0x24));
  uVar1 = __addsf3(uVar1,uVar2);
  *(undefined4 *)(param_2 + 0x18) = uVar1;
  uVar1 = __mulsf3(*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(this + 0x18));
  uVar2 = __mulsf3(uVar6,*(undefined4 *)(param_1 + 8));
  uVar1 = __addsf3(uVar1,uVar2);
  uVar2 = __mulsf3(uVar5,uVar7);
  uVar1 = __addsf3(uVar1,uVar2);
  uVar8 = *(undefined4 *)(this + 0x38);
  *(undefined4 *)(param_2 + 0x28) = uVar1;
  uVar2 = *(undefined4 *)(this + 0x1c);
  uVar6 = *(undefined4 *)(this + 0x2c);
  uVar3 = *(undefined4 *)(this + 0x3c);
  uVar1 = *(undefined4 *)(this + 0xc);
  *(undefined4 *)(param_2 + 0x38) = uVar8;
  *(undefined4 *)(param_2 + 0xc) = uVar1;
  *(undefined4 *)(param_2 + 0x1c) = uVar2;
  *(undefined4 *)(param_2 + 0x2c) = uVar6;
  *(undefined4 *)(param_2 + 0x3c) = uVar3;
  return;
}

