/* 0006f15c | android_getCpuCount */

undefined4 android_getCpuCount(void)

{
  int iVar1;
  
  iVar1 = DAT_0006f174;
  pthread_once((pthread_once_t *)(android_setCpu + DAT_0006f174 + 2),
               (__init_routine *)(DAT_0006f178 + 0x6f16c));
  return *(undefined4 *)((int)&DAT_0006f174 + iVar1 + 2);
}

