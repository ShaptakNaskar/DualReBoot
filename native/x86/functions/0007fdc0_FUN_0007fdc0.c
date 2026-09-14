/* 0007fdc0 | FUN_0007fdc0 */

void FUN_0007fdc0(int param_1)

{
  int *piVar1;
  int iVar2;
  
  if (param_1 != 0) {
    LOCK();
    piVar1 = (int *)(param_1 + -0x50);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FUN_0007fad0();
      return;
    }
  }
  return;
}

