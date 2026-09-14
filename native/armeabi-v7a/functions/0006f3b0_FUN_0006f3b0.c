/* 0006f3b0 | FUN_0006f3b0 */

undefined4 * FUN_0006f3b0(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  size_t *psVar4;
  undefined4 *puVar5;
  size_t __n;
  int iVar6;
  int iVar7;
  
  puVar2 = pthread_getspecific(*(pthread_key_t *)(DAT_0006f480 + 0x6f3b8));
  if (puVar2 != (undefined4 *)0x0) {
    return puVar2;
  }
  pthread_mutex_lock((pthread_mutex_t *)(DAT_0006f484 + 0x6f3da));
  puVar2 = *(undefined4 **)(DAT_0006f488 + 0x6f3ec);
  if (puVar2 == (undefined4 *)0x0) {
    puVar3 = mmap((void *)0x0,0x1000,3,0x22,-1,0);
    iVar1 = DAT_0006f498;
    if (puVar3 == (undefined4 *)0xffffffff) goto LAB_0006f3ec;
    psVar4 = (size_t *)(DAT_0006f498 + 0x6f428);
    iVar7 = *(int *)(DAT_0006f498 + 0x6f42c);
    *(undefined4 *)((int)puVar3 + *(int *)(DAT_0006f498 + 0x6f430)) =
         *(undefined4 *)(DAT_0006f498 + 0x6f438);
    *(undefined4 **)(iVar1 + 0x6f438) = puVar3;
    if (iVar7 == 0) {
      puVar2 = (undefined4 *)(iVar1 + 0x6f43c);
      __n = *psVar4;
    }
    else {
      __n = *psVar4;
      iVar6 = 0;
      puVar5 = (undefined4 *)(iVar1 + 0x6f43c);
      do {
        puVar2 = puVar3;
        iVar6 = iVar6 + 1;
        *puVar5 = puVar2;
        puVar3 = (undefined4 *)((int)puVar2 + __n);
        puVar5 = puVar2;
      } while (iVar6 != iVar7);
    }
    iVar1 = DAT_0006f49c;
    *puVar2 = 0;
    puVar2 = *(undefined4 **)(&UNK_0006f462 + iVar1);
  }
  else {
    __n = *(size_t *)(DAT_0006f488 + 0x6f3d8);
  }
  *(undefined4 *)(DAT_0006f48c + 0x6f3fa) = *puVar2;
  memset(puVar2,0,__n);
LAB_0006f3ec:
  pthread_mutex_unlock((pthread_mutex_t *)(DAT_0006f490 + 0x6f3fe));
  if (puVar2 != (undefined4 *)0x0) {
    pthread_setspecific(*(pthread_key_t *)(DAT_0006f494 + 0x6f402),puVar2);
    return puVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0006fa34(DAT_0006f4a4 + 0x6f47a);
}

