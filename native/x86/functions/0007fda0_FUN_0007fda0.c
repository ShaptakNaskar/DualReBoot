/* 0007fda0 | FUN_0007fda0 */

bool FUN_0007fda0(void)

{
  int iVar1;
  bool bVar2;
  
  iVar1 = FUN_0007f850();
  bVar2 = false;
  if (iVar1 != 0) {
    bVar2 = *(int *)(iVar1 + 4) == 0;
  }
  return bVar2;
}

