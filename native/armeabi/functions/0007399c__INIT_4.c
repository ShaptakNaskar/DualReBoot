/* 0007399c | _INIT_4 */

void _INIT_4(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  
  iVar3 = pthread_key_create((pthread_key_t *)(DAT_000739e8 + 0x739a6),
                             (__destr_function *)(DAT_000739ec + 0x739a8));
  iVar1 = DAT_000739f0;
  if (iVar3 == 0) {
    *(undefined4 *)(DAT_000739f0 + 0x739b6) = 0xc;
    *(undefined4 *)(iVar1 + 0x739be) = DAT_000739f4;
    *(undefined4 *)(iVar1 + 0x739ba) = DAT_000739f8;
    pthread_mutex_init((pthread_mutex_t *)(iVar1 + 0x739c2),(pthread_mutexattr_t *)0x0);
    iVar2 = DAT_00073a04;
    iVar3 = DAT_00073a00;
    puVar4 = (undefined4 *)(DAT_000739fc + 0x739d2);
    *(undefined4 *)(iVar1 + 0x739ca) = 0;
    *(undefined4 *)(iVar1 + 0x739c6) = 0;
    __aeabi_atexit(iVar3 + 0x739dc,iVar2 + 0x739d8,*puVar4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00073cc8(DAT_00073a08 + 0x739e6);
}

