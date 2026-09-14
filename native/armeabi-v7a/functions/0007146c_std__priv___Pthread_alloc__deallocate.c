/* 0007146c | std::priv::_Pthread_alloc::deallocate */

/* std::priv::_Pthread_alloc::deallocate(void*, unsigned int) */

void std::priv::_Pthread_alloc::deallocate(void *param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  
  if (0x80 < param_2) {
    (*(code *)(DAT_000765d4 + 0x765d8))();
    return;
  }
  iVar1 = FUN_000710e4();
  iVar2 = (param_2 + 7 >> 3) - 1;
  *(undefined4 *)param_1 = *(undefined4 *)(iVar1 + iVar2 * 4);
  *(void **)(iVar1 + iVar2 * 4) = param_1;
  return;
}

