/* 00070394 | FUN_00070394 */

undefined4 FUN_00070394(void)

{
  bool bVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  
  puVar3 = (undefined4 *)(DAT_000703bc + 0x7039c);
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

