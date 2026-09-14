/* 000700b0 | FUN_000700b0 */

void FUN_000700b0(int *param_1)

{
  int iVar1;
  
  pthread_mutex_lock((pthread_mutex_t *)(DAT_000700dc + 0x700b8));
  iVar1 = *param_1;
  *param_1 = 1;
  if (iVar1 << 0x16 < 0) {
    pthread_cond_broadcast((pthread_cond_t *)(DAT_000700e0 + 0x700ce));
  }
  (*(code *)(DAT_000765e4 + 0x765e8))(DAT_000700e4 + 0x700d6);
  return;
}

