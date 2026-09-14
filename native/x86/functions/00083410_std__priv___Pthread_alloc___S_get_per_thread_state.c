/* 00083410 | std::priv::_Pthread_alloc::_S_get_per_thread_state */

/* std::priv::_Pthread_alloc::_S_get_per_thread_state() */

void * std::priv::_Pthread_alloc::_S_get_per_thread_state(void)

{
  void *pvVar1;
  int iVar2;
  undefined4 uVar3;
  int unaff_EBX;
  
  FUN_0002e044();
  if (("_ZN3STG10GERenderer19DeallocateResourcesEv"[unaff_EBX + 0x11] != '\0') &&
     (pvVar1 = pthread_getspecific(*(pthread_key_t *)
                                    ("_ZN3STG10GERenderer19DeallocateResourcesEv" + unaff_EBX + 0x19
                                    )), pvVar1 != (void *)0x0)) {
    return pvVar1;
  }
  pthread_mutex_lock((pthread_mutex_t *)
                     ("_ZN3STG10GERenderer19DeallocateResourcesEv" + unaff_EBX + 0x15));
  if ("_ZN3STG10GERenderer19DeallocateResourcesEv"[unaff_EBX + 0x11] == '\0') {
    iVar2 = pthread_key_create((pthread_key_t *)
                               ("_ZN3STG10GERenderer19DeallocateResourcesEv" + unaff_EBX + 0x19),
                               (__destr_function *)(unaff_EBX + -0x6d1));
    if (iVar2 != 0) {
      uVar3 = FUN_0007fa60(4);
      FUN_00080cd0(uVar3);
                    /* WARNING: Subroutine does not return */
      FUN_0007fb60(uVar3,*(undefined4 *)
                          ("_ZN3STG10USerialize4LoadEPKNS_9FFileBaseERNS_6GEFontE" +
                          unaff_EBX + 0x31),
                   *(undefined4 *)
                    ("_ZN3STG10USerialize4LoadEPKNS_9FFileBaseERNS_6GEFontE" + unaff_EBX + 0x2d));
    }
    "_ZN3STG10GERenderer19DeallocateResourcesEv"[unaff_EBX + 0x11] = '\x01';
  }
  pvVar1 = (void *)FUN_00082d20();
  iVar2 = pthread_setspecific(*(pthread_key_t *)
                               ("_ZN3STG10GERenderer19DeallocateResourcesEv" + unaff_EBX + 0x19),
                              pvVar1);
  if (iVar2 == 0) {
    pthread_mutex_unlock
              ((pthread_mutex_t *)("_ZN3STG10GERenderer19DeallocateResourcesEv" + unaff_EBX + 0x15))
    ;
    return pvVar1;
  }
  if (iVar2 == 0xc) {
    uVar3 = FUN_0007fa60(4);
    FUN_00080cd0(uVar3);
                    /* WARNING: Subroutine does not return */
    FUN_0007fb60(uVar3,*(undefined4 *)
                        ("_ZN3STG10USerialize4LoadEPKNS_9FFileBaseERNS_6GEFontE" + unaff_EBX + 0x31)
                 ,*(undefined4 *)
                   ("_ZN3STG10USerialize4LoadEPKNS_9FFileBaseERNS_6GEFontE" + unaff_EBX + 0x2d));
  }
                    /* WARNING: Subroutine does not return */
  abort();
}

