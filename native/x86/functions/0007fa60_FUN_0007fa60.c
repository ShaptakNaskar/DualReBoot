/* 0007fa60 | FUN_0007fa60 */

undefined4 * FUN_0007fa60(void)

{
  int iVar1;
  undefined4 *puVar2;
  int unaff_EBX;
  undefined4 *puVar3;
  byte bVar4;
  
  bVar4 = 0;
  iVar1 = FUN_0002e044();
  puVar2 = malloc(iVar1 + 0x50);
  if (puVar2 != (undefined4 *)0x0) {
    puVar3 = puVar2;
    for (iVar1 = 0x14; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar3 = 0;
      puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
    }
    return puVar2 + 0x14;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00080360(unaff_EBX + 0x80ff);
}

