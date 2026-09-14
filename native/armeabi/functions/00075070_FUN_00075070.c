/* 00075070 | FUN_00075070 */

void FUN_00075070(int param_1)

{
  int *piVar1;
  pthread_mutex_t *__mutex;
  
  __mutex = (pthread_mutex_t *)(DAT_00075090 + 0x7507a);
  pthread_mutex_lock(__mutex);
  piVar1 = (int *)(DAT_00075094 + 0x75086);
  *(int *)(param_1 + 0x40) = *piVar1;
  *piVar1 = param_1;
  pthread_mutex_unlock(__mutex);
  return;
}

