/* 00075098 | std::__malloc_alloc::allocate */

/* WARNING: Control flow encountered bad instruction data */
/* std::__malloc_alloc::allocate(unsigned int) */

undefined4 * std::__malloc_alloc::allocate(uint param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 *extraout_r2;
  undefined4 *extraout_r3;
  code *pcVar4;
  pthread_mutex_t *ppVar5;
  int iVar6;
  uint uVar7;
  int *piVar8;
  int unaff_r8;
  uint unaff_r9;
  int unaff_r10;
  char cVar9;
  undefined8 uVar10;
  undefined4 uStack00000004;
  
  puVar1 = malloc(param_1);
  if (puVar1 == (undefined4 *)0x0) {
    ppVar5 = (pthread_mutex_t *)(iRam000750ec + 0x750ae);
    piVar8 = (int *)(iRam000750f0 + 0x750b0);
    do {
      pthread_mutex_lock(ppVar5);
      pcVar4 = (code *)*piVar8;
      pthread_mutex_unlock(ppVar5);
      if (pcVar4 == (code *)0x0) {
        uVar2 = FUN_00073768(4);
        FUN_0007424c();
        cVar9 = '\0';
        uVar10 = FUN_000737e8(uVar2,*(undefined4 *)(iRam000750f4 + 0x750e2),
                              *(undefined4 *)(iRam000750f8 + 0x750e4));
        uVar2 = (undefined4)((ulonglong)uVar10 >> 0x20);
        puVar1 = extraout_r2;
        puVar3 = extraout_r3;
        if (cVar9 != '\0') {
          if (cVar9 == '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
          uStack00000004 = 0x750ed;
          ppVar5 = (pthread_mutex_t *)(DAT_0007511c + 0x75106);
          pthread_mutex_lock(ppVar5);
          puVar1 = *(undefined4 **)(DAT_00075120 + 0x75112);
          *(int *)(DAT_00075120 + 0x75112) = (int)uVar10;
          pthread_mutex_unlock(ppVar5);
          return puVar1;
        }
        while( true ) {
          *puVar3 = uVar2;
          *puVar1 = uVar2;
          do {
            uVar7 = param_1 * 2 + (*(int *)(DAT_000752b4 + 0x751b0) + 7U & 0xfffffff8);
            puVar3 = operator_new(uVar7);
            *(undefined4 **)(DAT_000752b8 + 0x751c6) = puVar3;
            *(int *)(DAT_000752bc + 0x751ce) = (uVar7 >> 4) + *(int *)(DAT_000752bc + 0x751ce);
            *(uint *)(DAT_000752c0 + 0x751da) = (int)puVar3 + uVar7;
            uVar7 = ((int)puVar3 + uVar7) - (int)puVar3;
            param_1 = *piVar8 * unaff_r9;
          } while (uVar7 == 0);
          if (param_1 < uVar7 || param_1 - uVar7 == 0) break;
          if (unaff_r9 <= uVar7) {
            iVar6 = __udivsi3(uVar7);
            puVar1 = (undefined4 *)(DAT_000752c8 + 0x75210);
            *piVar8 = iVar6;
            *puVar1 = (undefined4 *)((int)puVar3 + iVar6 * unaff_r9);
            return puVar3;
          }
          iVar6 = (uVar7 - 1 >> 3) * 4;
          puVar1 = (undefined4 *)(unaff_r10 + 0x75198);
          *puVar3 = *(undefined4 *)(iVar6 + unaff_r8);
          *(undefined4 *)(iVar6 + unaff_r8) = *puVar1;
          uVar2 = 0;
          puVar3 = (undefined4 *)(DAT_000752b0 + 0x751a6);
        }
        *(undefined4 **)(DAT_000752c4 + 0x751f4) = (undefined4 *)((int)puVar3 + param_1);
        return puVar3;
      }
      (*pcVar4)();
      puVar1 = malloc(param_1);
    } while (puVar1 == (undefined4 *)0x0);
  }
  return puVar1;
}

