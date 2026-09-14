/* 00073488 | FUN_00073488 */

bool FUN_00073488(undefined4 param_1,undefined4 param_2,undefined4 *param_3,undefined4 *param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_000747cc();
  if (iVar1 != 0) {
    param_4[1] = param_2;
    uVar2 = *param_3;
    *param_4 = 1;
    param_4[2] = uVar2;
    *(undefined1 *)(param_4 + 4) = 1;
  }
  return iVar1 != 0;
}

