/* 000814a0 | FUN_000814a0 */

undefined4 FUN_000814a0(void)

{
  char *pcVar1;
  undefined4 uVar2;
  int extraout_ECX;
  
  FUN_0002e915();
  LOCK();
  pcVar1 = "_ZN3STG10GERenderer12UninitializeEv" + extraout_ECX + 6;
  uVar2 = *(undefined4 *)pcVar1;
  *(undefined4 *)pcVar1 = *(undefined4 *)pcVar1;
  UNLOCK();
  return uVar2;
}

