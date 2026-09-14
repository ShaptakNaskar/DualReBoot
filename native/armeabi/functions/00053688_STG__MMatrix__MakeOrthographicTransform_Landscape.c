/* 00053688 | STG::MMatrix::MakeOrthographicTransform_Landscape */

/* STG::MMatrix::MakeOrthographicTransform_Landscape(float, float, float, float) */

void __thiscall
STG::MMatrix::MakeOrthographicTransform_Landscape
          (MMatrix *this,float param_1,float param_2,float param_3,float param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int in_r2;
  undefined4 in_stack_00000000;
  
  *(undefined4 *)this = 0;
  uVar1 = __divsf3(0x3f800000);
  uVar2 = __mulsf3(in_r2 + -0x80000000,uVar1);
  *(undefined4 *)(this + 4) = uVar2;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x1c) = 0;
  *(undefined4 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x24) = 0;
  *(undefined4 *)(this + 0x10) = uVar1;
  uVar1 = __subsf3(in_stack_00000000);
  uVar1 = __divsf3(0xc0000000,uVar1);
  *(undefined4 *)(this + 0x2c) = 0;
  *(undefined4 *)(this + 0x28) = uVar1;
  *(undefined4 *)(this + 0x30) = 0;
  *(undefined4 *)(this + 0x34) = 0;
  uVar1 = __addsf3(in_stack_00000000);
  uVar2 = __subsf3();
  uVar1 = __divsf3(uVar1,uVar2);
  *(undefined4 *)(this + 0x38) = uVar1;
  *(undefined4 *)(this + 0x3c) = 0x3f800000;
  return;
}

