/* 00083150 | FUN_00083150 */

void FUN_00083150(undefined4 *param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  
  FUN_0002e044();
  if (param_2 < 0x81) {
    iVar2 = FUN_00082e00();
    iVar1 = (param_2 + 7 >> 3) - 1;
    *param_1 = *(undefined4 *)(iVar2 + iVar1 * 4);
    *(undefined4 **)(iVar2 + iVar1 * 4) = param_1;
  }
  else {
    free(param_1);
  }
  return;
}

