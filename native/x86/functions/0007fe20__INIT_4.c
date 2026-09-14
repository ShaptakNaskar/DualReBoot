/* 0007fe20 | _INIT_4 */

void _INIT_4(void)

{
  char *pcVar1;
  undefined4 uVar2;
  int iVar3;
  int unaff_EBX;
  
  FUN_0002e044();
  iVar3 = pthread_key_create((pthread_key_t *)
                             ("_ZN3STG14GEVertexBuffer10DeallocateEv" + unaff_EBX + 0x1f),
                             (__destr_function *)(unaff_EBX + -0x766));
  if (iVar3 == 0) {
    pcVar1 = "_ZN3STG14GEVertexBuffer10DeallocateEv" + unaff_EBX + 0x23;
    pcVar1[0] = '\b';
    pcVar1[1] = '\0';
    pcVar1[2] = '\0';
    pcVar1[3] = '\0';
    pcVar1 = "_ZN3STG14GEVertexBufferD2Ev" + unaff_EBX + 5;
    pcVar1[0] = -4;
    pcVar1[1] = '\x0f';
    pcVar1[2] = '\0';
    pcVar1[3] = '\0';
    pcVar1 = "_ZN3STG14GEVertexBufferD2Ev" + unaff_EBX + 1;
    pcVar1[0] = -1;
    pcVar1[1] = '\x01';
    pcVar1[2] = '\0';
    pcVar1[3] = '\0';
    pthread_mutex_init((pthread_mutex_t *)("_ZN3STG14GEVertexBufferD2Ev" + unaff_EBX + 9),
                       (pthread_mutexattr_t *)0x0);
    uVar2 = *(undefined4 *)
             (
             "_ZN3STG15GETimeOfDayAuto6UpdateERKNS_5UTime10TimeStructILNS1_10ETimeValueE0EEERKNS2_ILS3_1EEE"
             + unaff_EBX + 0x3d);
    pcVar1 = "_ZN3STG14GEVertexBufferD2Ev" + unaff_EBX + 0x11;
    pcVar1[0] = '\0';
    pcVar1[1] = '\0';
    pcVar1[2] = '\0';
    pcVar1[3] = '\0';
    pcVar1 = "_ZN3STG14GEVertexBufferD2Ev" + unaff_EBX + 0xd;
    pcVar1[0] = '\0';
    pcVar1[1] = '\0';
    pcVar1[2] = '\0';
    pcVar1[3] = '\0';
    __cxa_atexit(unaff_EBX + -0x706,"_ZN3STG14GEVertexBufferD2Ev" + unaff_EBX + 0x15,uVar2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00080360(unaff_EBX + 0x7e1e);
}

