/* 00071538 | __cxa_begin_cleanup */

undefined4 __cxa_begin_cleanup(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_0006f3b0();
  if (DAT_00071580 == *param_1 && DAT_00071584 == param_1[1]) {
    iVar2 = param_1[-6];
    param_1[-6] = iVar2 + 1;
    if (iVar2 + 1 == 1) {
      param_1[-7] = *(int *)(iVar1 + 8);
      *(int **)(iVar1 + 8) = param_1 + -0xe;
    }
    return 1;
  }
  *(int **)(iVar1 + 8) = param_1 + -0xe;
  return 1;
}

