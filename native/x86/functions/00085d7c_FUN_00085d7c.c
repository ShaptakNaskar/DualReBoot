/* 00085d7c | FUN_00085d7c */

int FUN_00085d7c(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = 1;
  if (*(uint *)(param_2 + 8) <= *(uint *)(param_3 + 8)) {
    iVar1 = -(uint)(*(uint *)(param_2 + 8) < *(uint *)(param_3 + 8));
  }
  return iVar1;
}

