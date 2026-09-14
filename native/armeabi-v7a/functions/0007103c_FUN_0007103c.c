/* 0007103c | FUN_0007103c */

undefined4 * FUN_0007103c(uint *param_1)

{
  pthread_mutex_t *__mutex;
  uint uVar1;
  undefined4 *puVar2;
  
  uVar1 = *param_1 + 7 & 0xfffffff8;
  __mutex = (pthread_mutex_t *)(DAT_00071088 + 0x7104e);
  *param_1 = uVar1;
  pthread_mutex_lock(__mutex);
  uVar1 = uVar1 - 1 >> 3;
  puVar2 = *(undefined4 **)(DAT_0007108c + 0x7105c + uVar1 * 4);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)FUN_00070ff4(*param_1);
  }
  else {
    *(undefined4 *)(DAT_0007108c + 0x7105c + uVar1 * 4) = *puVar2;
  }
  pthread_mutex_unlock((pthread_mutex_t *)(DAT_00071090 + 0x7106c));
  return puVar2;
}

