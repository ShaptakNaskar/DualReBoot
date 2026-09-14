/* 0006f11c | android_getCpuFamily */

undefined4 android_getCpuFamily(void)

{
  int iVar1;
  
  iVar1 = DAT_0006f134;
  pthread_once((pthread_once_t *)(android_getCpuFeatures + DAT_0006f134 + 2),
               (__init_routine *)(DAT_0006f138 + 0x6f12c));
  return *(undefined4 *)(iVar1 + 0x6f12a);
}

