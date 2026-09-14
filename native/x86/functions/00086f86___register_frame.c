/* 00086f86 | __register_frame */

void __register_frame(int *param_1)

{
  void *pvVar1;
  
  FUN_0002e044();
  if (*param_1 != 0) {
    pvVar1 = malloc(0x18);
    __register_frame_info(param_1,pvVar1);
  }
  return;
}

