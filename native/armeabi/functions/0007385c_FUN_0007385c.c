/* 0007385c | FUN_0007385c */

int FUN_0007385c(int *param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  piVar1 = (int *)FUN_00073624();
  if ((*param_1 == DAT_000738c0) && (param_1[1] == DAT_000738c4)) {
    iVar3 = param_1[-8];
    piVar2 = (int *)*piVar1;
  }
  else {
    piVar2 = (int *)0x0;
    if (*piVar1 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00073cc8(DAT_000738c8 + 0x738b2);
    }
    iVar3 = param_1[-8];
  }
  if (iVar3 < 0) {
    iVar3 = -iVar3;
  }
  param_1[-8] = iVar3 + 1;
  if (param_1 + -0xe != piVar2) {
    param_1[-9] = (int)piVar2;
    *piVar1 = (int)(param_1 + -0xe);
  }
  piVar1[1] = piVar1[1] + -1;
  return param_1[-1];
}

