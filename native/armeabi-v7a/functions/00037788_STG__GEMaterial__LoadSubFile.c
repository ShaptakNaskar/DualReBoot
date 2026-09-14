/* 00037788 | STG::GEMaterial::LoadSubFile */

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
  int iVar7;
  size_t __n;
  undefined4 uVar8;
  uint *puVar9;
  int *piVar10;
  void *__src;
  uint local_34;
  undefined4 local_30;
  undefined4 local_2c;
  
  local_2c = *(undefined4 *)(this + param_1 * 4 + 0xb4);
  local_30 = *(undefined4 *)(this + param_1 * 4 + 0xac);
  iVar7 = DAT_00037a14 + 0x377b4;
  puVar9 = *(uint **)(iVar7 + DAT_00037a18);
  if (((*puVar9 & 1) == 0) && (iVar2 = thunk_FUN_0007004c(puVar9), iVar4 = DAT_00037a24, iVar2 != 0)
     ) {
    piVar10 = *(int **)(iVar7 + DAT_00037a1c);
    piVar10[1] = 0;
    piVar10[2] = 0;
    *piVar10 = *(int *)(iVar7 + iVar4) + 8;
    thunk_FUN_000700b0(puVar9);
    __aeabi_atexit(piVar10,*(undefined4 *)(iVar7 + DAT_00037a28),
                   *(undefined4 *)(iVar7 + DAT_00037a2c));
  }
  else {
    piVar10 = *(int **)(iVar7 + DAT_00037a1c);
  }
  iVar4 = piVar10[1];
  if (iVar4 != 0) {
    iVar2 = *(int *)(iVar4 + 0x1c);
    while (iVar2 != *(int *)(param_2 + 0x1c)) {
      iVar4 = *(int *)(iVar4 + 0x28);
      if (iVar4 == 0) goto LAB_0003780c;
      iVar2 = *(int *)(iVar4 + 0x1c);
    }
    iVar4 = *(int *)(iVar4 + 0x20);
    if (iVar4 != 0) {
      uVar8 = 1;
      *(int *)(iVar4 + 4) = *(int *)(iVar4 + 4) + 1;
      goto LAB_0003794c;
    }
  }
LAB_0003780c:
  iVar4 = (**(code **)(*piVar10 + 8))(piVar10,param_2,&local_30);
  if (iVar4 == 0) {
    uVar8 = 0;
  }
  else {
    *(int *)(iVar4 + 4) = *(int *)(iVar4 + 4) + 1;
    piVar1 = operator_new(0x2c);
    __dest = piVar1 + 1;
    *piVar1 = *(int *)(iVar7 + DAT_00037a20) + 8;
    piVar1[5] = (int)__dest;
    piVar1[6] = (int)__dest;
    pvVar5 = *(void **)(param_2 + 0x14);
    __src = *(void **)(param_2 + 0x18);
    __n = (int)pvVar5 - (int)__src;
    uVar3 = __n + 1;
    if (uVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      std::__stl_throw_length_error((char *)(DAT_00037a30 + 0x379f8));
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
    iVar6 = piVar10[1];
    iVar7 = *(int *)(param_2 + 0x1c);
    iVar2 = *(int *)(iVar4 + 4);
    piVar1[8] = iVar4;
    piVar1[7] = iVar7;
    piVar1[9] = 0;
    piVar1[10] = 0;
    *(int *)(iVar4 + 4) = iVar2 + 1;
    if (iVar6 == 0) {
      piVar10[1] = (int)piVar1;
    }
    else {
      iVar7 = *(int *)(iVar6 + 0x24);
      piVar1[10] = iVar6;
      piVar10[1] = (int)piVar1;
      piVar1[9] = iVar7;
      iVar7 = *(int *)(iVar6 + 0x24);
      *(int **)(iVar6 + 0x24) = piVar1;
      if (iVar7 != 0) {
        *(int **)(iVar7 + 0x28) = piVar1;
      }
    }
    uVar8 = 1;
    piVar10[2] = piVar10[2] + 1;
  }
LAB_0003794c:
  piVar10 = *(int **)(this + (param_1 + 10) * 4 + 4);
  if ((piVar10 != (int *)0x0) && (iVar7 = piVar10[1], piVar10[1] = iVar7 + -1, iVar7 == 1)) {
    (**(code **)(*piVar10 + 4))();
  }
  *(int *)(this + (param_1 + 10) * 4 + 4) = iVar4;
  return uVar8;
}

