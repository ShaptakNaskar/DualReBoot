/* 00080eb0 | FUN_00080eb0 */

undefined4 FUN_00080eb0(uint *param_1)

{
  pthread_mutex_t *__mutex;
  uint uVar1;
  int unaff_EBX;
  
  FUN_0002e044();
  __mutex = (pthread_mutex_t *)("_ZNK3STG5UTime17GetCurrentTime_USEv" + unaff_EBX + 2);
  pthread_mutex_lock(__mutex);
  uVar1 = *param_1;
  if ((uVar1 & 1) == 0) {
    do {
      if ((uVar1 & 0x100) == 0) {
        *param_1 = 0x100;
        pthread_mutex_unlock(__mutex);
        return 1;
      }
      *param_1 = uVar1 | 0x200;
      pthread_cond_wait((pthread_cond_t *)
                        ("_ZNK3STG7GEScene22ComputeShownModelsListERNS_11UArrayFixedIbmEE" +
                        unaff_EBX + 0x1f),__mutex);
      uVar1 = *param_1;
    } while ((uVar1 & 1) == 0);
  }
  pthread_mutex_unlock(__mutex);
  return 0;
}

