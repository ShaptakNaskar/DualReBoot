/* 0006f75c | _INIT_4 */

void _INIT_4(void)

{
  int iVar1;
  int iVar2;
  pthread_mutex_t *__mutex;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 in_r3;
  
  iVar2 = pthread_key_create((pthread_key_t *)(DAT_0006f7b0 + 0x6f766),
                             (__destr_function *)(DAT_0006f7b4 + 0x6f768));
  iVar1 = DAT_0006f7b8;
  if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0006fa34(DAT_0006f7c8 + 0x6f7ac);
  }
  __mutex = (pthread_mutex_t *)(DAT_0006f7b8 + 0x6f784);
  *(undefined4 *)(DAT_0006f7b8 + 0x6f778) = 0xc;
  *(undefined4 *)(iVar1 + 0x6f780) = 0xffc;
  *(undefined4 *)(iVar1 + 0x6f77c) = 0x155;
  pthread_mutex_init(__mutex,(pthread_mutexattr_t *)0x0);
  iVar2 = DAT_0006f7c4;
  iVar3 = DAT_0006f7bc + 0x6f796;
  iVar4 = DAT_0006f7c0 + 0x6f798;
  *(undefined4 *)(iVar1 + 0x6f78c) = 0;
  uVar5 = *(undefined4 *)(iVar2 + 0x6f79c);
  *(undefined4 *)(iVar1 + 0x6f788) = 0;
                    /* WARNING: Could not recover jumptable at 0x000765f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&LAB_000765f8 + DAT_000765f4))(iVar3,iVar4,uVar5,in_r3);
  return;
}

