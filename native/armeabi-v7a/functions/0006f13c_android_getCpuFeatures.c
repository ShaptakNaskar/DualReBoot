/* 0006f13c | android_getCpuFeatures */

undefined8 android_getCpuFeatures(void)

{
  int iVar1;
  
  iVar1 = DAT_0006f154;
  pthread_once((pthread_once_t *)(android_getCpuCount + DAT_0006f154 + 2),
               (__init_routine *)(DAT_0006f158 + 0x6f14c));
  return *(undefined8 *)(iVar1 + 0x6f14e);
}

