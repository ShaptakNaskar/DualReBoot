/* 0007d810 | EngineInterfaceImpl::Sleep */

/* EngineInterfaceImpl::Sleep(long long) */

bool __thiscall EngineInterfaceImpl::Sleep(EngineInterfaceImpl *this,longlong param_1)

{
  uint uVar1;
  int iVar2;
  pthread_mutex_t *__mutex;
  pthread_cond_t *__cond;
  int unaff_EBX;
  int iVar3;
  bool bVar4;
  timespec local_20;
  undefined4 uStack_14;
  
  uStack_14 = 0x7d81b;
  FUN_0002e044();
  if (((int)param_1 < 1) && (((int)param_1 < 0 || (this == (EngineInterfaceImpl *)0x0)))) {
    sched_yield();
    bVar4 = true;
  }
  else {
    uVar1 = (uint)(ZEXT48(this) * 1000);
    iVar3 = uVar1 - 0x2ee;
    if (*(int *)("_ZNK3STG11UPreferenceINS_23UPreference_Theme_EntryELb1EE12GetNumValuesEv" +
                unaff_EBX + 0x3c) == 0) {
      __mutex = operator_new(4);
      *(pthread_mutex_t **)
       ("_ZNK3STG11UPreferenceINS_23UPreference_Theme_EntryELb1EE12GetNumValuesEv" +
       unaff_EBX + 0x3c) = __mutex;
      pthread_mutex_init(__mutex,(pthread_mutexattr_t *)0x0);
    }
    if (*(int *)("_ZNK3STG11UPreferenceINS_11GETimeOfDay6EPhaseELb1EE12GetNumValuesEv" +
                unaff_EBX + 3) == 0) {
      __cond = operator_new(4);
      *(pthread_cond_t **)
       ("_ZNK3STG11UPreferenceINS_11GETimeOfDay6EPhaseELb1EE12GetNumValuesEv" + unaff_EBX + 3) =
           __cond;
      pthread_cond_init(__cond,(pthread_condattr_t *)0x0);
    }
    iVar2 = __udivdi3(iVar3,(int)(ZEXT48(this) * 1000 >> 0x20) + (int)param_1 * 1000 + -1 +
                            (uint)(0x2ed < uVar1),1000000,0);
    clock_gettime(1,&local_20);
    local_20.tv_nsec = (iVar3 + iVar2 * -1000000) * 1000 + local_20.tv_nsec;
    local_20.tv_sec = iVar2 + local_20.tv_sec;
    if (999999999 < local_20.tv_nsec) {
      local_20.tv_sec = local_20.tv_sec + 1;
      local_20.tv_nsec = local_20.tv_nsec + -1000000000;
    }
    pthread_mutex_lock(*(pthread_mutex_t **)
                        ("_ZNK3STG11UPreferenceINS_23UPreference_Theme_EntryELb1EE12GetNumValuesEv"
                        + unaff_EBX + 0x3c));
    iVar3 = pthread_cond_timedwait_monotonic_np
                      (*(undefined4 *)
                        ("_ZNK3STG11UPreferenceINS_11GETimeOfDay6EPhaseELb1EE12GetNumValuesEv" +
                        unaff_EBX + 3),
                       *(undefined4 *)
                        ("_ZNK3STG11UPreferenceINS_23UPreference_Theme_EntryELb1EE12GetNumValuesEv"
                        + unaff_EBX + 0x3c),&local_20);
    pthread_mutex_unlock
              (*(pthread_mutex_t **)
                ("_ZNK3STG11UPreferenceINS_23UPreference_Theme_EntryELb1EE12GetNumValuesEv" +
                unaff_EBX + 0x3c));
    bVar4 = iVar3 == 0x6e;
  }
  return bVar4;
}

