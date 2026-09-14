/* 00080f40 | FUN_00080f40 */

void FUN_00080f40(uint *param_1)

{
  uint uVar1;
  int unaff_EBX;
  
  FUN_0002e044();
  pthread_mutex_lock((pthread_mutex_t *)("_ZN3STG10GERenderer10InitializeEv" + unaff_EBX));
  uVar1 = *param_1;
  *param_1 = 1;
  if ((uVar1 & 0x200) != 0) {
    pthread_cond_broadcast
              ((pthread_cond_t *)("_ZN3STG7GEScene9ApplyTintERKNS_7GEColorE" + unaff_EBX + 0x19));
  }
  pthread_mutex_unlock((pthread_mutex_t *)("_ZN3STG10GERenderer10InitializeEv" + unaff_EBX));
  return;
}

