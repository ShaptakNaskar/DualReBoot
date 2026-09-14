/* 0007583c | __cxa_begin_cleanup */

undefined4 __cxa_begin_cleanup(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_00073624();
  if ((*param_1 == DAT_00075870) && (param_1[1] == DAT_00075874)) {
    iVar2 = param_1[-6];
    param_1[-6] = iVar2 + 1;
    if (iVar2 + 1 == 1) {
      param_1[-7] = *(int *)(iVar1 + 8);
      *(int **)(iVar1 + 8) = param_1 + -0xe;
    }
  }
  else {
    *(int **)(iVar1 + 8) = param_1 + -0xe;
  }
  return 1;
}

