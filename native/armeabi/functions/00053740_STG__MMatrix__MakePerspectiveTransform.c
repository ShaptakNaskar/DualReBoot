/* 00053740 | STG::MMatrix::MakePerspectiveTransform */

/* STG::MMatrix::MakePerspectiveTransform(float, float, float, float) */

void __thiscall
STG::MMatrix::MakePerspectiveTransform
          (MMatrix *this,float param_1,float param_2,float param_3,float param_4)

{
  undefined4 extraout_r0;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  float __x;
  undefined4 in_stack_00000000;
  
  __x = (float)__mulsf3();
  tanf(__x);
  uVar1 = __divsf3(0x3f800000,extraout_r0);
  uVar2 = __subsf3();
  uVar2 = __divsf3(0x3f800000,uVar2);
  uVar3 = __divsf3(uVar1);
  *(undefined4 *)this = uVar3;
  *(undefined4 *)(this + 0x14) = uVar1;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x1c) = 0;
  *(undefined4 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x24) = 0;
  uVar1 = __addsf3(in_stack_00000000);
  uVar1 = __mulsf3(uVar2,uVar1);
  *(undefined4 *)(this + 0x2c) = 0xbf800000;
  *(undefined4 *)(this + 0x28) = uVar1;
  *(undefined4 *)(this + 0x30) = 0;
  *(undefined4 *)(this + 0x34) = 0;
  uVar1 = __addsf3();
  uVar1 = __mulsf3(uVar1,in_stack_00000000);
  uVar1 = __mulsf3(uVar1,uVar2);
  *(undefined4 *)(this + 0x3c) = 0;
  *(undefined4 *)(this + 0x38) = uVar1;
  return;
}

