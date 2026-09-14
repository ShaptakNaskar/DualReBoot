/* 00074640 | FUN_00074640 */

undefined4 FUN_00074640(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar3 = param_4;
  iVar1 = FUN_00073488();
  uVar2 = 1;
  if (iVar1 == 0) {
    uVar2 = (**(code **)(**(int **)(param_1 + 8) + 0x10))
                      (*(int **)(param_1 + 8),param_2,param_3,param_4,uVar3);
  }
  return uVar2;
}

