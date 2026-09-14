/* 000753e0 | FUN_000753e0 */

/* WARNING: Control flow encountered bad instruction data */

undefined4 * FUN_000753e0(void)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  uint uVar6;
  pthread_mutex_t *in_r3;
  int *extraout_r3;
  int *piVar7;
  int unaff_r4;
  int *piVar8;
  undefined4 unaff_r6;
  uint unaff_r7;
  undefined4 *unaff_r8;
  int *unaff_r9;
  int unaff_r10;
  undefined4 unaff_r11;
  uint uVar9;
  char cVar10;
  undefined4 in_cr15;
  undefined8 uVar11;
  pthread_mutex_t *ppStack_10;
  
  uVar1 = CONCAT44(unaff_r6,unaff_r11);
  piVar8 = (int *)(iRam0007549c + 0x753ee);
  if ((*(char *)(iRam00075498 + 0x753ea) == '\0') ||
     (puVar2 = pthread_getspecific(*(pthread_key_t *)(iRam000754ac + 0x75426)),
     puVar2 == (undefined4 *)0x0)) {
    pthread_mutex_lock((pthread_mutex_t *)(iRam000754a0 + 0x753f6));
    if (*(char *)(iRam000754a4 + 0x753fe) == '\0') {
      iVar3 = pthread_key_create((pthread_key_t *)(iRam000754b0 + 0x7543a),
                                 (__destr_function *)(iRam000754b4 + 0x7543c));
      if (iVar3 != 0) {
        piVar4 = (int *)FUN_00073768(4);
        FUN_0007424c();
        cVar10 = (int)piVar4 < 0;
        uVar11 = FUN_000737e8(piVar4,*(undefined4 *)((int)piVar8 + DAT_000754bc),
                              *(undefined4 *)((int)piVar8 + LAB_000754c0));
        uVar6 = (uint)((ulonglong)uVar11 >> 0x20);
        puVar2 = (undefined4 *)uVar11;
        if (cVar10 == '\0') {
          uVar6 = uVar6 << 0x18 | (uVar6 >> 8 & 0xff) << 0x10 | (uVar6 >> 0x10 & 0xff) << 8 |
                  uVar6 >> 0x18;
          if ((int)puVar2 < 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
          piVar7 = extraout_r3;
          ppStack_10 = in_r3;
          if ((int)puVar2 < 0) goto LAB_00075564;
          if ((int)puVar2 < 0) goto LAB_00075530;
          if ((int)puVar2 < 0) goto LAB_00075504;
          if ((-1 < (int)puVar2) && (coprocessor_load(0xf,in_cr15,piVar4), -1 < (int)puVar2)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
          ppStack_10 = (pthread_mutex_t *)(uVar6 + 0x754ee);
          piVar4 = (int *)(DAT_000755b8 + 0x754f8);
          unaff_r9 = extraout_r3;
          unaff_r10 = DAT_000755b4;
          uVar1 = uVar11;
          while( true ) {
            piVar8 = (int *)((int)unaff_r9 + 0x75552);
            pthread_mutex_lock(ppStack_10);
            unaff_r7 = *(int *)((ulonglong)uVar1 >> 0x20) * (int)uVar1;
            piVar7 = (int *)(unaff_r10 + 0x75566);
            unaff_r8 = (undefined4 *)*piVar8;
LAB_00075564:
            puVar2 = unaff_r8;
            uVar9 = (uint)uVar1;
            uVar6 = *piVar7 - (int)puVar2;
            if (unaff_r7 <= uVar6) {
              *piVar8 = unaff_r7 + (int)puVar2;
              goto LAB_00075572;
            }
            if (uVar9 <= uVar6) break;
            uVar11 = CONCAT44(7,uVar6);
            piVar7 = (int *)(*piVar4 + 7);
            uVar6 = unaff_r7 << 1;
            unaff_r8 = puVar2;
LAB_00075504:
            unaff_r7 = uVar6 + ((uint)piVar7 & ~(uint)((ulonglong)uVar11 >> 0x20));
            if ((int)uVar11 != 0) {
              iVar3 = (((int)uVar11 + 7U >> 3) - 1) * 4;
              *unaff_r8 = *(undefined4 *)(iVar3 + unaff_r4);
              *(int *)(iVar3 + unaff_r4) = *piVar8;
            }
            uVar5 = std::__malloc_alloc::allocate(unaff_r7);
            uVar11 = CONCAT44(unaff_r7 >> 4,uVar5);
            *(undefined4 *)(DAT_000755bc + 0x75530) = uVar5;
LAB_00075530:
            iVar3 = DAT_000755c4;
            *(int *)(DAT_000755c0 + 0x75538) =
                 (int)((ulonglong)uVar11 >> 0x20) + *(int *)(DAT_000755c0 + 0x75538);
            *(uint *)(DAT_000755c8 + 0x75546) = (int)uVar11 + unaff_r7;
            pthread_mutex_unlock((pthread_mutex_t *)(iVar3 + 0x75544));
          }
          iVar3 = __udivsi3(uVar6,uVar9);
          *(int *)((ulonglong)uVar1 >> 0x20) = iVar3;
          *piVar8 = (int)(iVar3 * uVar9 + (int)puVar2);
LAB_00075572:
          pthread_mutex_unlock((pthread_mutex_t *)(DAT_000755cc + 0x75578));
        }
        return puVar2;
      }
      *(undefined1 *)(iRam000754b8 + 0x7544a) = 1;
    }
    puVar2 = (undefined4 *)FUN_0007539c();
    iVar3 = pthread_setspecific(*(pthread_key_t *)(iRam000754a8 + 0x7540e),puVar2);
    if (iVar3 != 0) {
      if (iVar3 != 0xc) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      puVar2 = (undefined4 *)FUN_00073768(4);
      FUN_0007424c();
      FUN_000737e8(puVar2,*(undefined4 *)((int)piVar8 + DAT_000754bc),
                   *(undefined4 *)((int)piVar8 + LAB_000754c0));
    }
    pthread_mutex_unlock((pthread_mutex_t *)(DAT_000754c4 + 0x7546c));
  }
  return puVar2;
}

