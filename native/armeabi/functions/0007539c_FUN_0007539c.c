/* 0007539c | FUN_0007539c */

void * FUN_0007539c(void)

{
  void *__s;
  
  __s = *(void **)(DAT_000753dc + 0x753a4);
  if (__s == (void *)0x0) {
    __s = operator_new(0x48);
    *(undefined4 *)((int)__s + 0x40) = 0;
    pthread_mutex_init((pthread_mutex_t *)((int)__s + 0x44),(pthread_mutexattr_t *)0x0);
    memset(__s,0,0x40);
  }
  else {
    *(undefined4 *)(DAT_000753dc + 0x753a4) = *(undefined4 *)((int)__s + 0x40);
  }
  return __s;
}

