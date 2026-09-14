/* 000756dc | FUN_000756dc */

void FUN_000756dc(undefined4 *param_1,uint param_2,int param_3)

{
  int iVar1;
  
  if (param_2 < 0x81) {
    iVar1 = ((param_2 + 7 >> 3) - 1) * 4;
    pthread_mutex_lock((pthread_mutex_t *)(param_3 + 0x44));
    *param_1 = *(undefined4 *)(iVar1 + param_3);
    *(undefined4 **)(iVar1 + param_3) = param_1;
    pthread_mutex_unlock((pthread_mutex_t *)(param_3 + 0x44));
  }
  else {
    free(param_1);
  }
  return;
}

