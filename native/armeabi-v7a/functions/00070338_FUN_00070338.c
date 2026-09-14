/* 00070338 | FUN_00070338 */

undefined4 FUN_00070338(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = param_4;
  iVar1 = FUN_0006f21c();
  if (iVar1 != 0) {
    return 1;
  }
  uVar2 = (**(code **)(**(int **)(param_1 + 8) + 0x10))
                    (*(int **)(param_1 + 8),param_2,param_3,param_4,uVar2);
  return uVar2;
}

