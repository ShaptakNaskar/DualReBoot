/* 00083420 | _INIT_5 */

void _INIT_5(void)

{
  char *pcVar1;
  int unaff_EBX;
  
  FUN_0002e044();
  pthread_mutex_init((pthread_mutex_t *)
                     ("_ZN3STG13GERenderStateINS_7GEColorEE8SetStateERKS1_" + unaff_EBX + 0x33),
                     (pthread_mutexattr_t *)0x0);
  __cxa_atexit(unaff_EBX + -0xd17,
               (pthread_mutex_t *)
               ("_ZN3STG13GERenderStateINS_7GEColorEE8SetStateERKS1_" + unaff_EBX + 0x33),
               *(undefined4 *)
                ("_ZN3STG7MMatrix15MakeScaleOffsetERKNS_8MVector3ES3_" + unaff_EBX + 0x29));
  pcVar1 = "_ZN3STG10GERendererD2Ev" + unaff_EBX + 0x12;
  do {
    pcVar1[0] = '\0';
    pcVar1[1] = '\0';
    pcVar1[2] = '\0';
    pcVar1[3] = '\0';
    pcVar1[4] = '\0';
    pcVar1[5] = '\0';
    pcVar1[6] = '\0';
    pcVar1[7] = '\0';
    pcVar1 = pcVar1 + 8;
  } while (pcVar1 != "_ZN3STG13GERenderStateINS_7GEColorEE8SetStateERKS1_" + unaff_EBX + 0x33);
  pcVar1 = "_ZN3STG13GERendererAPI11GL_ViewportERKNS_10URectangleImEE" + unaff_EBX + 0x34;
  pcVar1[0] = '\0';
  pcVar1[1] = '\0';
  pcVar1[2] = '\0';
  pcVar1[3] = '\0';
  pcVar1 = "_ZN3STG13GERendererAPI11GL_ViewportERKNS_10URectangleImEE" + unaff_EBX + 0x38;
  pcVar1[0] = '\0';
  pcVar1[1] = '\0';
  pcVar1[2] = '\0';
  pcVar1[3] = '\0';
  return;
}

