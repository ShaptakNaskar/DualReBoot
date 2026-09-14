/* 0007fcc0 | FUN_0007fcc0 */

void FUN_0007fcc0(void)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int unaff_EBX;
  
  FUN_0002e044();
  piVar2 = (int *)FUN_0007fa20();
  iVar1 = *piVar2;
  if (iVar1 != 0) {
    if (*(int *)(iVar1 + 0x34) == 0x474e5543 && *(int *)(iVar1 + 0x30) == 0x432b2b00) {
      iVar3 = *(int *)(iVar1 + 0x18);
      if (iVar3 < 0) {
        iVar3 = iVar3 + 1;
        if (iVar3 == 0) {
          *piVar2 = *(int *)(iVar1 + 0x14);
        }
      }
      else {
        iVar3 = iVar3 + -1;
        if (iVar3 == 0) {
          *piVar2 = *(int *)(iVar1 + 0x14);
          FUN_0007fad0(iVar1 + 0x50);
          return;
        }
        if (iVar3 == -1) {
                    /* WARNING: Subroutine does not return */
          FUN_00080360(unaff_EBX + 0x7f47);
        }
      }
      *(int *)(iVar1 + 0x18) = iVar3;
      return;
    }
    *piVar2 = 0;
    _Unwind_DeleteException(iVar1 + 0x30);
  }
  return;
}

