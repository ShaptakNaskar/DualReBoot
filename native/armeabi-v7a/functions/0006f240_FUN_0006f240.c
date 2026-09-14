/* 0006f240 | FUN_0006f240 */

undefined4 * FUN_0006f240(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 4) = 1;
  if ((param_2 != 0) &&
     (iVar1 = FUN_0006f99c(param_2,DAT_0006f270 + 0x6f25e,*(undefined4 *)(DAT_0006f274 + 0x6f260),0,
                           param_4), iVar1 != 0)) {
    param_1[3] = *(undefined4 *)(iVar1 + 8);
  }
  return param_1;
}

