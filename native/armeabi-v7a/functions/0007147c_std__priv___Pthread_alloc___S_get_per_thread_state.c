/* 0007147c | std::priv::_Pthread_alloc::_S_get_per_thread_state */

/* std::priv::_Pthread_alloc::_S_get_per_thread_state() */

void * std::priv::_Pthread_alloc::_S_get_per_thread_state(void)

{
  void *pvVar1;
  int iVar2;
  undefined4 uVar3;
  void *pvVar4;
  
  pvVar4 = (void *)(DAT_0007119c + 0x710f0);
  if ((*(char *)(iRam00071198 + 0x710ee) != '\0') &&
     (pvVar1 = pthread_getspecific(*(pthread_key_t *)(DAT_000711ac + 0x71124)),
     pvVar1 != (void *)0x0)) {
    return pvVar1;
  }
  pthread_mutex_lock((pthread_mutex_t *)(DAT_000711a0 + 0x710f8));
  if (*(char *)(DAT_000711a4 + 0x71100) == '\0') {
    iVar2 = pthread_key_create((pthread_key_t *)(DAT_000711b0 + 0x7113a),
                               (__destr_function *)(DAT_000711b4 + 0x7113c));
    if (iVar2 != 0) {
      uVar3 = FUN_0006f4f4(4);
      FUN_0006ff48();
      pvVar1 = (void *)FUN_0006f570(uVar3,*(undefined4 *)((int)pvVar4 + DAT_000711bc),
                                    *(undefined4 *)((int)pvVar4 + DAT_000711c0));
      memset(pvVar1,0,0x40);
      return pvVar4;
    }
    *(undefined1 *)(DAT_000711b8 + 0x71148) = 1;
  }
  pvVar1 = (void *)FUN_000710a0();
  iVar2 = pthread_setspecific(*(pthread_key_t *)(DAT_000711a8 + 0x71110),pvVar1);
  if (iVar2 != 0) {
    if (iVar2 != 0xc) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    pvVar1 = (void *)FUN_0006f4f4(4);
    FUN_0006ff48();
    FUN_0006f570(pvVar1,*(undefined4 *)((int)pvVar4 + DAT_000711bc),
                 *(undefined4 *)((int)pvVar4 + DAT_000711c0));
  }
  pthread_mutex_unlock((pthread_mutex_t *)(DAT_000711c4 + 0x7116a));
  return pvVar1;
}

