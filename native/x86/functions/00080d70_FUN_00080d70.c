/* 00080d70 | FUN_00080d70 */

undefined4 FUN_00080d70(void)

{
  char *pcVar1;
  undefined4 uVar2;
  int extraout_ECX;
  
  FUN_0002e915();
  LOCK();
  pcVar1 = "_ZN3STG7GEScene24Internal_UpdateTimeOfDayEv" + extraout_ECX + 0x10;
  uVar2 = *(undefined4 *)pcVar1;
  *(undefined4 *)pcVar1 = *(undefined4 *)pcVar1;
  UNLOCK();
  return uVar2;
}

