/* 00077df8 | FUN_00077df8 */

int FUN_00077df8(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = (*DAT_00077e20)(param_2,param_3,param_1,DAT_00077e20,param_4);
  iVar2 = 1 - uVar1;
  if (1 < uVar1) {
    iVar2 = 0;
  }
  return iVar2;
}

