/* 0006e930 | STG::UStringBase<char,int>::Replace */

/* STG::UStringBase<char, int>::Replace(STG::UStringBase<char, int> const&, STG::UStringBase<char,
   int> const&) */

UStringBase<char,int> * __thiscall
STG::UStringBase<char,int>::Replace
          (UStringBase<char,int> *this,UStringBase *param_1,UStringBase *param_2)

{
  string *this_00;
  char cVar1;
  char *pcVar2;
  char *__src;
  char **ppcVar3;
  char **ppcVar4;
  size_t sVar5;
  char *pcVar6;
  void *pvVar7;
  int iVar8;
  int iVar9;
  char *pcVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  char *pcVar14;
  char *pcVar15;
  void *__src_00;
  char *pcVar16;
  int unaff_EBX;
  uint *puVar17;
  bool bVar18;
  char *local_cc;
  char *local_b0;
  uint local_a0 [4];
  char *local_90 [4];
  char **local_80;
  char **local_7c;
  char *local_70 [4];
  char **local_60;
  char **local_5c;
  int local_50;
  uint local_4c [4];
  uint *local_3c;
  uint *local_38;
  int local_30;
  uint local_2c [4];
  uint *local_1c;
  uint *local_18;
  int local_14;
  
  local_14 = 0x6e93b;
  FUN_0002e044();
  local_4c[0] = local_4c[0] & 0xffffff00;
  local_14 = **(int **)((int)&__DT_JMPREL[0x24].r_info + unaff_EBX + 1);
  local_50 = *(int *)((int)&__DT_JMPREL[0x25].r_offset + unaff_EBX + 1) + 8;
  local_2c[0] = local_2c[0] & 0xffffff00;
  local_3c = local_4c;
  local_38 = local_4c;
  local_30 = local_50;
  local_1c = local_2c;
  local_18 = local_2c;
  while( true ) {
    pcVar2 = *(char **)(param_1 + 0x18);
    sVar5 = strlen(pcVar2);
    __src = *(char **)(this + 0x18);
    uVar13 = *(int *)(this + 0x14) - (int)__src;
    if (uVar13 < sVar5) break;
    pcVar14 = __src + uVar13;
    pcVar15 = pcVar14;
    if (sVar5 != 0) {
      pcVar15 = __src;
      if (__src != pcVar14) {
        pcVar6 = pcVar2 + sVar5;
        local_cc = pcVar14;
        if (pcVar2 != pcVar6) {
          if (pcVar2 != pcVar6 + -1) {
            local_b0 = pcVar14 + -1;
            do {
              for (; local_cc = local_b0 + 1, pcVar6[-1] == *local_b0; local_b0 = local_b0 + -1) {
                pcVar10 = local_b0;
                pcVar16 = pcVar6 + -1;
                pcVar15 = pcVar14;
                if (__src == local_b0) goto joined_r0x0006f07d;
                while (pcVar10[-1] == pcVar16[-1]) {
                  if (pcVar2 == pcVar16 + -1) goto LAB_0006f065;
                  pcVar10 = pcVar10 + -1;
                  pcVar16 = pcVar16 + -1;
                  if (__src == pcVar10) goto LAB_0006e9f9;
                }
              }
              bVar18 = __src != local_b0;
              local_b0 = local_b0 + -1;
              pcVar15 = pcVar14;
            } while (bVar18);
            goto joined_r0x0006f07d;
          }
          cVar1 = pcVar14[-1];
          while (cVar1 != pcVar6[-1]) {
            if (__src == local_cc + -1) goto LAB_0006e9f9;
            cVar1 = local_cc[-2];
            local_cc = local_cc + -1;
          }
        }
LAB_0006f065:
        pcVar15 = local_cc + ((int)pcVar2 - (int)pcVar6);
      }
joined_r0x0006f07d:
      if (pcVar14 == pcVar15) break;
    }
    uVar13 = (int)pcVar15 - (int)__src;
    if (uVar13 == 0xffffffff) break;
    uVar11 = *(int *)(this + 0x14) - (int)__src;
    if (uVar13 <= uVar11) {
      uVar11 = uVar13;
    }
    local_60 = local_70;
    iVar9 = *(int *)(param_1 + 0x14);
    sVar5 = (int)(__src + uVar11) - (int)__src;
    uVar12 = sVar5 + 1;
    local_5c = local_60;
    if (uVar12 == 0) {
LAB_0006eec0:
                    /* WARNING: Subroutine does not return */
      std::__stl_throw_length_error
                ("_ZN3STG7MMatrix19MakeLookAtTransformERKNS_8MVector3ES3_S3_" + unaff_EBX + 0x16);
    }
    if (0x10 < uVar12) {
      local_a0[0] = uVar12;
      if (uVar12 < 0x81) {
        local_60 = (char **)std::__node_alloc::_M_allocate(local_a0);
      }
      else {
        local_60 = operator_new(uVar12);
      }
      local_70[0] = (char *)((int)local_60 + local_a0[0]);
    }
    local_5c = local_60;
    if (__src != __src + uVar11) {
      pvVar7 = memcpy(local_60,__src,sVar5);
      local_60 = (char **)((int)pvVar7 + sVar5);
    }
    *(undefined1 *)local_60 = 0;
    ppcVar4 = local_5c;
    ppcVar3 = local_60;
    uVar12 = (int)local_60 - (int)local_5c;
    uVar11 = (int)local_3c - (int)local_38;
    if (uVar11 < uVar12) {
      iVar8 = 0;
      if (uVar11 != 0) {
        memmove(local_38,local_5c,uVar11);
        iVar8 = (int)local_3c - (int)local_38;
      }
      std::string::_M_append((string *)local_4c,(char *)((int)ppcVar4 + iVar8),(char *)ppcVar3);
    }
    else {
      if (uVar12 != 0) {
        memmove(local_38,local_5c,uVar12);
      }
      puVar17 = (uint *)((int)local_38 + uVar12);
      if (local_3c != puVar17) {
        *(char *)puVar17 = (char)*local_3c;
        local_3c = puVar17;
      }
    }
    if ((local_5c != local_70) && (local_5c != (char **)0x0)) {
      if ((uint)((int)local_70[0] - (int)local_5c) < 0x81) {
        std::__node_alloc::_M_deallocate(local_5c,(int)local_70[0] - (int)local_5c);
      }
      else {
        operator_delete(local_5c);
      }
    }
    iVar8 = *(int *)(this + 0x18);
    uVar13 = (iVar9 - (int)pcVar2) + uVar13;
    local_80 = local_90;
    local_7c = local_90;
    if ((uint)(*(int *)(this + 0x14) - iVar8) < uVar13) {
                    /* WARNING: Subroutine does not return */
      std::__stl_throw_out_of_range
                ("_ZN3STG7MMatrix19MakeLookAtTransformERKNS_8MVector3ES3_S3_" + unaff_EBX + 0x16);
    }
    pvVar7 = (void *)((*(int *)(this + 0x14) - iVar8) + iVar8);
    __src_00 = (void *)(uVar13 + iVar8);
    sVar5 = (int)pvVar7 - (int)__src_00;
    uVar13 = sVar5 + 1;
    if (uVar13 == 0) goto LAB_0006eec0;
    if (0x10 < uVar13) {
      local_a0[0] = uVar13;
      if (uVar13 < 0x81) {
        local_80 = (char **)std::__node_alloc::_M_allocate(local_a0);
      }
      else {
        local_80 = operator_new(uVar13);
      }
      local_90[0] = (char *)((int)local_80 + local_a0[0]);
    }
    local_7c = local_80;
    if (pvVar7 != __src_00) {
      pvVar7 = memcpy(local_80,__src_00,sVar5);
      local_80 = (char **)((int)pvVar7 + sVar5);
    }
    *(undefined1 *)local_80 = 0;
    ppcVar4 = local_7c;
    ppcVar3 = local_80;
    uVar13 = (int)local_80 - (int)local_7c;
    uVar11 = (int)local_1c - (int)local_18;
    if (uVar11 < uVar13) {
      iVar9 = 0;
      if (uVar11 != 0) {
        memmove(local_18,local_7c,uVar11);
        iVar9 = (int)local_1c - (int)local_18;
      }
      std::string::_M_append((string *)local_2c,(char *)((int)ppcVar4 + iVar9),(char *)ppcVar3);
    }
    else {
      if (uVar13 != 0) {
        memmove(local_18,local_7c,uVar13);
      }
      puVar17 = (uint *)((int)local_18 + uVar13);
      if (local_1c != puVar17) {
        *(char *)puVar17 = (char)*local_1c;
        local_1c = puVar17;
      }
    }
    if ((local_7c != local_90) && (local_7c != (char **)0x0)) {
      if ((uint)((int)local_90[0] - (int)local_7c) < 0x81) {
        std::__node_alloc::_M_deallocate(local_7c,(int)local_90[0] - (int)local_7c);
      }
      else {
        operator_delete(local_7c);
      }
    }
    puVar17 = local_38;
    if (*(undefined1 **)(this + 0x18) != *(undefined1 **)(this + 0x14)) {
      **(undefined1 **)(this + 0x18) = 0;
      *(undefined4 *)(this + 0x14) = *(undefined4 *)(this + 0x18);
    }
    this_00 = (string *)(this + 4);
    sVar5 = strlen((char *)local_38);
    std::string::_M_append(this_00,(char *)puVar17,(char *)((int)puVar17 + sVar5));
    pcVar2 = *(char **)(param_2 + 0x18);
    sVar5 = strlen(pcVar2);
    std::string::_M_append(this_00,pcVar2,pcVar2 + sVar5);
    puVar17 = local_18;
    sVar5 = strlen((char *)local_18);
    std::string::_M_append(this_00,(char *)puVar17,(char *)((int)puVar17 + sVar5));
  }
LAB_0006e9f9:
  if (local_38 != local_3c) {
    *(undefined1 *)local_38 = 0;
    local_3c = local_38;
  }
  if (local_18 != local_1c) {
    *(undefined1 *)local_18 = 0;
    local_1c = local_18;
  }
  local_30 = *(int *)((int)&__DT_JMPREL[0x25].r_offset + unaff_EBX + 1) + 8;
  if ((local_18 != local_2c) && (local_18 != (uint *)0x0)) {
    if (local_2c[0] - (int)local_18 < 0x81) {
      std::__node_alloc::_M_deallocate(local_18,local_2c[0] - (int)local_18);
    }
    else {
      operator_delete(local_18);
    }
  }
  local_50 = *(int *)((int)&__DT_JMPREL[0x25].r_offset + unaff_EBX + 1) + 8;
  if ((local_38 != local_4c) && (local_38 != (uint *)0x0)) {
    if (local_4c[0] - (int)local_38 < 0x81) {
      std::__node_alloc::_M_deallocate(local_38,local_4c[0] - (int)local_38);
    }
    else {
      operator_delete(local_38);
    }
  }
  if (local_14 == **(int **)((int)&__DT_JMPREL[0x24].r_info + unaff_EBX + 1)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0002e000();
}

