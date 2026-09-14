/* 0007f390 | android_getCpuCount */

undefined4 android_getCpuCount(void)

{
  int unaff_EBX;
  
  FUN_0002e044();
  pthread_once((pthread_once_t *)
               ("_ZNSbItSt11char_traitsItESaItEE9_M_assignEPKtS4_" + unaff_EBX + 0x10),
               (__init_routine *)(unaff_EBX + -0x1f6));
  return *(undefined4 *)("_ZNSbItSt11char_traitsItESaItEE9_M_assignEPKtS4_" + unaff_EBX + 0x20);
}

