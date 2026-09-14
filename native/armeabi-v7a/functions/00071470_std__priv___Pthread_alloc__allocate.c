/* 00071470 | std::priv::_Pthread_alloc::allocate */

/* std::priv::_Pthread_alloc::allocate(unsigned int&, std::priv::_Pthread_alloc_per_thread_state*)
    */

undefined4 *
std::priv::_Pthread_alloc::allocate(uint *param_1,_Pthread_alloc_per_thread_state *param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  
  uVar1 = *param_1;
  if (uVar1 < 0x81) {
    *param_1 = uVar1 + 7 & 0xfffffff8;
    pthread_mutex_lock((pthread_mutex_t *)(param_2 + 0x44));
    iVar2 = (*param_1 + 7 >> 3) - 1;
    puVar3 = *(undefined4 **)(param_2 + iVar2 * 4);
    if (puVar3 == (undefined4 *)0x0) {
      puVar3 = (undefined4 *)FUN_000712cc(param_2);
    }
    else {
      *(undefined4 *)(param_2 + iVar2 * 4) = *puVar3;
    }
    pthread_mutex_unlock((pthread_mutex_t *)(param_2 + 0x44));
    return puVar3;
  }
  puVar3 = (undefined4 *)__malloc_alloc::allocate(uVar1);
  return puVar3;
}

