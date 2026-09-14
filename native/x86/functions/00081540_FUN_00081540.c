/* 00081540 | FUN_00081540 */

int FUN_00081540(int param_1)

{
  int iVar1;
  int extraout_ECX;
  
  FUN_0002e915();
  if (param_1 == 0) {
    param_1 = extraout_ECX + -0x105;
  }
  LOCK();
  iVar1 = *(int *)("_ZN3STG14GEVertexBuffer12AddComponentENS0_6EUsageENS0_5ETypeEm" +
                  extraout_ECX + 0x12);
  *(int *)("_ZN3STG14GEVertexBuffer12AddComponentENS0_6EUsageENS0_5ETypeEm" + extraout_ECX + 0x12) =
       param_1;
  UNLOCK();
  return iVar1;
}

