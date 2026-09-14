/* 00070ff4 | FUN_00070ff4 */

void FUN_00070ff4(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int local_14;
  
  local_14 = 0x14;
  iVar1 = FUN_00070e68(param_1,&local_14);
  if (local_14 != 1) {
    puVar3 = (undefined4 *)(iVar1 + param_1);
    local_14 = local_14 + -2;
    *(undefined4 **)(DAT_00071038 + 0x71018 + (param_1 - 1U >> 3) * 4) = puVar3;
    iVar1 = local_14;
    puVar2 = puVar3;
    if (local_14 != 0) {
      do {
        iVar1 = iVar1 + -1;
        *puVar2 = (undefined4 *)((int)puVar2 + param_1);
        puVar2 = (undefined4 *)((int)puVar2 + param_1);
      } while (iVar1 != 0);
      puVar3 = (undefined4 *)(local_14 * param_1 + (int)puVar3);
    }
    *puVar3 = 0;
  }
  return;
}

