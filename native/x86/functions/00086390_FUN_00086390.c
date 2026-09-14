/* 00086390 | FUN_00086390 */

int FUN_00086390(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 extraout_ECX;
  uint local_14;
  uint local_10;
  
  FUN_000860ff();
  FUN_00085ef2();
  FUN_00085f3a(param_2 + 8,&local_14,extraout_ECX,extraout_ECX);
  FUN_000860ff();
  FUN_00085ef2();
  FUN_00085f3a(param_3 + 8,&local_10);
  iVar1 = 1;
  if (local_14 <= local_10) {
    iVar1 = -(uint)(local_14 < local_10);
  }
  return iVar1;
}

