/* 00086312 | FUN_00086312 */

int FUN_00086312(undefined4 param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  uint local_14;
  uint local_10;
  
  uVar1 = FUN_00085ef2();
  FUN_00085f3a(param_2 + 8,&local_14,uVar1,uVar1);
  FUN_00085f3a(param_3 + 8,&local_10);
  iVar2 = 1;
  if (local_14 <= local_10) {
    iVar2 = -(uint)(local_14 < local_10);
  }
  return iVar2;
}

