/* 0007109c | std::__node_alloc::_M_deallocate */

/* std::__node_alloc::_M_deallocate(void*, unsigned int) */

void std::__node_alloc::_M_deallocate(void *param_1,uint param_2)

{
  int iVar1;
  pthread_mutex_t *__mutex;
  uint uVar2;
  
  __mutex = (pthread_mutex_t *)(DAT_00070e60 + 0x70e40);
  uVar2 = param_2 - 1 >> 3;
  pthread_mutex_lock(__mutex);
  iVar1 = DAT_00070e64 + 0x70e4e;
  *(undefined4 *)param_1 = *(undefined4 *)(iVar1 + uVar2 * 4);
  *(void **)(iVar1 + uVar2 * 4) = param_1;
  (*(code *)(DAT_000765e4 + 0x765e8))(__mutex);
  return;
}

