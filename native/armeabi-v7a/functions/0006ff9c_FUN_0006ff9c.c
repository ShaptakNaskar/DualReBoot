/* 0006ff9c | FUN_0006ff9c */

undefined4 FUN_0006ff9c(void)

{
  bool bVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  
  puVar3 = (undefined4 *)(DAT_0006ffc4 + 0x6ffa4);
  DataMemoryBarrier(0x1f);
  do {
    ExclusiveAccess(puVar3);
    uVar2 = *puVar3;
    bVar1 = (bool)hasExclusiveAccess(puVar3);
  } while (!bVar1);
  *puVar3 = uVar2;
  DataMemoryBarrier(0x1f);
  return uVar2;
}

