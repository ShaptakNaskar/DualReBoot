/* 000711cc | FUN_000711cc */

undefined4 * FUN_000711cc(uint param_1,int *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  int *piVar7;
  uint uVar8;
  pthread_mutex_t *__mutex;
  undefined4 *puVar9;
  int *piVar10;
  int *piVar11;
  int *piVar12;
  int iVar13;
  
  iVar2 = DAT_000712b8;
  iVar1 = DAT_000712ac;
  iVar5 = DAT_000712a4;
  piVar11 = (int *)(DAT_000712a8 + 0x711e4);
  piVar12 = (int *)(DAT_000712b0 + 0x711f2);
  piVar10 = (int *)(DAT_000712b4 + 0x711f4);
  do {
    puVar6 = (undefined4 *)(iVar5 + 0x7124c);
    pthread_mutex_lock((pthread_mutex_t *)(iVar2 + 0x7124a));
    uVar8 = *param_2 * param_1;
    puVar9 = (undefined4 *)*puVar6;
    uVar4 = *(int *)(iVar1 + 0x71260) - (int)puVar9;
    if (uVar8 < uVar4 || uVar8 - uVar4 == 0) {
      *puVar6 = (undefined4 *)((int)puVar9 + uVar8);
LAB_0007126c:
      pthread_mutex_unlock((pthread_mutex_t *)(DAT_000712c4 + 0x71274));
      return puVar9;
    }
    if (param_1 <= uVar4) {
      iVar5 = __udivsi3(uVar4,param_1);
      *param_2 = iVar5;
      *puVar6 = (undefined4 *)(param_1 * iVar5 + (int)puVar9);
      goto LAB_0007126c;
    }
    uVar8 = (*piVar11 + 7U & 0xfffffff8) + uVar8 * 2;
    if (uVar4 != 0) {
      iVar3 = (uVar4 + 7 >> 3) - 1;
      *puVar9 = *(undefined4 *)(param_3 + iVar3 * 4);
      *(undefined4 *)(param_3 + iVar3 * 4) = *puVar6;
    }
    iVar3 = std::__malloc_alloc::allocate(uVar8);
    iVar13 = *piVar10;
    piVar7 = (int *)(DAT_000712bc + 0x71230);
    __mutex = (pthread_mutex_t *)(DAT_000712c0 + 0x71232);
    *piVar12 = iVar3;
    *piVar7 = iVar3 + uVar8;
    *piVar10 = iVar13 + (uVar8 >> 4);
    pthread_mutex_unlock(__mutex);
  } while( true );
}

