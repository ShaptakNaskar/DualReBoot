/* 0007052c | FUN_0007052c */

uint FUN_0007052c(int param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = strcmp(*(char **)(param_1 + 4),*(char **)(param_2 + 4));
  return uVar1 >> 0x1f;
}

