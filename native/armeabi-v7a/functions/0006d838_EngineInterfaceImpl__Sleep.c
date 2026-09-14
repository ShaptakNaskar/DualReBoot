/* 0006d838 | EngineInterfaceImpl::Sleep */

/* EngineInterfaceImpl::Sleep(long long) */

bool __thiscall EngineInterfaceImpl::Sleep(EngineInterfaceImpl *this,longlong param_1)

{
  int iVar1;
  int iVar2;
  pthread_mutex_t *__mutex;
  pthread_cond_t *__cond;
  int in_r1;
  uint uVar3;
  int *piVar4;
  undefined4 *puVar5;
  int iVar6;
  bool bVar7;
  timespec local_20;
  
  if (in_r1 < (int)(uint)(this == (EngineInterfaceImpl *)0x0)) {
    sched_yield();
    bVar7 = true;
  }
  else {
    uVar3 = (uint)(ZEXT48(this) * 1000);
    piVar4 = (int *)(DAT_0006d998 + 0x6d860);
    iVar6 = uVar3 - 0x2ee;
    if (*piVar4 == 0) {
      __mutex = operator_new(4);
      *piVar4 = (int)__mutex;
      pthread_mutex_init(__mutex,(pthread_mutexattr_t *)0x0);
    }
    iVar1 = DAT_0006d99c;
    if (*(int *)(DAT_0006d99c + 0x6d890) == 0) {
      __cond = operator_new(4);
      *(pthread_cond_t **)(iVar1 + 0x6d890) = __cond;
      pthread_cond_init(__cond,(pthread_condattr_t *)0x0);
    }
    iVar2 = __aeabi_uldivmod(iVar6,in_r1 * 1000 + (int)(ZEXT48(this) * 1000 >> 0x20) + -1 +
                                   (uint)(0x2ed < uVar3),1000000,0);
    clock_gettime(1,&local_20);
    iVar1 = DAT_0006d9a0;
    local_20.tv_nsec = (iVar6 + iVar2 * -1000000) * 1000 + local_20.tv_nsec;
    local_20.tv_sec = local_20.tv_sec + iVar2;
    if (999999999 < local_20.tv_nsec) {
      local_20.tv_sec = local_20.tv_sec + 1;
      local_20.tv_nsec = local_20.tv_nsec + -1000000000;
    }
    puVar5 = (undefined4 *)(DAT_0006d9a0 + 0x6d90c);
    pthread_mutex_lock((pthread_mutex_t *)*puVar5);
    iVar6 = pthread_cond_timedwait_monotonic_np(*(undefined4 *)(iVar1 + 0x6d910),*puVar5,&local_20);
    pthread_mutex_unlock((pthread_mutex_t *)*puVar5);
    bVar7 = iVar6 == 0x6e;
  }
  return bVar7;
}

