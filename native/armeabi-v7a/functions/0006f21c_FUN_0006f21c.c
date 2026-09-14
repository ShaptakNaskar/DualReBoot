/* 0006f21c | FUN_0006f21c */

bool FUN_0006f21c(undefined4 param_1,undefined4 param_2,undefined4 *param_3,undefined4 *param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00070508();
  if (iVar1 != 0) {
    param_4[1] = param_2;
    uVar2 = *param_3;
    *param_4 = 1;
    *(undefined1 *)(param_4 + 4) = 1;
    param_4[2] = uVar2;
  }
  return iVar1 != 0;
}

