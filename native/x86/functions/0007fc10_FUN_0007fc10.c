/* 0007fc10 | FUN_0007fc10 */

int FUN_0007fc10(int *param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int unaff_EBX;
  
  FUN_0002e044();
  piVar2 = (int *)FUN_0007f850();
  if (param_1[1] == 0x474e5543 && *param_1 == 0x432b2b00) {
    iVar1 = param_1[-6];
    piVar3 = (int *)*piVar2;
  }
  else {
    if (*piVar2 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00080360(unaff_EBX + 0x7fd7);
    }
    iVar1 = param_1[-6];
    piVar3 = (int *)0x0;
  }
  if (iVar1 < 0) {
    iVar1 = -iVar1;
  }
  param_1[-6] = iVar1 + 1;
  if (param_1 + -0xc != piVar3) {
    param_1[-7] = (int)piVar3;
    *piVar2 = (int)(param_1 + -0xc);
  }
  piVar2[1] = piVar2[1] + -1;
  return param_1[-1];
}

