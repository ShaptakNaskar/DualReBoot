/* 000814c0 | FUN_000814c0 */

int FUN_000814c0(int param_1)

{
  int iVar1;
  int extraout_ECX;
  
  FUN_0002e915();
  if (param_1 == 0) {
    param_1 = extraout_ECX + -0x85;
  }
  LOCK();
  iVar1 = *(int *)("_ZN3STG10GERenderer19DeallocateResourcesEv" + extraout_ECX + 0x11);
  *(int *)("_ZN3STG10GERenderer19DeallocateResourcesEv" + extraout_ECX + 0x11) = param_1;
  UNLOCK();
  return iVar1;
}

