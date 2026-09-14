/* 00050b2c | STG::MLocation::MLocation */

/* STG::MLocation::MLocation() */

void __thiscall STG::MLocation::MLocation(MLocation *this)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(DAT_00050b40 + 0x50b38);
  *(undefined4 *)this = uVar1;
  *(undefined4 *)(this + 4) = uVar1;
  return;
}

