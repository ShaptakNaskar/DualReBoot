/* 00084f0b | FUN_00084f0b */

void __regparm3 FUN_00084f0b(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 extraout_EDX;
  
  FUN_0002e044();
  FUN_00084c8b();
  if (*(int *)(param_2 + 4 + *(int *)(param_2 + 0xb4) * 8) == 6) {
    *(undefined4 *)(param_1 + 0x4c) = 0;
  }
  else {
    uVar1 = _Unwind_GetGR(param_1,*(int *)(param_2 + 0xb4),extraout_EDX,extraout_EDX);
    *(undefined4 *)(param_1 + 0x4c) = uVar1;
  }
  return;
}

