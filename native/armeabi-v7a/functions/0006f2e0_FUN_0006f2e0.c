/* 0006f2e0 | FUN_0006f2e0 */

void FUN_0006f2e0(undefined4 *param_1)

{
  int iVar1;
  pthread_mutex_t *__mutex;
  
  iVar1 = DAT_0006f308;
  if (param_1 == (undefined4 *)0x0) {
    return;
  }
  __mutex = (pthread_mutex_t *)(DAT_0006f308 + 0x6f2f8);
  pthread_mutex_lock(__mutex);
  *param_1 = *(undefined4 *)(iVar1 + 0x6f300);
  *(undefined4 **)(iVar1 + 0x6f300) = param_1;
  (*(code *)(DAT_000765e4 + 0x765e8))(__mutex);
  return;
}

