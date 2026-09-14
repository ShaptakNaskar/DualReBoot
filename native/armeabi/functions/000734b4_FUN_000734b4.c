/* 000734b4 | FUN_000734b4 */

undefined4 * FUN_000734b4(undefined4 *param_1,int param_2)

{
  int iVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 4) = 1;
  if ((param_2 != 0) &&
     (iVar1 = FUN_00073c1c(param_2,DAT_000734ec + 0x734d2,*(undefined4 *)(DAT_000734f0 + 0x734d4),0)
     , iVar1 != 0)) {
    param_1[3] = *(undefined4 *)(iVar1 + 8);
  }
  return param_1;
}

