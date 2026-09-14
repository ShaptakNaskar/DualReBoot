/* 00087163 | __deregister_frame */

void __deregister_frame(int *param_1)

{
  void *__ptr;
  
  FUN_0002e044();
  if (*param_1 != 0) {
    __ptr = (void *)__deregister_frame_info(param_1);
    free(__ptr);
  }
  return;
}

