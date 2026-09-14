/* 000743a0 | FUN_000743a0 */

void FUN_000743a0(int *param_1)

{
  int iVar1;
  
  pthread_mutex_lock((pthread_mutex_t *)(DAT_000743c8 + 0x743aa));
  iVar1 = *param_1;
  *param_1 = 1;
  if (iVar1 << 0x16 < 0) {
    pthread_cond_broadcast((pthread_cond_t *)(DAT_000743cc + 0x743bc));
  }
  pthread_mutex_unlock((pthread_mutex_t *)(DAT_000743d0 + 0x743c4));
  return;
}

