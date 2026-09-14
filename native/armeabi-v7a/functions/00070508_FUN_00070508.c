/* 00070508 | FUN_00070508 */

int FUN_00070508(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = strcmp(*(char **)(param_1 + 4),*(char **)(param_2 + 4));
  iVar2 = 1 - uVar1;
  if (1 < uVar1) {
    iVar2 = 0;
  }
  return iVar2;
}

