/* 00080fb0 | FUN_00080fb0 */

void FUN_00080fb0(uint *param_1)

{
  uint uVar1;
  int unaff_EBX;
  
  FUN_0002e044();
  pthread_mutex_lock((pthread_mutex_t *)("_ZN3STG10GERenderer21SetMultiSampleEnabledEb" + unaff_EBX)
                    );
  uVar1 = *param_1;
  *param_1 = 0;
  if ((uVar1 & 0x200) != 0) {
    pthread_cond_broadcast
              ((pthread_cond_t *)
               (
               "_ZN3STG7GEScene17ApplyQualityLevelERKNS0_13EQualityLevelERKNS_13GERendererAPI12CapabilitiesE"
               + unaff_EBX + 6));
  }
  pthread_mutex_unlock
            ((pthread_mutex_t *)("_ZN3STG10GERenderer21SetMultiSampleEnabledEb" + unaff_EBX));
  return;
}

