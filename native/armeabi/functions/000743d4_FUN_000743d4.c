/* 000743d4 | FUN_000743d4 */

void FUN_000743d4(int *param_1)

{
  int iVar1;
  
  pthread_mutex_lock((pthread_mutex_t *)(DAT_000743fc + 0x743de));
  iVar1 = *param_1;
  *param_1 = 0;
  if (iVar1 << 0x16 < 0) {
    pthread_cond_broadcast((pthread_cond_t *)(DAT_00074400 + 0x743f0));
  }
  pthread_mutex_unlock((pthread_mutex_t *)(DAT_00074404 + 0x743f8));
  return;
}

