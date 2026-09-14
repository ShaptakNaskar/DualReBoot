/* 0007fad0 | FUN_0007fad0 */

void FUN_0007fad0(int param_1)

{
  FUN_0002e044();
  if (*(code **)(param_1 + -0x48) != (code *)0x0) {
    (**(code **)(param_1 + -0x48))(param_1);
  }
  free((void *)(param_1 + -0x50));
  return;
}

