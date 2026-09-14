/* 0003a030 | STG::GEMaterial::LoadSubFile */

/* STG::GEMaterial::LoadSubFile(unsigned long, STG::FFileHash const&) */

undefined4 __thiscall
STG::GEMaterial::LoadSubFile(GEMaterial *this,ulong param_1,FFileHash *param_2)

{
  char *pcVar1;
  void *__src;
  int iVar2;
  int *piVar3;
  size_t __n;
  uint uVar4;
  void *pvVar5;
  int iVar6;
  int unaff_EBX;
  int *local_34;
  uint local_30 [4];
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 uStack_14;
  
  uStack_14 = 0x3a03b;
  FUN_0002e044();
  pcVar1 = *(char **)(unaff_EBX + 0x61e55);
  local_20 = *(undefined4 *)(this + param_1 * 4 + 0xac);
  local_1c = *(undefined4 *)(this + param_1 * 4 + 0xb4);
  if ((*pcVar1 == '\0') && (iVar2 = FUN_00080eb0(pcVar1), iVar2 != 0)) {
    piVar3 = *(int **)(unaff_EBX + 0x61e59);
    *piVar3 = *(int *)(unaff_EBX + 0x61e5d) + 8;
    piVar3[1] = 0;
    piVar3[2] = 0;
    FUN_00080f40(pcVar1);
    __cxa_atexit(*(undefined4 *)(unaff_EBX + 0x61e61),*(undefined4 *)(unaff_EBX + 0x61e59),
                 *(undefined4 *)(unaff_EBX + 0x61e2d));
  }
  iVar2 = *(int *)(*(int *)(unaff_EBX + 0x61e59) + 4);
  if (iVar2 != 0) {
    iVar6 = *(int *)(iVar2 + 0x1c);
    while (iVar6 != *(int *)(param_2 + 0x1c)) {
      iVar2 = *(int *)(iVar2 + 0x28);
      if (iVar2 == 0) goto LAB_0003a0a2;
      iVar6 = *(int *)(iVar2 + 0x1c);
    }
    iVar2 = *(int *)(iVar2 + 0x20);
    if (iVar2 != 0) {
      *(int *)(iVar2 + 4) = *(int *)(iVar2 + 4) + 1;
      local_34 = (int *)0x1;
      goto LAB_0003a23c;
    }
  }
LAB_0003a0a2:
  iVar2 = (**(code **)(**(int **)(unaff_EBX + 0x61e59) + 8))
                    (*(undefined4 *)(unaff_EBX + 0x61e59),param_2,&local_20);
  if (iVar2 == 0) {
    local_34 = (int *)0x0;
  }
  else {
    *(int *)(iVar2 + 4) = *(int *)(iVar2 + 4) + 1;
    piVar3 = operator_new(0x2c);
    *piVar3 = *(int *)(USerialize::Load + unaff_EBX + 1) + 8;
    local_34 = piVar3 + 1;
    piVar3[5] = (int)local_34;
    piVar3[6] = (int)local_34;
    pvVar5 = *(void **)(param_2 + 0x14);
    __src = *(void **)(param_2 + 0x18);
    __n = (int)pvVar5 - (int)__src;
    uVar4 = __n + 1;
    if (uVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      std::__stl_throw_length_error((char *)(unaff_EBX + 0x4d2d1));
    }
    if (0x10 < uVar4) {
      local_30[0] = uVar4;
      if (uVar4 < 0x81) {
        local_34 = (int *)std::__node_alloc::_M_allocate(local_30);
      }
      else {
        local_34 = operator_new(uVar4);
      }
      piVar3[6] = (int)local_34;
      piVar3[5] = (int)local_34;
      piVar3[1] = (int)((int)local_34 + local_30[0]);
    }
    if (pvVar5 != __src) {
      pvVar5 = memcpy(local_34,__src,__n);
      local_34 = (int *)((int)pvVar5 + __n);
    }
    piVar3[5] = (int)local_34;
    *(undefined1 *)local_34 = 0;
    piVar3[7] = *(int *)(param_2 + 0x1c);
    piVar3[8] = iVar2;
    piVar3[9] = 0;
    piVar3[10] = 0;
    iVar6 = *(int *)(unaff_EBX + 0x61e59);
    *(int *)(iVar2 + 4) = *(int *)(iVar2 + 4) + 1;
    iVar6 = *(int *)(iVar6 + 4);
    if (iVar6 == 0) {
      iVar6 = *(int *)(unaff_EBX + 0x61e59);
      *(int **)(iVar6 + 4) = piVar3;
    }
    else {
      piVar3[9] = *(int *)(iVar6 + 0x24);
      piVar3[10] = iVar6;
      if (*(int *)(iVar6 + 0x24) != 0) {
        *(int **)(*(int *)(iVar6 + 0x24) + 0x28) = piVar3;
      }
      *(int **)(iVar6 + 0x24) = piVar3;
      iVar6 = *(int *)(unaff_EBX + 0x61e59);
      *(int **)(iVar6 + 4) = piVar3;
    }
    *(int *)(iVar6 + 8) = *(int *)(iVar6 + 8) + 1;
    local_34 = (int *)0x1;
  }
LAB_0003a23c:
  piVar3 = *(int **)(this + (param_1 + 8) * 4 + 0xc);
  if ((piVar3 != (int *)0x0) && (iVar6 = piVar3[1], piVar3[1] = iVar6 + -1, iVar6 == 1)) {
    (**(code **)(*piVar3 + 4))(piVar3);
  }
  *(int *)(this + (param_1 + 8) * 4 + 0xc) = iVar2;
  return local_34;
}

