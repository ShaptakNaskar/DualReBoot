/* 0006f5f0 | FUN_0006f5f0 */

int FUN_0006f5f0(int *param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  piVar1 = (int *)FUN_0006f3b0();
  piVar2 = (int *)*piVar1;
  if ((DAT_0006f658 != *param_1 || DAT_0006f65c != param_1[1]) && (piVar2 != (int *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_0006fa34(DAT_0006f660 + 0x6f644);
  }
  iVar3 = param_1[-8];
  if (iVar3 < 0) {
    iVar3 = -iVar3;
  }
  param_1[-8] = iVar3 + 1;
  iVar3 = param_1[-1];
  if (param_1 + -0xe != piVar2) {
    param_1[-9] = (int)piVar2;
    *piVar1 = (int)(param_1 + -0xe);
  }
  piVar1[1] = piVar1[1] + -1;
  return iVar3;
}

