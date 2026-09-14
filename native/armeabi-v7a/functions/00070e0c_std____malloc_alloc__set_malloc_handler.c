/* 00070e0c | std::__malloc_alloc::set_malloc_handler */

/* std::__malloc_alloc::set_malloc_handler(void (*)()) */

undefined4 std::__malloc_alloc::set_malloc_handler(_func_void *param_1)

{
  pthread_mutex_t *__mutex;
  undefined4 uVar1;
  
  __mutex = (pthread_mutex_t *)(DAT_00070e2c + 0x70e16);
  pthread_mutex_lock(__mutex);
  uVar1 = *(undefined4 *)(DAT_00070e30 + 0x70e22);
  *(undefined4 *)(DAT_00070e30 + 0x70e22) = param_1;
  pthread_mutex_unlock(__mutex);
  return uVar1;
}

