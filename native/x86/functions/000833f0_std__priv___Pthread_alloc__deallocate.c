/* 000833f0 | std::priv::_Pthread_alloc::deallocate */

/* std::priv::_Pthread_alloc::deallocate(void*, unsigned int,
   std::priv::_Pthread_alloc_per_thread_state*) */

void std::priv::_Pthread_alloc::deallocate
               (void *param_1,uint param_2,_Pthread_alloc_per_thread_state *param_3)

{
  int iVar1;
  
  FUN_0002e044();
  if (param_2 < 0x81) {
    pthread_mutex_lock((pthread_mutex_t *)(param_3 + 0x44));
    iVar1 = (param_2 + 7 >> 3) - 1;
    *(undefined4 *)param_1 = *(undefined4 *)(param_3 + iVar1 * 4);
    *(void **)(param_3 + iVar1 * 4) = param_1;
    pthread_mutex_unlock((pthread_mutex_t *)(param_3 + 0x44));
  }
  else {
    free(param_1);
  }
  return;
}

