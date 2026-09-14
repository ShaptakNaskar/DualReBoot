/* 0007fbb0 | FUN_0007fbb0 */

void FUN_0007fbb0(void)

{
  int *piVar1;
  int extraout_EDX;
  int iVar2;
  int unaff_EBX;
  
  FUN_0002e044();
  piVar1 = (int *)FUN_0007f850();
  iVar2 = *piVar1;
  if (iVar2 != 0) {
    if (*(int *)(iVar2 + 0x34) == 0x474e5543 && *(int *)(iVar2 + 0x30) == 0x432b2b00)
    goto LAB_0007fbef;
    *piVar1 = 0;
    do {
      FUN_0007f9d0();
      iVar2 = extraout_EDX;
LAB_0007fbef:
      *(int *)(iVar2 + 0x18) = -*(int *)(iVar2 + 0x18);
    } while( true );
  }
                    /* WARNING: Subroutine does not return */
  FUN_00080360(unaff_EBX + 0x8009);
}

