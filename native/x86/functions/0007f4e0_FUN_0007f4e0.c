/* 0007f4e0 | FUN_0007f4e0 */

bool FUN_0007f4e0(undefined4 param_1,undefined4 param_2,undefined4 *param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  char cVar2;
  
  FUN_0002e044();
  cVar2 = FUN_00081700(param_1,param_2);
  if (cVar2 != '\0') {
    param_4[1] = param_2;
    *param_4 = 1;
    uVar1 = *param_3;
    *(undefined1 *)(param_4 + 4) = 1;
    param_4[2] = uVar1;
  }
  return cVar2 != '\0';
}

