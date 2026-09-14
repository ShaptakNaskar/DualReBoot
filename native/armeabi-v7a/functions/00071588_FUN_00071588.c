/* 00071588 | FUN_00071588 */

int FUN_00071588(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = FUN_0006f3b0();
  iVar2 = *(int *)(iVar1 + 8);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_000703f0();
  }
  if (DAT_000715d0 == *(int *)(iVar2 + 0x38) && DAT_000715d4 == *(int *)(iVar2 + 0x3c)) {
    iVar3 = *(int *)(iVar2 + 0x20) + -1;
    *(int *)(iVar2 + 0x20) = iVar3;
    if (iVar3 == 0) {
      *(undefined4 *)(iVar1 + 8) = *(undefined4 *)(iVar2 + 0x1c);
      *(undefined4 *)(iVar2 + 0x1c) = 0;
      return iVar2 + 0x38;
    }
  }
  else {
    *(undefined4 *)(iVar1 + 8) = 0;
  }
  return iVar2 + 0x38;
}

