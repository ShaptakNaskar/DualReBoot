/* 000833e0 | std::priv::_Pthread_alloc::allocate */

/* std::priv::_Pthread_alloc::allocate(unsigned int&, std::priv::_Pthread_alloc_per_thread_state*)
    */

undefined4 *
std::priv::_Pthread_alloc::allocate(uint *param_1,_Pthread_alloc_per_thread_state *param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  
  FUN_0002e044();
  uVar2 = *param_1;
  if (uVar2 < 0x81) {
    *param_1 = uVar2 + 7 & 0xfffffff8;
    pthread_mutex_lock((pthread_mutex_t *)(param_2 + 0x44));
    iVar1 = (*param_1 + 7 >> 3) - 1;
    puVar3 = *(undefined4 **)(param_2 + iVar1 * 4);
    if (puVar3 == (undefined4 *)0x0) {
      puVar3 = (undefined4 *)FUN_00083040(param_2,*param_1);
    }
    else {
      *(undefined4 *)(param_2 + iVar1 * 4) = *puVar3;
    }
    pthread_mutex_unlock((pthread_mutex_t *)(param_2 + 0x44));
  }
  else {
    puVar3 = (undefined4 *)__malloc_alloc::allocate(uVar2);
  }
  return puVar3;
}

