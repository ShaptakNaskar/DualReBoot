/* 000754cc | FUN_000754cc */

undefined4 * FUN_000754cc(uint param_1,int *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  pthread_mutex_t *__mutex;
  undefined4 *puVar6;
  int *piVar7;
  int *piVar8;
  uint uVar9;
  
  iVar1 = DAT_000755b4;
  iVar5 = DAT_000755ac;
  __mutex = (pthread_mutex_t *)(DAT_000755b0 + 0x754ee);
  piVar8 = (int *)(DAT_000755b8 + 0x754f8);
  do {
    piVar7 = (int *)(iVar5 + 0x75552);
    pthread_mutex_lock(__mutex);
    puVar6 = (undefined4 *)*piVar7;
    uVar9 = *param_2 * param_1;
    uVar4 = *(int *)(iVar1 + 0x75566) - (int)puVar6;
    if (uVar9 < uVar4 || uVar9 - uVar4 == 0) {
      *piVar7 = (int)(uVar9 + (int)puVar6);
LAB_00075572:
      pthread_mutex_unlock((pthread_mutex_t *)(DAT_000755cc + 0x75578));
      return puVar6;
    }
    if (param_1 <= uVar4) {
      iVar5 = __udivsi3(uVar4,param_1);
      *param_2 = iVar5;
      *piVar7 = (int)(iVar5 * param_1 + (int)puVar6);
      goto LAB_00075572;
    }
    uVar9 = uVar9 * 2 + (*piVar8 + 7U & 0xfffffff8);
    if (uVar4 != 0) {
      iVar2 = ((uVar4 + 7 >> 3) - 1) * 4;
      *puVar6 = *(undefined4 *)(iVar2 + param_3);
      *(int *)(iVar2 + param_3) = *piVar7;
    }
    iVar3 = std::__malloc_alloc::allocate(uVar9);
    *(int *)(DAT_000755bc + 0x75530) = iVar3;
    iVar2 = DAT_000755c4;
    *(int *)(DAT_000755c0 + 0x75538) = (uVar9 >> 4) + *(int *)(DAT_000755c0 + 0x75538);
    *(uint *)(DAT_000755c8 + 0x75546) = iVar3 + uVar9;
    pthread_mutex_unlock((pthread_mutex_t *)(iVar2 + 0x75544));
  } while( true );
}

