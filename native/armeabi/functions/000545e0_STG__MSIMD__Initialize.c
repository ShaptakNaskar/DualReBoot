/* 000545e0 | STG::MSIMD::Initialize */

/* STG::MSIMD::Initialize() */

void __thiscall STG::MSIMD::Initialize(MSIMD *this)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(DAT_00054610 + 0x545f8);
  *(undefined4 *)(this + 4) = *(undefined4 *)(DAT_0005460c + 0x545f4);
  this[9] = (MSIMD)0x0;
  *(undefined4 *)this = uVar1;
  this[8] = (MSIMD)0x1;
  return;
}

