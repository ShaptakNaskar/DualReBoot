/* 00086fbb | __register_frame_info_table_bases */

void __register_frame_info_table_bases
               (undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  pthread_mutex_t *__mutex;
  undefined4 uVar1;
  int unaff_EBX;
  
  FUN_0002e044();
  __mutex = (pthread_mutex_t *)((int)&__DT_SYMTAB[0x6b4].st_value + unaff_EBX + 2);
  param_2[1] = param_3;
  param_2[2] = param_4;
  param_2[4] = 0;
  *param_2 = 0xffffffff;
  *(undefined1 *)(param_2 + 4) = 2;
  param_2[3] = param_1;
  *(ushort *)(param_2 + 4) = *(ushort *)(param_2 + 4) | 0x7f8;
  pthread_mutex_lock(__mutex);
  uVar1 = *(undefined4 *)((int)&__DT_SYMTAB[0x6b4].st_size + unaff_EBX + 2);
  *(undefined4 **)((int)&__DT_SYMTAB[0x6b4].st_size + unaff_EBX + 2) = param_2;
  param_2[5] = uVar1;
  pthread_mutex_unlock(__mutex);
  return;
}

