/* 00075124 | FUN_00075124 */

void FUN_00075124(undefined4 *param_1,int param_2)

{
  int iVar1;
  pthread_mutex_t *__mutex;
  int iVar2;
  
  __mutex = (pthread_mutex_t *)(DAT_0007514c + 0x7512e);
  pthread_mutex_lock(__mutex);
  iVar1 = DAT_00075150 + 0x7513c;
  iVar2 = (param_2 - 1U >> 3) * 4;
  *param_1 = *(undefined4 *)(iVar2 + iVar1);
  *(undefined4 **)(iVar2 + iVar1) = param_1;
  pthread_mutex_unlock(__mutex);
  return;
}

