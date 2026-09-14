/* 0003953c | STG::GEMaterial::LoadSubFile */

/* STG::GEMaterial::LoadSubFile(unsigned long, STG::FFileHash const&) */

undefined4 __thiscall
STG::GEMaterial::LoadSubFile(GEMaterial *this,ulong param_1,FFileHash *param_2)

{
  int *piVar1;
  int *__dest;
  int iVar2;
  uint uVar3;
  int iVar4;
  void *pvVar5;
  int iVar6;
  size_t __n;
  undefined4 uVar7;
  uint *puVar8;
  int *piVar9;
  void *__src;
  uint local_34;
  undefined4 local_30;
  undefined4 local_2c;
  
  local_2c = *(undefined4 *)(this + param_1 * 4 + 0xb4);
  local_30 = *(undefined4 *)(this + param_1 * 4 + 0xac);
  iVar6 = DAT_000397cc + 0x3956c;
  puVar8 = *(uint **)(iVar6 + DAT_000397d0);
  if (((*puVar8 & 1) == 0) && (iVar2 = thunk_FUN_00074338(puVar8), iVar4 = DAT_000397dc, iVar2 != 0)
     ) {
    piVar9 = *(int **)(iVar6 + DAT_000397d4);
    piVar9[1] = 0;
    piVar9[2] = 0;
    *piVar9 = *(int *)(iVar6 + iVar4) + 8;
    thunk_FUN_000743a0(puVar8);
    __aeabi_atexit(piVar9,*(undefined4 *)(iVar6 + DAT_000397e0),
                   *(undefined4 *)(iVar6 + DAT_000397e4));
  }
  else {
    piVar9 = *(int **)(iVar6 + DAT_000397d4);
  }
  iVar4 = piVar9[1];
  if (iVar4 != 0) {
    iVar2 = *(int *)(iVar4 + 0x1c);
    while (iVar2 != *(int *)(param_2 + 0x1c)) {
      iVar4 = *(int *)(iVar4 + 0x28);
      if (iVar4 == 0) goto LAB_000395c4;
      iVar2 = *(int *)(iVar4 + 0x1c);
    }
    iVar4 = *(int *)(iVar4 + 0x20);
    if (iVar4 != 0) {
      uVar7 = 1;
      *(int *)(iVar4 + 4) = *(int *)(iVar4 + 4) + 1;
      goto LAB_00039704;
    }
  }
LAB_000395c4:
  iVar4 = (**(code **)(*piVar9 + 8))(piVar9,param_2,&local_30);
  if (iVar4 == 0) {
    uVar7 = 0;
  }
  else {
    *(int *)(iVar4 + 4) = *(int *)(iVar4 + 4) + 1;
    piVar1 = operator_new(0x2c);
    __dest = piVar1 + 1;
    *piVar1 = *(int *)(iVar6 + DAT_000397d8) + 8;
    piVar1[5] = (int)__dest;
    piVar1[6] = (int)__dest;
    __src = *(void **)(param_2 + 0x18);
    pvVar5 = *(void **)(param_2 + 0x14);
    __n = (int)pvVar5 - (int)__src;
    uVar3 = __n + 1;
    if (uVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      std::__stl_throw_length_error((char *)(DAT_000397e8 + 0x397b0));
    }
    if (0x10 < uVar3) {
      local_34 = uVar3;
      if (uVar3 < 0x81) {
        __dest = (int *)std::__node_alloc::_M_allocate(&local_34);
      }
      else {
        __dest = operator_new(uVar3);
      }
      piVar1[6] = (int)__dest;
      piVar1[5] = (int)__dest;
      piVar1[1] = (int)((int)__dest + local_34);
    }
    if (__src != pvVar5) {
      pvVar5 = memcpy(__dest,__src,__n);
      __dest = (int *)((int)pvVar5 + __n);
    }
    piVar1[5] = (int)__dest;
    *(undefined1 *)__dest = 0;
    iVar6 = *(int *)(iVar4 + 4);
    iVar2 = piVar9[1];
    piVar1[7] = *(int *)(param_2 + 0x1c);
    piVar1[8] = iVar4;
    piVar1[9] = 0;
    piVar1[10] = 0;
    *(int *)(iVar4 + 4) = iVar6 + 1;
    if (iVar2 == 0) {
      piVar9[1] = (int)piVar1;
    }
    else {
      iVar6 = *(int *)(iVar2 + 0x24);
      piVar1[10] = iVar2;
      piVar9[1] = (int)piVar1;
      piVar1[9] = iVar6;
      iVar6 = *(int *)(iVar2 + 0x24);
      *(int **)(iVar2 + 0x24) = piVar1;
      if (iVar6 != 0) {
        *(int **)(iVar6 + 0x28) = piVar1;
      }
    }
    uVar7 = 1;
    piVar9[2] = piVar9[2] + 1;
  }
LAB_00039704:
  piVar9 = *(int **)(this + (param_1 + 10) * 4 + 4);
  if ((piVar9 != (int *)0x0) && (iVar6 = piVar9[1], piVar9[1] = iVar6 + -1, iVar6 == 1)) {
    (**(code **)(*piVar9 + 4))();
  }
  *(int *)(this + (param_1 + 10) * 4 + 4) = iVar4;
  return uVar7;
}

