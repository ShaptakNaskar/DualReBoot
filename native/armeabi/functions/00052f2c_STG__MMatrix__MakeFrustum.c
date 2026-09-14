/* 00052f2c | STG::MMatrix::MakeFrustum */

/* STG::MMatrix::MakeFrustum(float, float, float, float, float, float) */

void __thiscall
STG::MMatrix::MakeFrustum
          (MMatrix *this,float param_1,float param_2,float param_3,float param_4,float param_5,
          float param_6)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 in_stack_00000000;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  
  uVar1 = __addsf3(in_stack_00000004,in_stack_00000004);
  uVar2 = __subsf3();
  uVar2 = __divsf3(0x3f800000,uVar2);
  uVar3 = __mulsf3(uVar1,uVar2);
  *(undefined4 *)this = uVar3;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  uVar3 = __subsf3(in_stack_00000000);
  uVar3 = __divsf3(0x3f800000,uVar3);
  uVar4 = __mulsf3(uVar3,uVar1);
  *(undefined4 *)(this + 0x14) = uVar4;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x1c) = 0;
  uVar4 = __addsf3();
  uVar2 = __mulsf3(uVar2,uVar4);
  *(undefined4 *)(this + 0x20) = uVar2;
  uVar2 = __addsf3(in_stack_00000000);
  uVar2 = __mulsf3(uVar3,uVar2);
  *(undefined4 *)(this + 0x24) = uVar2;
  uVar2 = __subsf3(in_stack_00000004,in_stack_00000008);
  uVar2 = __divsf3(0x3f800000,uVar2);
  uVar3 = __addsf3(in_stack_00000008,in_stack_00000004);
  uVar3 = __mulsf3(uVar2,uVar3);
  *(undefined4 *)(this + 0x28) = uVar3;
  *(undefined4 *)(this + 0x2c) = 0xbf800000;
  *(undefined4 *)(this + 0x30) = 0;
  *(undefined4 *)(this + 0x34) = 0;
  uVar1 = __mulsf3(in_stack_00000008,uVar1);
  uVar1 = __mulsf3(uVar1,uVar2);
  *(undefined4 *)(this + 0x3c) = 0;
  *(undefined4 *)(this + 0x38) = uVar1;
  return;
}

