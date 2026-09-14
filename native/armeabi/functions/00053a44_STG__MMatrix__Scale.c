/* 00053a44 | STG::MMatrix::Scale */

/* STG::MMatrix::Scale(float, float, float) */

void __thiscall STG::MMatrix::Scale(MMatrix *this,float param_1,float param_2,float param_3)

{
  undefined4 uVar1;
  
  uVar1 = __mulsf3(*(undefined4 *)this);
  *(undefined4 *)this = uVar1;
  uVar1 = __mulsf3(*(undefined4 *)(this + 4));
  *(undefined4 *)(this + 4) = uVar1;
  uVar1 = __mulsf3(*(undefined4 *)(this + 8));
  *(undefined4 *)(this + 8) = uVar1;
  uVar1 = __mulsf3(*(undefined4 *)(this + 0xc));
  *(undefined4 *)(this + 0xc) = uVar1;
  uVar1 = __mulsf3(*(undefined4 *)(this + 0x10));
  *(undefined4 *)(this + 0x10) = uVar1;
  uVar1 = __mulsf3(*(undefined4 *)(this + 0x14));
  *(undefined4 *)(this + 0x14) = uVar1;
  uVar1 = __mulsf3(*(undefined4 *)(this + 0x18));
  *(undefined4 *)(this + 0x18) = uVar1;
  uVar1 = __mulsf3(*(undefined4 *)(this + 0x1c));
  *(undefined4 *)(this + 0x1c) = uVar1;
  uVar1 = __mulsf3(*(undefined4 *)(this + 0x20));
  *(undefined4 *)(this + 0x20) = uVar1;
  uVar1 = __mulsf3(*(undefined4 *)(this + 0x24));
  *(undefined4 *)(this + 0x24) = uVar1;
  uVar1 = __mulsf3(*(undefined4 *)(this + 0x28));
  *(undefined4 *)(this + 0x28) = uVar1;
  uVar1 = __mulsf3(*(undefined4 *)(this + 0x2c));
  *(undefined4 *)(this + 0x2c) = uVar1;
  return;
}

