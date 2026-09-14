/* 00053b28 | STG::MMatrix::MakeScaleOffset */

/* STG::MMatrix::MakeScaleOffset(STG::MVector3 const&, STG::MVector3 const&) */

void __thiscall STG::MMatrix::MakeScaleOffset(MMatrix *this,MVector3 *param_1,MVector3 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  
  iVar6 = *(int *)param_2;
  uVar1 = *(undefined4 *)param_1;
  uVar5 = *(undefined4 *)(param_1 + 4);
  uVar3 = *(undefined4 *)(param_1 + 8);
  iVar4 = *(int *)(param_2 + 4);
  iVar2 = *(int *)(param_2 + 8);
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x1c) = 0;
  *(undefined4 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x24) = 0;
  *(undefined4 *)(this + 0x2c) = 0;
  *(undefined4 *)this = uVar1;
  *(undefined4 *)(this + 0x14) = uVar5;
  *(undefined4 *)(this + 0x28) = uVar3;
  uVar1 = __mulsf3(iVar6 + -0x80000000);
  uVar1 = __addsf3(uVar1,iVar6);
  *(undefined4 *)(this + 0x30) = uVar1;
  uVar1 = __mulsf3(iVar4 + -0x80000000,uVar5);
  uVar1 = __addsf3(uVar1,iVar4);
  *(undefined4 *)(this + 0x34) = uVar1;
  uVar1 = __mulsf3(iVar2 + -0x80000000,uVar3);
  uVar1 = __addsf3(uVar1,iVar2);
  *(undefined4 *)(this + 0x38) = uVar1;
  *(undefined4 *)(this + 0x3c) = 0x3f800000;
  return;
}

