/* 00081520 | FUN_00081520 */

undefined4 FUN_00081520(void)

{
  char *pcVar1;
  undefined4 uVar2;
  int extraout_ECX;
  
  FUN_0002e915();
  LOCK();
  pcVar1 = "_ZN3STG14GEVertexBuffer12AddComponentENS0_6EUsageENS0_5ETypeEm" + extraout_ECX + 0x32;
  uVar2 = *(undefined4 *)pcVar1;
  *(undefined4 *)pcVar1 = *(undefined4 *)pcVar1;
  UNLOCK();
  return uVar2;
}

