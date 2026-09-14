/* 0006f528 | FUN_0006f528 */

void FUN_0006f528(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 extraout_r1;
  undefined4 extraout_r2;
  
  if (*(code **)(param_1 + -0x88) != (code *)0x0) {
    (**(code **)(param_1 + -0x88))();
    param_2 = extraout_r1;
    param_3 = extraout_r2;
  }
  (*(code *)(DAT_000765d4 + 0x765d8))(param_1 + -0x90,param_2,param_3,param_4);
  return;
}

