/* 000813c0 | FUN_000813c0 */

undefined4 FUN_000813c0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  undefined4 extraout_EDX;
  undefined4 uVar2;
  
  FUN_0002e044();
  cVar1 = FUN_0007f4e0(extraout_EDX,param_2,param_3,param_4);
  uVar2 = 1;
  if (cVar1 == '\0') {
    uVar2 = (**(code **)(**(int **)(param_1 + 8) + 0x10))
                      (*(int **)(param_1 + 8),param_2,param_3,param_4);
  }
  return uVar2;
}

