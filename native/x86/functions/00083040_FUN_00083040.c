/* 00083040 | FUN_00083040 */

void FUN_00083040(int param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int local_10;
  
  local_10 = 0x80;
  iVar1 = FUN_00082f40(param_2,&local_10,param_1);
  if (local_10 != 1) {
    puVar3 = (undefined4 *)(iVar1 + param_2);
    *(undefined4 **)(param_1 + ((param_2 + 7U >> 3) - 1) * 4) = puVar3;
    iVar1 = 1;
    puVar2 = puVar3;
    if (local_10 != 2) {
      do {
        puVar3 = (undefined4 *)((int)puVar2 + param_2);
        *puVar2 = puVar3;
        iVar1 = iVar1 + 1;
        puVar2 = puVar3;
      } while (local_10 + -1 != iVar1);
    }
    *puVar3 = 0;
  }
  return;
}

