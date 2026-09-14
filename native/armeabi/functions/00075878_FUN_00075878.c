/* 00075878 | FUN_00075878 */

int FUN_00075878(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = FUN_00073624();
  iVar3 = *(int *)(iVar1 + 8);
  if (iVar3 != 0) {
    if ((*(int *)(iVar3 + 0x38) == DAT_000758b4) && (*(int *)(iVar3 + 0x3c) == DAT_000758b8)) {
      iVar2 = *(int *)(iVar3 + 0x20) + -1;
      *(int *)(iVar3 + 0x20) = iVar2;
      if (iVar2 == 0) {
        *(undefined4 *)(iVar1 + 8) = *(undefined4 *)(iVar3 + 0x1c);
        *(undefined4 *)(iVar3 + 0x1c) = 0;
      }
    }
    else {
      *(undefined4 *)(iVar1 + 8) = 0;
    }
    return iVar3 + 0x38;
  }
                    /* WARNING: Subroutine does not return */
  FUN_000746d4();
}

