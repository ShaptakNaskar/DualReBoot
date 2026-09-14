/* 00053824 | STG::MMatrix::MakePerspectiveTransform_Landscape */

/* STG::MMatrix::MakePerspectiveTransform_Landscape(float, float, float, float) */

void __thiscall
STG::MMatrix::MakePerspectiveTransform_Landscape
          (MMatrix *this,float param_1,float param_2,float param_3,float param_4)

{
  undefined4 extraout_r0;
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  float __x;
  undefined4 in_stack_00000000;
  
  __x = (float)__mulsf3();
  tanf(__x);
  iVar1 = __divsf3(0x3f800000,extraout_r0);
  uVar2 = __subsf3();
  uVar2 = __divsf3(0x3f800000,uVar2);
  *(undefined4 *)this = 0;
  uVar3 = __mulsf3(iVar1 + -0x80000000);
  *(undefined4 *)(this + 4) = uVar3;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  *(int *)(this + 0x10) = iVar1;
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x1c) = 0;
  *(undefined4 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x24) = 0;
  uVar3 = __addsf3(in_stack_00000000);
  uVar3 = __mulsf3(uVar2,uVar3);
  *(undefined4 *)(this + 0x2c) = 0xbf800000;
  *(undefined4 *)(this + 0x28) = uVar3;
  *(undefined4 *)(this + 0x30) = 0;
  *(undefined4 *)(this + 0x34) = 0;
  uVar3 = __addsf3();
  uVar3 = __mulsf3(uVar3,in_stack_00000000);
  uVar2 = __mulsf3(uVar3,uVar2);
  *(undefined4 *)(this + 0x3c) = 0;
  *(undefined4 *)(this + 0x38) = uVar2;
  return;
}

