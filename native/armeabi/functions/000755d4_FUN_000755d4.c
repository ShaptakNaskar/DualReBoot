/* 000755d4 | FUN_000755d4 */

void FUN_000755d4(int param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int local_14 [2];
  
  local_14[0] = 0x80;
  iVar1 = FUN_000754cc(param_2,local_14,param_1);
  if (local_14[0] != 1) {
    puVar2 = (undefined4 *)(iVar1 + param_2);
    *(undefined4 **)(((param_2 + 7U >> 3) - 1) * 4 + param_1) = puVar2;
    if (local_14[0] != 2) {
      iVar1 = 1;
      puVar3 = puVar2;
      do {
        puVar2 = (undefined4 *)((int)puVar3 + param_2);
        *puVar3 = puVar2;
        iVar1 = iVar1 + 1;
        puVar3 = puVar2;
      } while (local_14[0] + -1 != iVar1);
    }
    *puVar2 = 0;
  }
  return;
}

