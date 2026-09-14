/* 00070620 | FUN_00070620 */

void __regparm3 FUN_00070620(int param_1)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  char *__src;
  string *psVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  char **ppcVar9;
  char **ppcVar10;
  string *psVar11;
  size_t sVar12;
  char *pcVar13;
  undefined1 *puVar14;
  void *pvVar15;
  int iVar16;
  int iVar17;
  uint uVar18;
  uint *puVar19;
  char extraout_DL;
  uint uVar20;
  uint *puVar21;
  undefined1 *puVar22;
  void *__src_00;
  int unaff_EBX;
  char *local_118;
  uint *local_114;
  string *local_110;
  uint local_100 [4];
  char *local_f0 [4];
  char **local_e0;
  char **local_dc;
  char *local_d0 [4];
  char **local_c0;
  char **local_bc;
  int local_b0;
  uint local_ac [4];
  uint *local_9c;
  uint *local_98;
  int local_90;
  uint local_8c [4];
  uint *local_7c;
  uint *local_78;
  int local_70;
  string *local_6c [4];
  string *local_5c;
  string *local_58;
  int local_50;
  char *local_4c [4];
  char **local_3c;
  char **local_38;
  int local_30;
  string *local_2c [4];
  string *local_1c;
  string *local_18;
  int local_14;
  
  local_14 = 0x7062d;
  FUN_0002e044();
  local_ac[0] = local_ac[0] & 0xffffff00;
  local_8c[0] = local_8c[0] & 0xffffff00;
  local_14 = **(int **)((int)&__DT_REL[0x237].r_offset + unaff_EBX + 3);
  local_b0 = *(int *)((int)&__DT_REL[0x237].r_info + unaff_EBX + 3) + 8;
  pcVar2 = *(char **)((int)&__DT_REL[0x53b].r_offset + unaff_EBX + 3);
  local_9c = local_ac;
  local_98 = local_ac;
  local_90 = local_b0;
  local_7c = local_8c;
  local_78 = local_8c;
  sVar12 = strlen(pcVar2);
  pcVar3 = *(char **)(param_1 + 0x34);
  __src = *(char **)(param_1 + 0x38);
  uVar20 = (int)pcVar3 - (int)__src;
  if (uVar20 == 0) {
    if (sVar12 != 0) goto LAB_00070750;
    local_118 = (char *)0x0;
    uVar20 = 0;
LAB_00070cba:
    iVar17 = *(int *)((int)&__DT_REL[0x53a].r_info + unaff_EBX + 3);
    sVar12 = (int)(__src + uVar20) - (int)__src;
    uVar18 = sVar12 + 1;
    local_e0 = local_f0;
    local_dc = local_f0;
    if (uVar18 == 0) goto LAB_000709f8;
    if (0x10 < uVar18) {
      local_100[0] = uVar18;
      if (uVar18 < 0x81) {
        local_e0 = (char **)std::__node_alloc::_M_allocate(local_100);
      }
      else {
        local_e0 = operator_new(uVar18);
      }
      local_f0[0] = (char *)((int)local_e0 + local_100[0]);
    }
    local_dc = local_e0;
    if (__src != __src + uVar20) {
      pvVar15 = memcpy(local_e0,__src,sVar12);
      local_e0 = (char **)((int)pvVar15 + sVar12);
    }
    *(undefined1 *)local_e0 = 0;
    ppcVar10 = local_dc;
    ppcVar9 = local_e0;
    uVar20 = (int)local_e0 - (int)local_dc;
    uVar18 = (int)local_9c - (int)local_98;
    if (uVar18 < uVar20) {
      iVar16 = 0;
      if (uVar18 != 0) {
        memmove(local_98,local_dc,uVar18);
        iVar16 = (int)local_9c - (int)local_98;
      }
      std::string::_M_append((string *)local_ac,(char *)((int)ppcVar10 + iVar16),(char *)ppcVar9);
    }
    else {
      if (uVar20 != 0) {
        memmove(local_98,local_dc,uVar20);
      }
      puVar19 = (uint *)((int)local_98 + uVar20);
      if (local_9c != puVar19) {
        *(char *)puVar19 = (char)*local_9c;
        local_9c = puVar19;
      }
    }
    if ((local_dc != local_f0) && (local_dc != (char **)0x0)) {
      if ((uint)((int)local_f0[0] - (int)local_dc) < 0x81) {
        std::__node_alloc::_M_deallocate(local_dc,(int)local_f0[0] - (int)local_dc);
      }
      else {
        operator_delete(local_dc);
      }
    }
    iVar16 = *(int *)(param_1 + 0x38);
    uVar20 = *(int *)(param_1 + 0x34) - iVar16;
    uVar18 = (iVar17 - (int)pcVar2) + (int)local_118;
    local_c0 = local_d0;
    local_bc = local_d0;
    if (uVar20 < uVar18) {
                    /* WARNING: Subroutine does not return */
      std::__stl_throw_out_of_range((char *)((int)&__DT_SYMTAB[0x6bc].st_size + unaff_EBX + 3));
    }
    pvVar15 = (void *)(uVar20 + iVar16);
    __src_00 = (void *)(uVar18 + iVar16);
    sVar12 = (int)pvVar15 - (int)__src_00;
    uVar20 = sVar12 + 1;
    if (uVar20 == 0) goto LAB_000709f8;
    if (0x10 < uVar20) {
      local_100[0] = uVar20;
      if (uVar20 < 0x81) {
        local_c0 = (char **)std::__node_alloc::_M_allocate(local_100);
      }
      else {
        local_c0 = operator_new(uVar20);
      }
      local_d0[0] = (char *)((int)local_c0 + local_100[0]);
    }
    local_bc = local_c0;
    if (pvVar15 != __src_00) {
      pvVar15 = memcpy(local_c0,__src_00,sVar12);
      local_c0 = (char **)((int)pvVar15 + sVar12);
    }
    *(undefined1 *)local_c0 = 0;
    ppcVar10 = local_bc;
    ppcVar9 = local_c0;
    uVar20 = (int)local_c0 - (int)local_bc;
    uVar18 = (int)local_7c - (int)local_78;
    if (uVar18 < uVar20) {
      iVar17 = 0;
      if (uVar18 != 0) {
        memmove(local_78,local_bc,uVar18);
        iVar17 = (int)local_7c - (int)local_78;
      }
      std::string::_M_append((string *)local_8c,(char *)((int)ppcVar10 + iVar17),(char *)ppcVar9);
    }
    else {
      if (uVar20 != 0) {
        memmove(local_78,local_bc,uVar20);
      }
      puVar19 = (uint *)((int)local_78 + uVar20);
      if (local_7c != puVar19) {
        *(char *)puVar19 = (char)*local_7c;
        local_7c = puVar19;
      }
    }
    if ((local_bc != local_d0) && (local_bc != (char **)0x0)) {
      if ((uint)((int)local_d0[0] - (int)local_bc) < 0x81) {
        std::__node_alloc::_M_deallocate(local_bc,(int)local_d0[0] - (int)local_bc);
      }
      else {
        operator_delete(local_bc);
      }
    }
    local_114 = local_9c;
    puVar19 = local_98;
  }
  else {
    if (sVar12 <= uVar20) {
      pcVar13 = pcVar2 + sVar12;
      local_118 = __src;
      if ((pcVar2 != pcVar13) && (pcVar3 != __src)) {
        if (pcVar13 == pcVar2 + 1) {
          cVar1 = *__src;
          pcVar13 = __src;
          while ((local_118 = pcVar13, cVar1 != *pcVar2 &&
                 (pcVar13 = pcVar13 + 1, local_118 = pcVar3, pcVar3 != pcVar13))) {
            cVar1 = *pcVar13;
          }
        }
        else {
          pcVar6 = __src;
          while (pcVar5 = pcVar6, pcVar6 = pcVar5 + 1, local_118 = pcVar3, pcVar6 != pcVar3 + 1) {
            pcVar7 = pcVar2 + 1;
            pcVar8 = pcVar6;
            if (pcVar6[-1] == *pcVar2) {
              while( true ) {
                local_118 = pcVar3;
                if (pcVar8 == pcVar3) goto LAB_00071074;
                if (*pcVar8 != *pcVar7) break;
                local_118 = pcVar5;
                if (pcVar13 == pcVar7 + 1) goto LAB_00071074;
                pcVar7 = pcVar7 + 1;
                pcVar8 = pcVar8 + 1;
              }
            }
          }
        }
      }
LAB_00071074:
      if ((pcVar3 != local_118) &&
         (local_118 = (char *)((int)local_118 - (int)__src), local_118 != (char *)0xffffffff)) {
        if (local_118 <= uVar20) {
          uVar20 = (uint)local_118;
        }
        goto LAB_00070cba;
      }
    }
LAB_00070750:
    local_114 = local_ac;
    puVar19 = local_114;
    if (local_8c != (uint *)(param_1 + 0x24)) {
      uVar18 = (int)local_7c - (int)local_78;
      if (uVar18 < uVar20) {
        iVar17 = 0;
        if (uVar18 != 0) {
          memmove(local_78,__src,uVar18);
          iVar17 = (int)local_7c - (int)local_78;
        }
        std::string::_M_append((string *)local_8c,__src + iVar17,pcVar3);
        local_114 = local_9c;
        puVar19 = local_98;
      }
      else {
        if (uVar20 != 0) {
          memmove(local_78,__src,uVar20);
        }
        puVar21 = (uint *)((int)local_78 + uVar20);
        puVar19 = local_98;
        if (puVar21 == local_7c) {
          local_114 = local_9c;
        }
        else {
          *(char *)puVar21 = (char)*local_7c;
          local_114 = local_9c;
          local_7c = puVar21;
        }
      }
    }
  }
  if (extraout_DL == '\0') {
    sVar12 = (int)local_114 - (int)puVar19;
    uVar20 = sVar12 + 1;
    local_70 = *(int *)((int)&__DT_REL[0x237].r_info + unaff_EBX + 3) + 8;
    local_5c = (string *)local_6c;
    local_58 = (string *)local_6c;
    if (uVar20 == 0) {
LAB_000709f8:
                    /* WARNING: Subroutine does not return */
      std::__stl_throw_length_error((char *)((int)&__DT_SYMTAB[0x6bc].st_size + unaff_EBX + 3));
    }
    if (0x10 < uVar20) {
      local_100[0] = uVar20;
      if (uVar20 < 0x81) {
        local_5c = (string *)std::__node_alloc::_M_allocate(local_100);
      }
      else {
        local_5c = operator_new(uVar20);
      }
      local_6c[0] = local_5c + local_100[0];
    }
    local_58 = local_5c;
    if (local_114 != puVar19) {
      pvVar15 = memcpy(local_5c,puVar19,sVar12);
      local_5c = (string *)((int)pvVar15 + sVar12);
    }
    *local_5c = (string)0x0;
    pcVar2 = *(char **)((int)&__DT_REL[0x53b].r_offset + unaff_EBX + 3);
    sVar12 = strlen(pcVar2);
    std::string::_M_append((string *)local_6c,pcVar2,pcVar2 + sVar12);
    psVar11 = local_58;
    psVar4 = local_5c;
    local_50 = *(int *)((int)&__DT_REL[0x237].r_info + unaff_EBX + 3) + 8;
    sVar12 = (int)local_5c - (int)local_58;
    uVar20 = sVar12 + 1;
    local_3c = local_4c;
    local_38 = local_4c;
    if (uVar20 == 0) goto LAB_000709f8;
    if (0x10 < uVar20) {
      local_100[0] = uVar20;
      if (uVar20 < 0x81) {
        local_38 = (char **)std::__node_alloc::_M_allocate(local_100);
      }
      else {
        local_38 = operator_new(uVar20);
      }
      local_4c[0] = (char *)((int)local_38 + local_100[0]);
    }
    local_3c = local_38;
    if (psVar4 != psVar11) {
      pvVar15 = memcpy(local_38,psVar11,sVar12);
      local_3c = (char **)((int)pvVar15 + sVar12);
    }
    puVar19 = local_78;
    *(undefined1 *)local_3c = 0;
    sVar12 = strlen((char *)local_78);
    std::string::_M_append((string *)local_4c,(char *)puVar19,(char *)((int)puVar19 + sVar12));
    ppcVar10 = local_38;
    ppcVar9 = local_3c;
    if ((char **)(param_1 + 0x24) != local_4c) {
      puVar14 = *(undefined1 **)(param_1 + 0x34);
      uVar18 = (int)local_3c - (int)local_38;
      pvVar15 = *(void **)(param_1 + 0x38);
      uVar20 = (int)puVar14 - (int)pvVar15;
      if (uVar20 < uVar18) {
        iVar17 = 0;
        if (uVar20 != 0) {
          memmove(pvVar15,local_38,uVar20);
          iVar17 = *(int *)(param_1 + 0x34) - *(int *)(param_1 + 0x38);
        }
        local_110 = (string *)(param_1 + 0x24);
        std::string::_M_append(local_110,(char *)((int)ppcVar10 + iVar17),(char *)ppcVar9);
      }
      else {
        if (uVar18 != 0) {
          memmove(pvVar15,local_38,uVar18);
          puVar14 = *(undefined1 **)(param_1 + 0x34);
          pvVar15 = *(void **)(param_1 + 0x38);
        }
        puVar22 = (undefined1 *)((int)pvVar15 + uVar18);
        if (puVar14 != puVar22) {
          *puVar22 = *puVar14;
          *(int *)(param_1 + 0x34) = (int)(puVar22 + (*(int *)(param_1 + 0x34) - (int)puVar14));
        }
      }
    }
    local_50 = *(int *)((int)&__DT_REL[0x237].r_info + unaff_EBX + 3) + 8;
    if ((local_38 != local_4c) && (local_38 != (char **)0x0)) {
      if ((uint)((int)local_4c[0] - (int)local_38) < 0x81) {
        std::__node_alloc::_M_deallocate(local_38,(int)local_4c[0] - (int)local_38);
      }
      else {
        operator_delete(local_38);
      }
    }
    local_70 = *(int *)((int)&__DT_REL[0x237].r_info + unaff_EBX + 3) + 8;
    if ((local_58 == (string *)local_6c) || (local_58 == (string *)0x0)) goto LAB_00070947;
    uVar20 = (int)local_6c[0] - (int)local_58;
    psVar4 = local_58;
  }
  else {
    local_30 = *(int *)((int)&__DT_REL[0x237].r_info + unaff_EBX + 3) + 8;
    sVar12 = (int)local_114 - (int)puVar19;
    uVar20 = sVar12 + 1;
    local_1c = (string *)local_2c;
    local_18 = (string *)local_2c;
    if (uVar20 == 0) goto LAB_000709f8;
    if (0x10 < uVar20) {
      local_100[0] = uVar20;
      if (uVar20 < 0x81) {
        local_1c = (string *)std::__node_alloc::_M_allocate(local_100);
      }
      else {
        local_1c = operator_new(uVar20);
      }
      local_2c[0] = local_1c + local_100[0];
    }
    local_18 = local_1c;
    if (local_114 != puVar19) {
      pvVar15 = memcpy(local_1c,puVar19,sVar12);
      local_1c = (string *)((int)pvVar15 + sVar12);
    }
    puVar19 = local_78;
    *local_1c = (string)0x0;
    sVar12 = strlen((char *)local_78);
    std::string::_M_append((string *)local_2c,(char *)puVar19,(char *)((int)puVar19 + sVar12));
    psVar11 = local_18;
    psVar4 = local_1c;
    if ((string *)(param_1 + 0x24) != (string *)local_2c) {
      puVar14 = *(undefined1 **)(param_1 + 0x34);
      uVar20 = (int)local_1c - (int)local_18;
      pvVar15 = *(void **)(param_1 + 0x38);
      uVar18 = (int)puVar14 - (int)pvVar15;
      if (uVar18 < uVar20) {
        iVar17 = 0;
        if (uVar18 != 0) {
          memmove(pvVar15,local_18,uVar18);
          iVar17 = *(int *)(param_1 + 0x34) - *(int *)(param_1 + 0x38);
        }
        std::string::_M_append((string *)(param_1 + 0x24),(char *)(psVar11 + iVar17),(char *)psVar4)
        ;
      }
      else {
        if (uVar20 != 0) {
          memmove(pvVar15,local_18,uVar20);
          puVar14 = *(undefined1 **)(param_1 + 0x34);
          pvVar15 = *(void **)(param_1 + 0x38);
        }
        puVar22 = (undefined1 *)(uVar20 + (int)pvVar15);
        if (puVar14 != puVar22) {
          *puVar22 = *puVar14;
          *(int *)(param_1 + 0x34) = (int)(puVar22 + (*(int *)(param_1 + 0x34) - (int)puVar14));
        }
      }
    }
    local_30 = *(int *)((int)&__DT_REL[0x237].r_info + unaff_EBX + 3) + 8;
    if ((local_18 == (string *)local_2c) || (local_18 == (string *)0x0)) goto LAB_00070947;
    uVar20 = (int)local_2c[0] - (int)local_18;
    psVar4 = local_18;
  }
  if (uVar20 < 0x81) {
    std::__node_alloc::_M_deallocate(psVar4,uVar20);
  }
  else {
    operator_delete(psVar4);
  }
LAB_00070947:
  local_90 = *(int *)((int)&__DT_REL[0x237].r_info + unaff_EBX + 3);
  *(char *)(param_1 + 0x78) = extraout_DL;
  local_90 = local_90 + 8;
  if ((local_78 != local_8c) && (local_78 != (uint *)0x0)) {
    if (local_8c[0] - (int)local_78 < 0x81) {
      std::__node_alloc::_M_deallocate(local_78,local_8c[0] - (int)local_78);
    }
    else {
      operator_delete(local_78);
    }
  }
  local_b0 = *(int *)((int)&__DT_REL[0x237].r_info + unaff_EBX + 3) + 8;
  if ((local_98 != local_ac) && (local_98 != (uint *)0x0)) {
    if (local_ac[0] - (int)local_98 < 0x81) {
      std::__node_alloc::_M_deallocate(local_98,local_ac[0] - (int)local_98);
    }
    else {
      operator_delete(local_98);
    }
  }
  if (local_14 == **(int **)((int)&__DT_REL[0x237].r_offset + unaff_EBX + 3)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0002e000();
}

