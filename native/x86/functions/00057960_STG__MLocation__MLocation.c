/* 00057960 | STG::MLocation::MLocation */

/* STG::MLocation::MLocation() */

void __thiscall STG::MLocation::MLocation(MLocation *this)

{
  undefined4 uVar1;
  int extraout_ECX;
  
  FUN_0002e915();
  uVar1 = *(undefined4 *)(extraout_ECX + 0x45c8b);
  *(undefined4 *)this = uVar1;
  *(undefined4 *)(this + 4) = uVar1;
  return;
}

