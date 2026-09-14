/* 00083f20 | __fixunssfdi */

undefined8 __fixunssfdi(float param_1)

{
  int iVar1;
  int extraout_ECX;
  undefined4 local_14;
  
  FUN_0002e915();
  local_14 = (int)(longlong)(*(double *)(extraout_ECX + 0x3aba) * (double)param_1);
  iVar1 = local_14;
  local_14 = (int)(longlong)
                  ((double)param_1 -
                  ((double)(local_14 + -0x80000000) + *(double *)(extraout_ECX + 0x3ac2)) *
                  *(double *)(extraout_ECX + 0x3aca));
  return CONCAT44(iVar1,local_14);
}

