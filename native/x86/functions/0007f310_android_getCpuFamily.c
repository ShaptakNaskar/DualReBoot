/* 0007f310 | android_getCpuFamily */

undefined4 android_getCpuFamily(void)

{
  int unaff_EBX;
  
  FUN_0002e044();
  pthread_once((pthread_once_t *)
               ("_ZNK3STG13GETextureFont15GetMessageToUseERKNS_11UStringBaseIttEERS2_" +
               unaff_EBX + 0x23),(__init_routine *)(unaff_EBX + -0x176));
  return *(undefined4 *)
          ("_ZNK3STG13GETextureFont15GetMessageToUseERKNS_11UStringBaseIttEERS2_" + unaff_EBX + 0x27
          );
}

