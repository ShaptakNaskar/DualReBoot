/* 00070da8 | std::__malloc_alloc::allocate */

/* std::__malloc_alloc::allocate(unsigned int) */

void * std::__malloc_alloc::allocate(uint param_1)

{
  void *pvVar1;
  uint uVar2;
  uint uVar3;
  uint extraout_r2;
  code *pcVar4;
  pthread_mutex_t *ppVar5;
  undefined4 *puVar6;
  
  pvVar1 = malloc(param_1);
  if (pvVar1 == (void *)0x0) {
    ppVar5 = (pthread_mutex_t *)(iRam00070dfc + 0x70dbc);
    puVar6 = (undefined4 *)(iRam00070e00 + 0x70dbe);
    do {
      pthread_mutex_lock(ppVar5);
      pcVar4 = (code *)*puVar6;
      pthread_mutex_unlock(ppVar5);
      if (pcVar4 == (code *)0x0) {
        uVar2 = FUN_0006f4f4(4);
        FUN_0006ff48();
        uVar3 = FUN_0006f570(uVar2,*(undefined4 *)(iRam00070e04 + 0x70df2),
                             *(undefined4 *)(iRam00070e08 + 0x70df6));
        ppVar5 = (pthread_mutex_t *)(DAT_00070e2c + 0x70e16);
        pthread_mutex_lock(ppVar5);
        pvVar1 = *(void **)(DAT_00070e30 + 0x70e22);
        *(uint *)(DAT_00070e30 + 0x70e22) = extraout_r2 & 0xffff | (uVar2 | ~uVar3) & 0xffff0000;
        pthread_mutex_unlock(ppVar5);
        return pvVar1;
      }
      (*pcVar4)();
      pvVar1 = malloc(param_1);
    } while (pvVar1 == (void *)0x0);
  }
  return pvVar1;
}

