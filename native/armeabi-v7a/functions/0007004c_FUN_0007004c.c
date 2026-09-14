/* 0007004c | FUN_0007004c */

undefined4 FUN_0007004c(uint *param_1)

{
  int iVar1;
  uint uVar2;
  pthread_cond_t *__cond;
  pthread_mutex_t *__mutex;
  
  __mutex = (pthread_mutex_t *)(DAT_000700a0 + 0x70056);
  pthread_mutex_lock(__mutex);
  uVar2 = *param_1;
  if (-1 < (int)(uVar2 << 0x1f)) {
    if ((int)(uVar2 << 0x17) < 0) {
      __cond = (pthread_cond_t *)(DAT_000700a4 + 0x7006a);
      do {
        *param_1 = uVar2 | 0x200;
        pthread_cond_wait(__cond,__mutex);
        uVar2 = *param_1;
        if ((int)(uVar2 << 0x1f) < 0) goto LAB_00070082;
      } while ((int)(uVar2 << 0x17) < 0);
    }
    iVar1 = DAT_000700ac;
    *param_1 = 0x100;
    pthread_mutex_unlock((pthread_mutex_t *)(iVar1 + 0x7009a));
    return 1;
  }
LAB_00070082:
  pthread_mutex_unlock((pthread_mutex_t *)(DAT_000700a8 + 0x70088));
  return 0;
}

