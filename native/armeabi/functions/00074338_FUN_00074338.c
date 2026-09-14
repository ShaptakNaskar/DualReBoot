/* 00074338 | FUN_00074338 */

undefined4 FUN_00074338(uint *param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  pthread_cond_t *__cond;
  pthread_mutex_t *__mutex;
  
  __mutex = (pthread_mutex_t *)(DAT_00074390 + 0x74342);
  pthread_mutex_lock(__mutex);
  uVar3 = *param_1;
  if ((int)(uVar3 << 0x1f) < 0) {
LAB_00074370:
    pthread_mutex_unlock((pthread_mutex_t *)(DAT_00074398 + 0x74376));
    uVar2 = 0;
  }
  else {
    if ((int)(uVar3 << 0x17) < 0) {
      __cond = (pthread_cond_t *)(DAT_00074394 + 0x7435a);
      do {
        *param_1 = uVar3 | 0x200;
        pthread_cond_wait(__cond,__mutex);
        uVar3 = *param_1;
        if ((int)(uVar3 << 0x1f) < 0) goto LAB_00074370;
      } while ((int)(uVar3 << 0x17) < 0);
    }
    iVar1 = DAT_0007439c;
    *param_1 = 0x100;
    pthread_mutex_unlock((pthread_mutex_t *)(iVar1 + 0x74388));
    uVar2 = 1;
  }
  return uVar2;
}

