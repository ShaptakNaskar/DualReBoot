/* 00075790 | _INIT_5 */

void _INIT_5(void)

{
  pthread_mutex_t *__mutex;
  
  __mutex = (pthread_mutex_t *)(DAT_000757b0 + 0x7579a);
  pthread_mutex_init(__mutex,(pthread_mutexattr_t *)0x0);
  __aeabi_atexit(__mutex,DAT_000757b8 + 0x757a8,*(undefined4 *)(DAT_000757b4 + 0x757a6));
  return;
}

