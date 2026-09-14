/* 0007f350 | android_getCpuFeatures */

undefined8 android_getCpuFeatures(void)

{
  int unaff_EBX;
  
  FUN_0002e044();
  pthread_once((pthread_once_t *)
               ("_ZN3STG13GETextureFont10SetMessageEmRKNS_11UStringBaseIttEE" + unaff_EBX + 0x1f),
               (__init_routine *)(unaff_EBX + -0x1b6));
  return *(undefined8 *)
          ("_ZN3STG13GETextureFont10SetMessageEmRKNS_11UStringBaseIttEE" + unaff_EBX + 0x27);
}

