/* 00086ee8 | __register_frame_info_bases */

void __register_frame_info_bases
               (int *param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int unaff_EBX;
  
  FUN_0002e044();
  if ((param_1 != (int *)0x0) && (*param_1 != 0)) {
    param_2[1] = param_3;
    param_2[4] = 0;
    param_2[2] = param_4;
    *param_2 = 0xffffffff;
    param_2[3] = param_1;
    *(undefined2 *)(param_2 + 4) = 0x7f8;
    pthread_mutex_lock((pthread_mutex_t *)("__stack_chk_fail" + unaff_EBX + 0xc));
    uVar1 = *(undefined4 *)("__stack_chk_fail" + unaff_EBX + 0x10);
    *(undefined4 **)("__stack_chk_fail" + unaff_EBX + 0x10) = param_2;
    param_2[5] = uVar1;
    pthread_mutex_unlock((pthread_mutex_t *)("__stack_chk_fail" + unaff_EBX + 0xc));
  }
  return;
}

