/* 00073624 | FUN_00073624 */

undefined4 * FUN_00073624(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  size_t *psVar4;
  undefined4 *puVar5;
  size_t __n;
  int iVar6;
  int iVar7;
  
  puVar2 = pthread_getspecific(*(pthread_key_t *)(DAT_000736f4 + 0x7362e));
  if (puVar2 != (undefined4 *)0x0) {
    return puVar2;
  }
  pthread_mutex_lock((pthread_mutex_t *)(DAT_000736f8 + 0x7364e));
  puVar2 = *(undefined4 **)(DAT_000736fc + 0x73660);
  if (puVar2 == (undefined4 *)0x0) {
    puVar3 = mmap((void *)0x0,0x1000,3,0x22,-1,0);
    iVar1 = DAT_0007370c;
    if (puVar3 == (undefined4 *)0xffffffff) goto LAB_00073662;
    psVar4 = (size_t *)(DAT_0007370c + 0x7369e);
    iVar7 = *(int *)(DAT_0007370c + 0x736a2);
    *(undefined4 *)((int)puVar3 + *(int *)(DAT_0007370c + 0x736a6)) =
         *(undefined4 *)(DAT_0007370c + 0x736ae);
    *(undefined4 **)(iVar1 + 0x736ae) = puVar3;
    __n = *psVar4;
    if (iVar7 == 0) {
      puVar2 = (undefined4 *)(iVar1 + 0x736b2);
    }
    else {
      iVar6 = 0;
      puVar5 = (undefined4 *)(iVar1 + 0x736b2);
      do {
        puVar2 = puVar3;
        iVar6 = iVar6 + 1;
        *puVar5 = puVar2;
        puVar3 = (undefined4 *)((int)puVar2 + __n);
        puVar5 = puVar2;
      } while (iVar6 != iVar7);
    }
    *puVar2 = 0;
    puVar2 = *(undefined4 **)(&UNK_000736da + DAT_00073710);
  }
  else {
    __n = *(size_t *)(DAT_000736fc + 0x7364c);
  }
  *(undefined4 *)(DAT_00073700 + 0x7366e) = *puVar2;
  memset(puVar2,0,__n);
LAB_00073662:
  pthread_mutex_unlock((pthread_mutex_t *)(DAT_00073704 + 0x73674));
  if (puVar2 != (undefined4 *)0x0) {
    pthread_setspecific(*(pthread_key_t *)(DAT_00073708 + 0x73678),puVar2);
    return puVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00073cc8(DAT_00073718 + 0x736ee);
}

