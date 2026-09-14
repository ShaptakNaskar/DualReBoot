/* 0006f1b4 | android_getCpuIdArm */

undefined4 android_getCpuIdArm(void)

{
  int iVar1;
  
  iVar1 = DAT_0006f1cc;
  pthread_once((pthread_once_t *)(android_setCpuArm + DAT_0006f1cc + 2),
               (__init_routine *)(DAT_0006f1d0 + 0x6f1c4));
  return *(undefined4 *)((int)&DAT_0006f1d0 + iVar1 + 2);
}

