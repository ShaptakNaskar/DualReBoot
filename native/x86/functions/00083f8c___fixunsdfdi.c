/* 00083f8c | __fixunsdfdi */

undefined8 __fixunsdfdi(double param_1)

{
  int iVar1;
  int extraout_ECX;
  undefined4 local_14;
  
  FUN_0002e915();
  local_14 = (int)(longlong)(*(double *)(extraout_ECX + 0x3a4f) * param_1);
  iVar1 = local_14;
  local_14 = (int)(longlong)
                  (param_1 -
                  ((double)(local_14 + -0x80000000) + *(double *)(extraout_ECX + 0x3a57)) *
                  *(double *)(extraout_ECX + 0x3a5f));
  return CONCAT44(iVar1,local_14);
}

