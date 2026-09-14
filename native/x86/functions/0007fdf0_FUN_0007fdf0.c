/* 0007fdf0 | FUN_0007fdf0 */

void FUN_0007fdf0(int param_1)

{
  if (param_1 != 0) {
    LOCK();
    *(int *)(param_1 + -0x50) = *(int *)(param_1 + -0x50) + 1;
    UNLOCK();
  }
  return;
}

