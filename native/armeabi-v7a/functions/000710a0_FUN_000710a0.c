/* 000710a0 | FUN_000710a0 */

void * FUN_000710a0(void)

{
  void *pvVar1;
  
  pvVar1 = *(void **)(DAT_000710e0 + 0x710a8);
  if (pvVar1 != (void *)0x0) {
    *(int *)(DAT_000710e0 + 0x710a8) = *(int *)((int)pvVar1 + 0x40);
    return pvVar1;
  }
  pvVar1 = operator_new(0x48);
  *(undefined4 *)((int)pvVar1 + 0x40) = 0;
  pthread_mutex_init((pthread_mutex_t *)((int)pvVar1 + 0x44),(pthread_mutexattr_t *)0x0);
  memset(pvVar1,0,0x40);
  return pvVar1;
}

