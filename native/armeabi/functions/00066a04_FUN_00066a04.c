/* 00066a04 | FUN_00066a04 */

/* WARNING: Removing unreachable block (ram,0x00067074) */

void FUN_00066a04(int param_1,int param_2)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  char **ppcVar4;
  char **ppcVar5;
  size_t sVar6;
  void *pvVar7;
  char *pcVar8;
  char *pcVar9;
  uint uVar10;
  undefined1 *puVar11;
  int iVar12;
  char *pcVar13;
  int iVar14;
  uint uVar15;
  string *psVar16;
  int iVar17;
  char *pcVar18;
  int *piVar19;
  char *pcVar20;
  char *__s;
  string *psVar21;
  void *__src;
  char *pcVar22;
  char *pcVar23;
  uint local_104;
  uint local_ec;
  char *local_e8 [4];
  char **local_d8;
  char **local_d4;
  char *local_d0 [4];
  char **local_c0;
  char **local_bc;
  int local_b8;
  uint local_b4 [4];
  string *local_a4;
  string *local_a0;
  int local_9c;
  uint local_98 [4];
  string *local_88;
  string *local_84;
  int local_80;
  string *local_7c [4];
  string *local_6c;
  string *local_68;
  int local_64;
  string *local_60 [4];
  string *local_50;
  string *local_4c;
  int local_48;
  string *local_44 [4];
  string *local_34;
  string *local_30;
  int local_2c;
  
  __s = *(char **)(DAT_00067490 + 0x66a30);
  piVar19 = *(int **)(DAT_00067494 + 0x66a24);
  local_2c = *piVar19;
  iVar17 = *(int *)(DAT_00067498 + 0x66a30);
  local_b8 = iVar17 + 8;
  local_b4[0] = local_b4[0] & 0xffffff00;
  local_98[0] = local_98[0] & 0xffffff00;
  local_a4 = (string *)local_b4;
  local_a0 = (string *)local_b4;
  local_9c = local_b8;
  local_88 = (string *)local_98;
  local_84 = (string *)local_98;
  sVar6 = strlen(__s);
  pcVar20 = *(char **)(param_1 + 0x34);
  pcVar18 = *(char **)(param_1 + 0x38);
  uVar15 = (int)pcVar20 - (int)pcVar18;
  if (uVar15 == 0) {
    if (sVar6 != 0) goto LAB_00066a88;
    local_104 = 0;
    uVar10 = 0;
LAB_00066f10:
    sVar6 = (int)(pcVar18 + uVar10) - (int)pcVar18;
    iVar14 = *(int *)(DAT_000674a0 + 0x66f38);
    uVar15 = sVar6 + 1;
    local_d8 = local_e8;
    local_d4 = local_e8;
    if (uVar15 == 0) {
                    /* WARNING: Subroutine does not return */
      std::__stl_throw_length_error((char *)(DAT_000674a4 + 0x6718c));
    }
    if (0x10 < uVar15) {
      local_ec = uVar15;
      if (uVar15 < 0x81) {
        local_d8 = (char **)std::__node_alloc::_M_allocate(&local_ec);
      }
      else {
        local_d8 = operator_new(uVar15);
      }
      local_e8[0] = (char *)((int)local_d8 + local_ec);
    }
    local_d4 = local_d8;
    if (pcVar18 != pcVar18 + uVar10) {
      pvVar7 = memcpy(local_d8,pcVar18,sVar6);
      local_d8 = (char **)((int)pvVar7 + sVar6);
    }
    *(undefined1 *)local_d8 = 0;
    ppcVar5 = local_d4;
    ppcVar4 = local_d8;
    uVar15 = (int)local_d8 - (int)local_d4;
    sVar6 = (int)local_a4 - (int)local_a0;
    if (sVar6 < uVar15) {
      iVar12 = 0;
      if (sVar6 != 0) {
        memmove(local_a0,local_d4,sVar6);
        iVar12 = (int)local_a4 - (int)local_a0;
      }
      std::string::_M_append((string *)local_b4,(char *)((int)ppcVar5 + iVar12),(char *)ppcVar4);
    }
    else {
      if (uVar15 != 0) {
        memmove(local_a0,local_d4,uVar15);
      }
      if (local_a0 + uVar15 != local_a4) {
        local_a0[uVar15] = *local_a4;
        local_a4 = local_a0 + uVar15;
      }
    }
    if ((local_d4 != local_e8) && (local_d4 != (char **)0x0)) {
      if ((uint)((int)local_e8[0] - (int)local_d4) < 0x81) {
        std::__node_alloc::_M_deallocate(local_d4,(int)local_e8[0] - (int)local_d4);
      }
      else {
        operator_delete(local_d4);
      }
    }
    iVar12 = *(int *)(param_1 + 0x38);
    uVar15 = *(int *)(param_1 + 0x34) - iVar12;
    local_104 = local_104 + (iVar14 - (int)__s);
    local_c0 = local_d0;
    local_bc = local_d0;
    if (uVar15 < local_104) {
                    /* WARNING: Subroutine does not return */
      std::__stl_throw_out_of_range((char *)((int)&DAT_00067490 + DAT_000674b8));
    }
    pvVar7 = (void *)(iVar12 + uVar15);
    __src = (void *)(iVar12 + local_104);
    sVar6 = (int)pvVar7 - (int)__src;
    uVar15 = sVar6 + 1;
    if (uVar15 == 0) {
                    /* WARNING: Subroutine does not return */
      std::__stl_throw_length_error((char *)(DAT_000674a8 + 0x67198));
    }
    if (0x10 < uVar15) {
      local_ec = uVar15;
      if (uVar15 < 0x81) {
        local_c0 = (char **)std::__node_alloc::_M_allocate(&local_ec);
      }
      else {
        local_c0 = operator_new(uVar15);
      }
      local_d0[0] = (char *)((int)local_c0 + local_ec);
    }
    local_bc = local_c0;
    if (__src != pvVar7) {
      pvVar7 = memcpy(local_c0,__src,sVar6);
      local_c0 = (char **)((int)pvVar7 + sVar6);
    }
    *(undefined1 *)local_c0 = 0;
    ppcVar5 = local_bc;
    ppcVar4 = local_c0;
    uVar15 = (int)local_c0 - (int)local_bc;
    sVar6 = (int)local_88 - (int)local_84;
    if (sVar6 < uVar15) {
      iVar14 = 0;
      if (sVar6 != 0) {
        memmove(local_84,local_bc,sVar6);
        iVar14 = (int)local_88 - (int)local_84;
      }
      std::string::_M_append((string *)local_98,(char *)((int)ppcVar5 + iVar14),(char *)ppcVar4);
    }
    else {
      if (uVar15 != 0) {
        memmove(local_84,local_bc,uVar15);
      }
      if (local_84 + uVar15 != local_88) {
        local_84[uVar15] = *local_88;
        local_88 = local_84 + uVar15;
      }
    }
    psVar16 = local_a4;
    psVar21 = local_a0;
    if ((local_bc != local_d0) && (local_bc != (char **)0x0)) {
      if ((uint)((int)local_d0[0] - (int)local_bc) < 0x81) {
        std::__node_alloc::_M_deallocate(local_bc,(int)local_d0[0] - (int)local_bc);
        psVar16 = local_a4;
        psVar21 = local_a0;
      }
      else {
        operator_delete(local_bc);
        psVar16 = local_a4;
        psVar21 = local_a0;
      }
    }
  }
  else {
    if (sVar6 <= uVar15) {
      pcVar8 = __s + sVar6;
      pcVar9 = pcVar18;
      if (pcVar20 != pcVar18 && __s != pcVar8) {
        pcVar23 = pcVar18;
        if (pcVar8 == __s + 1) {
          cVar1 = *pcVar18;
          pcVar8 = pcVar18;
          while ((pcVar9 = pcVar8, cVar1 != *__s &&
                 (pcVar8 = pcVar8 + 1, pcVar9 = pcVar20, pcVar20 != pcVar8))) {
            pcVar23 = pcVar23 + 1;
            cVar1 = *pcVar23;
          }
        }
        else {
          while (pcVar22 = pcVar23, pcVar9 = pcVar20, pcVar22 != pcVar20) {
            pcVar23 = pcVar22 + 1;
            pcVar2 = __s + 1;
            pcVar3 = pcVar23;
            if (*pcVar22 == *__s) {
              while( true ) {
                pcVar9 = pcVar20;
                if (pcVar20 == pcVar3) goto LAB_00066cb4;
                pcVar13 = pcVar2 + 1;
                if (*pcVar3 != *pcVar2) break;
                pcVar9 = pcVar22;
                pcVar2 = pcVar13;
                pcVar3 = pcVar3 + 1;
                if (pcVar8 == pcVar13) goto LAB_00066cb4;
              }
            }
          }
        }
      }
LAB_00066cb4:
      if ((pcVar20 != pcVar9) && (local_104 = (int)pcVar9 - (int)pcVar18, local_104 != 0xffffffff))
      {
        uVar10 = local_104;
        if (uVar15 <= local_104) {
          uVar10 = uVar15;
        }
        goto LAB_00066f10;
      }
    }
LAB_00066a88:
    psVar16 = (string *)local_b4;
    psVar21 = (string *)local_b4;
    if ((string *)local_98 != (string *)(param_1 + 0x24)) {
      sVar6 = (int)local_88 - (int)local_84;
      if (sVar6 < uVar15) {
        iVar14 = 0;
        if (sVar6 != 0) {
          memmove(local_84,pcVar18,sVar6);
          iVar14 = (int)local_88 - (int)local_84;
        }
        std::string::_M_append((string *)local_98,pcVar18 + iVar14,pcVar20);
        psVar16 = local_a4;
        psVar21 = local_a0;
      }
      else {
        if (uVar15 != 0) {
          memmove(local_84,pcVar18,uVar15);
        }
        psVar16 = local_a4;
        psVar21 = local_a0;
        if (local_84 + uVar15 != local_88) {
          local_84[uVar15] = *local_88;
          local_88 = local_84 + uVar15;
        }
      }
    }
  }
  if (param_2 == 0) {
    sVar6 = (int)psVar16 - (int)psVar21;
    local_80 = iVar17 + 8;
    uVar15 = sVar6 + 1;
    local_6c = (string *)local_7c;
    local_68 = (string *)local_7c;
    if (uVar15 == 0) {
                    /* WARNING: Subroutine does not return */
      std::__stl_throw_length_error((char *)(DAT_000674ac + 0x671a4));
    }
    if (0x10 < uVar15) {
      local_ec = uVar15;
      if (uVar15 < 0x81) {
        local_6c = (string *)std::__node_alloc::_M_allocate(&local_ec);
      }
      else {
        local_6c = operator_new(uVar15);
      }
      local_7c[0] = local_6c + local_ec;
    }
    local_68 = local_6c;
    if (psVar21 != psVar16) {
      pvVar7 = memcpy(local_6c,psVar21,sVar6);
      local_6c = (string *)((int)pvVar7 + sVar6);
    }
    *local_6c = (string)0x0;
    pcVar18 = *(char **)(DAT_0006749c + 0x66d78);
    sVar6 = strlen(pcVar18);
    std::string::_M_append((string *)local_7c,pcVar18,pcVar18 + sVar6);
    psVar21 = local_68;
    psVar16 = local_6c;
    local_64 = iVar17 + 8;
    sVar6 = (int)local_6c - (int)local_68;
    uVar15 = sVar6 + 1;
    local_50 = (string *)local_60;
    local_4c = (string *)local_60;
    if (uVar15 == 0) {
                    /* WARNING: Subroutine does not return */
      std::__stl_throw_length_error((char *)(DAT_000674b4 + 0x671bc));
    }
    if (0x10 < uVar15) {
      local_ec = uVar15;
      if (uVar15 < 0x81) {
        local_50 = (string *)std::__node_alloc::_M_allocate(&local_ec);
      }
      else {
        local_50 = operator_new(uVar15);
      }
      local_60[0] = local_50 + local_ec;
    }
    local_4c = local_50;
    if (psVar21 != psVar16) {
      pvVar7 = memcpy(local_50,psVar21,sVar6);
      local_50 = (string *)((int)pvVar7 + sVar6);
    }
    psVar16 = local_84;
    *local_50 = (string)0x0;
    sVar6 = strlen((char *)local_84);
    std::string::_M_append((string *)local_60,(char *)psVar16,(char *)(psVar16 + sVar6));
    psVar21 = local_4c;
    psVar16 = local_50;
    if ((string *)(param_1 + 0x24) != (string *)local_60) {
      pvVar7 = *(void **)(param_1 + 0x38);
      puVar11 = *(undefined1 **)(param_1 + 0x34);
      uVar15 = (int)local_50 - (int)local_4c;
      sVar6 = (int)puVar11 - (int)pvVar7;
      if (sVar6 < uVar15) {
        iVar14 = 0;
        if (sVar6 != 0) {
          memmove(pvVar7,local_4c,sVar6);
          iVar14 = *(int *)(param_1 + 0x34) - *(int *)(param_1 + 0x38);
        }
        std::string::_M_append
                  ((string *)(param_1 + 0x24),(char *)(psVar21 + iVar14),(char *)psVar16);
      }
      else {
        if (uVar15 != 0) {
          memmove(pvVar7,local_4c,uVar15);
          pvVar7 = *(void **)(param_1 + 0x38);
          puVar11 = *(undefined1 **)(param_1 + 0x34);
        }
        if (puVar11 != (undefined1 *)((int)pvVar7 + uVar15)) {
          *(undefined1 *)((int)pvVar7 + uVar15) = *puVar11;
          *(undefined1 **)(param_1 + 0x34) =
               (undefined1 *)((int)pvVar7 + uVar15) + (*(int *)(param_1 + 0x34) - (int)puVar11);
        }
      }
    }
    local_64 = iVar17 + 8;
    if ((local_4c != (string *)local_60) && (local_4c != (string *)0x0)) {
      if ((uint)((int)local_60[0] - (int)local_4c) < 0x81) {
        std::__node_alloc::_M_deallocate(local_4c,(int)local_60[0] - (int)local_4c);
      }
      else {
        operator_delete(local_4c);
      }
    }
    local_80 = iVar17 + 8;
    if ((local_68 == (string *)local_7c) || (local_68 == (string *)0x0)) goto LAB_00066c1c;
    uVar15 = (int)local_7c[0] - (int)local_68;
    psVar16 = local_68;
  }
  else {
    sVar6 = (int)psVar16 - (int)psVar21;
    local_48 = iVar17 + 8;
    uVar15 = sVar6 + 1;
    local_34 = (string *)local_44;
    local_30 = (string *)local_44;
    if (uVar15 == 0) {
                    /* WARNING: Subroutine does not return */
      std::__stl_throw_length_error((char *)(DAT_000674b0 + 0x671b0));
    }
    if (0x10 < uVar15) {
      local_ec = uVar15;
      if (uVar15 < 0x81) {
        local_34 = (string *)std::__node_alloc::_M_allocate(&local_ec);
      }
      else {
        local_34 = operator_new(uVar15);
      }
      local_44[0] = local_34 + local_ec;
    }
    local_30 = local_34;
    if (psVar21 != psVar16) {
      pvVar7 = memcpy(local_34,psVar21,sVar6);
      local_34 = (string *)((int)pvVar7 + sVar6);
    }
    *local_34 = (string)0x0;
    psVar16 = local_84;
    sVar6 = strlen((char *)local_84);
    std::string::_M_append((string *)local_44,(char *)psVar16,(char *)(psVar16 + sVar6));
    psVar21 = local_30;
    psVar16 = local_34;
    if ((string *)(param_1 + 0x24) != (string *)local_44) {
      puVar11 = *(undefined1 **)(param_1 + 0x34);
      pvVar7 = *(void **)(param_1 + 0x38);
      uVar15 = (int)local_34 - (int)local_30;
      sVar6 = (int)puVar11 - (int)pvVar7;
      if (sVar6 < uVar15) {
        iVar14 = 0;
        if (sVar6 != 0) {
          memmove(pvVar7,local_30,sVar6);
          iVar14 = *(int *)(param_1 + 0x34) - *(int *)(param_1 + 0x38);
        }
        std::string::_M_append
                  ((string *)(param_1 + 0x24),(char *)(psVar21 + iVar14),(char *)psVar16);
      }
      else {
        if (uVar15 != 0) {
          memmove(pvVar7,local_30,uVar15);
          pvVar7 = *(void **)(param_1 + 0x38);
          puVar11 = *(undefined1 **)(param_1 + 0x34);
        }
        if (puVar11 != (undefined1 *)((int)pvVar7 + uVar15)) {
          *(undefined1 *)((int)pvVar7 + uVar15) = *puVar11;
          *(undefined1 **)(param_1 + 0x34) =
               (undefined1 *)((int)pvVar7 + uVar15) + (*(int *)(param_1 + 0x34) - (int)puVar11);
        }
      }
    }
    local_48 = iVar17 + 8;
    if ((local_30 == (string *)local_44) || (local_30 == (string *)0x0)) goto LAB_00066c1c;
    uVar15 = (int)local_44[0] - (int)local_30;
    psVar16 = local_30;
  }
  if (uVar15 < 0x81) {
    std::__node_alloc::_M_deallocate(psVar16,uVar15);
  }
  else {
    operator_delete(psVar16);
  }
LAB_00066c1c:
  local_9c = iVar17 + 8;
  *(char *)(param_1 + 0x78) = (char)param_2;
  if ((local_84 != (string *)local_98) && (local_84 != (string *)0x0)) {
    if (local_98[0] - (int)local_84 < 0x81) {
      std::__node_alloc::_M_deallocate(local_84,local_98[0] - (int)local_84);
    }
    else {
      operator_delete(local_84);
    }
  }
  local_b8 = iVar17 + 8;
  if ((local_a0 != (string *)local_b4) && (local_a0 != (string *)0x0)) {
    if (local_b4[0] - (int)local_a0 < 0x81) {
      std::__node_alloc::_M_deallocate(local_a0,local_b4[0] - (int)local_a0);
    }
    else {
      operator_delete(local_a0);
    }
  }
  if (local_2c == *piVar19) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

