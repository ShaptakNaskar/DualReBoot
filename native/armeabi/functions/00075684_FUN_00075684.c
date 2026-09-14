/* 00075684 | FUN_00075684 */

undefined4 * FUN_00075684(uint *param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  
  uVar1 = *param_1;
  if (uVar1 < 0x81) {
    *param_1 = uVar1 + 7 & 0xfffffff8;
    pthread_mutex_lock((pthread_mutex_t *)(param_2 + 0x44));
    iVar2 = ((*param_1 + 7 >> 3) - 1) * 4;
    puVar3 = *(undefined4 **)(iVar2 + param_2);
    if (puVar3 == (undefined4 *)0x0) {
      puVar3 = (undefined4 *)FUN_000755d4(param_2);
    }
    else {
      *(undefined4 *)(iVar2 + param_2) = *puVar3;
    }
    pthread_mutex_unlock((pthread_mutex_t *)(param_2 + 0x44));
  }
  else {
    puVar3 = (undefined4 *)std::__malloc_alloc::allocate(uVar1);
  }
  return puVar3;
}

