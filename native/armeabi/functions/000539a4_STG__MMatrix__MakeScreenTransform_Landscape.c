/* 000539a4 | STG::MMatrix::MakeScreenTransform_Landscape */

/* STG::MMatrix::MakeScreenTransform_Landscape(STG::URectangle<unsigned long> const&) */

void __thiscall STG::MMatrix::MakeScreenTransform_Landscape(MMatrix *this,URectangle *param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = __floatunsisf(*(int *)(param_1 + 4) - *(int *)(param_1 + 0xc));
  iVar2 = __divsf3(0x40000000,uVar1);
  uVar1 = __floatunsisf(*(int *)(param_1 + 8) - *(int *)param_1);
  uVar1 = __divsf3(0x40000000,uVar1);
  *(undefined4 *)this = 0;
  *(int *)(this + 4) = iVar2 + -0x80000000;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x10) = uVar1;
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x1c) = 0;
  *(undefined4 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x24) = 0;
  *(undefined4 *)(this + 0x28) = 0x3f800000;
  *(undefined4 *)(this + 0x2c) = 0;
  *(undefined4 *)(this + 0x30) = 0xbf800000;
  *(undefined4 *)(this + 0x34) = 0x3f800000;
  *(undefined4 *)(this + 0x38) = 0;
  *(undefined4 *)(this + 0x3c) = 0x3f800000;
  return;
}

