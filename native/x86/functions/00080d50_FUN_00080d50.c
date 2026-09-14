/* 00080d50 | FUN_00080d50 */

undefined4 FUN_00080d50(undefined4 param_1)

{
  undefined4 uVar1;
  int extraout_ECX;
  
  FUN_0002e915();
  LOCK();
  uVar1 = *(undefined4 *)("__fixunsdfdi" + extraout_ECX + 4);
  *(undefined4 *)("__fixunsdfdi" + extraout_ECX + 4) = param_1;
  UNLOCK();
  return uVar1;
}

