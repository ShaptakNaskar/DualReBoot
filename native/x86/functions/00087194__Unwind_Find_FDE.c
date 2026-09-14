/* 00087194 | _Unwind_Find_FDE */

int _Unwind_Find_FDE(uint param_1,uint *param_2)

{
  int iVar1;
  uint *puVar2;
  uint *puVar3;
  undefined4 extraout_EDX;
  int unaff_EBX;
  uint *puVar4;
  int iVar5;
  uint local_38;
  uint local_34;
  uint local_30;
  uint local_2c;
  uint local_28;
  int local_24;
  undefined4 local_20;
  undefined4 uStack_14;
  
  uStack_14 = 0x8719f;
  FUN_0002e044();
  pthread_mutex_lock((pthread_mutex_t *)(&__DT_SYMTAB[0x696].st_other + unaff_EBX));
  for (puVar4 = *(uint **)((int)&__DT_SYMTAB[0x697].st_value + unaff_EBX + 1); puVar4 != (uint *)0x0
      ; puVar4 = (uint *)puVar4[5]) {
    if (*puVar4 <= param_1) {
      iVar5 = FUN_000869e9();
      goto LAB_00087215;
    }
  }
  do {
    puVar4 = *(uint **)((int)&__DT_SYMTAB[0x697].st_name + unaff_EBX + 1);
    if (puVar4 == (uint *)0x0) {
      iVar5 = 0;
      break;
    }
    *(uint *)((int)&__DT_SYMTAB[0x697].st_name + unaff_EBX + 1) = puVar4[5];
    iVar5 = FUN_000869e9();
    puVar2 = (uint *)((int)&__DT_SYMTAB[0x697].st_value + unaff_EBX + 1);
    for (puVar3 = *(uint **)((int)&__DT_SYMTAB[0x697].st_value + unaff_EBX + 1);
        (puVar3 != (uint *)0x0 && (*puVar4 <= *puVar3)); puVar3 = (uint *)puVar3[5]) {
      puVar2 = puVar3 + 5;
    }
    puVar4[5] = (uint)puVar3;
    *puVar2 = (uint)puVar4;
LAB_00087215:
  } while (iVar5 == 0);
  pthread_mutex_unlock((pthread_mutex_t *)(&__DT_SYMTAB[0x696].st_other + unaff_EBX));
  if (iVar5 == 0) {
    local_30 = 0;
    local_34 = param_1;
    local_2c = 0;
    local_28 = 0;
    local_24 = 0;
    local_20 = 1;
    iVar1 = dl_iterate_phdr(unaff_EBX + -0xc49,&local_34,param_1,param_1);
    if ((-1 < iVar1) && (iVar5 = local_24, local_24 != 0)) {
      *param_2 = local_30;
      param_2[1] = local_2c;
      param_2[2] = local_28;
    }
  }
  else {
    *param_2 = puVar4[1];
    param_2[1] = puVar4[2];
    if ((puVar4[4] & 4) != 0) {
      FUN_000860ff();
    }
    FUN_00085ef2();
    FUN_00085f3a(iVar5 + 8,&local_38,extraout_EDX,extraout_EDX);
    param_2[2] = local_38;
  }
  return iVar5;
}

