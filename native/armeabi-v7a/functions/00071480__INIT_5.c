/* 00071480 | _INIT_5 */

void _INIT_5(void)

{
  pthread_mutex_t *__mutex;
  
  __mutex = (pthread_mutex_t *)(DAT_000714a4 + 0x7148a);
  pthread_mutex_init(__mutex,(pthread_mutexattr_t *)0x0);
                    /* WARNING: Could not recover jumptable at 0x000765f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&LAB_000765f8 + DAT_000765f4))
            (__mutex,DAT_000714a8 + 0x71498,*(undefined4 *)(DAT_000714ac + 0x7149a));
  return;
}

