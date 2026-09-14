/* 00031430 | FUN_00031430 */

/* WARNING: Removing unreachable block (ram,0x00031620) */

void FUN_00031430(int param_1,int param_2,int param_3,int param_4)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  string *psVar4;
  string *psVar5;
  size_t sVar6;
  undefined4 uVar7;
  void *pvVar8;
  char *pcVar9;
  uint uVar10;
  char *pcVar11;
  char *pcVar12;
  char *__src;
  undefined1 *puVar13;
  char *pcVar14;
  char *pcVar15;
  char *pcVar16;
  int iVar17;
  int *piVar18;
  char *__s;
  int iVar19;
  void *pvVar20;
  uint uVar21;
  uint local_74;
  uint local_60;
  string *local_5c [4];
  string *local_4c;
  string *local_48;
  string *local_44 [4];
  string *local_34;
  string *local_30;
  int local_2c;
  
  __s = *(char **)(param_2 + 0x18);
  piVar18 = *(int **)(DAT_00031970 + 0x31448);
  local_2c = *piVar18;
  sVar6 = strlen(__s);
  pcVar16 = *(char **)(param_1 + 0x14);
  __src = *(char **)(param_1 + 0x18);
  uVar21 = (int)pcVar16 - (int)__src;
  if (uVar21 == 0) {
    if (sVar6 == 0) {
      uVar10 = 0;
      local_74 = 0;
LAB_000314dc:
      iVar19 = *(int *)(param_2 + 0x14);
      sVar6 = (int)(__src + uVar10) - (int)__src;
      uVar21 = sVar6 + 1;
      local_34 = (string *)local_44;
      local_30 = (string *)local_44;
      if (uVar21 == 0) {
                    /* WARNING: Subroutine does not return */
        std::__stl_throw_length_error((char *)(DAT_00031974 + 0x31764));
      }
      if (0x10 < uVar21) {
        local_60 = uVar21;
        if (uVar21 < 0x81) {
          local_34 = (string *)std::__node_alloc::_M_allocate(&local_60);
        }
        else {
          local_34 = operator_new(uVar21);
        }
        local_44[0] = local_34 + local_60;
      }
      local_30 = local_34;
      if (__src != __src + uVar10) {
        pvVar8 = memcpy(local_34,__src,sVar6);
        local_34 = (string *)((int)pvVar8 + sVar6);
      }
      *local_34 = (string)0x0;
      psVar5 = local_30;
      psVar4 = local_34;
      if ((string *)(param_3 + 4) != (string *)local_44) {
        puVar13 = *(undefined1 **)(param_3 + 0x14);
        pvVar8 = *(void **)(param_3 + 0x18);
        uVar21 = (int)local_34 - (int)local_30;
        sVar6 = (int)puVar13 - (int)pvVar8;
        if (sVar6 < uVar21) {
          iVar17 = 0;
          if (sVar6 != 0) {
            memmove(pvVar8,local_30,sVar6);
            iVar17 = *(int *)(param_3 + 0x14) - *(int *)(param_3 + 0x18);
          }
          std::string::_M_append((string *)(param_3 + 4),(char *)(psVar5 + iVar17),(char *)psVar4);
        }
        else {
          if (uVar21 != 0) {
            memmove(pvVar8,local_30,uVar21);
            pvVar8 = *(void **)(param_3 + 0x18);
            puVar13 = *(undefined1 **)(param_3 + 0x14);
          }
          if ((undefined1 *)((int)pvVar8 + uVar21) != puVar13) {
            *(undefined1 *)((int)pvVar8 + uVar21) = *puVar13;
            *(undefined1 **)(param_3 + 0x14) =
                 (undefined1 *)((int)pvVar8 + uVar21) + (*(int *)(param_3 + 0x14) - (int)puVar13);
          }
        }
      }
      if ((local_30 != (string *)local_44) && (local_30 != (string *)0x0)) {
        if ((uint)((int)local_44[0] - (int)local_30) < 0x81) {
          std::__node_alloc::_M_deallocate(local_30,(int)local_44[0] - (int)local_30);
        }
        else {
          operator_delete(local_30);
        }
      }
      iVar17 = *(int *)(param_1 + 0x18);
      uVar21 = *(int *)(param_1 + 0x14) - iVar17;
      local_74 = local_74 + (iVar19 - (int)__s);
      local_4c = (string *)local_5c;
      local_48 = (string *)local_5c;
      if (uVar21 < local_74) {
                    /* WARNING: Subroutine does not return */
        std::__stl_throw_out_of_range((char *)(DAT_0003197c + 0x31960));
      }
      pvVar20 = (void *)(iVar17 + uVar21);
      pvVar8 = (void *)(iVar17 + local_74);
      sVar6 = (int)pvVar20 - (int)pvVar8;
      uVar21 = sVar6 + 1;
      if (uVar21 == 0) {
                    /* WARNING: Subroutine does not return */
        std::__stl_throw_length_error((char *)(DAT_00031978 + 0x31770));
      }
      if (0x10 < uVar21) {
        local_60 = uVar21;
        if (uVar21 < 0x81) {
          local_4c = (string *)std::__node_alloc::_M_allocate(&local_60);
        }
        else {
          local_4c = operator_new(uVar21);
        }
        local_5c[0] = local_4c + local_60;
      }
      local_48 = local_4c;
      if (pvVar8 != pvVar20) {
        pvVar8 = memcpy(local_4c,pvVar8,sVar6);
        local_4c = (string *)((int)pvVar8 + sVar6);
      }
      *local_4c = (string)0x0;
      psVar5 = local_48;
      psVar4 = local_4c;
      if ((string *)(param_4 + 4) != (string *)local_5c) {
        puVar13 = *(undefined1 **)(param_4 + 0x14);
        pvVar8 = *(void **)(param_4 + 0x18);
        uVar21 = (int)local_4c - (int)local_48;
        sVar6 = (int)puVar13 - (int)pvVar8;
        if (sVar6 < uVar21) {
          iVar19 = 0;
          if (sVar6 != 0) {
            memmove(pvVar8,local_48,sVar6);
            iVar19 = *(int *)(param_4 + 0x14) - *(int *)(param_4 + 0x18);
          }
          std::string::_M_append((string *)(param_4 + 4),(char *)(psVar5 + iVar19),(char *)psVar4);
        }
        else {
          if (uVar21 != 0) {
            memmove(pvVar8,local_48,uVar21);
            pvVar8 = *(void **)(param_4 + 0x18);
            puVar13 = *(undefined1 **)(param_4 + 0x14);
          }
          if (puVar13 != (undefined1 *)((int)pvVar8 + uVar21)) {
            *(undefined1 *)((int)pvVar8 + uVar21) = *puVar13;
            *(undefined1 **)(param_4 + 0x14) =
                 (undefined1 *)((int)pvVar8 + uVar21) + (*(int *)(param_4 + 0x14) - (int)puVar13);
          }
        }
      }
      if ((local_48 == (string *)local_5c) || (local_48 == (string *)0x0)) {
        uVar7 = 1;
      }
      else if ((uint)((int)local_5c[0] - (int)local_48) < 0x81) {
        std::__node_alloc::_M_deallocate(local_48,(int)local_5c[0] - (int)local_48);
        uVar7 = 1;
      }
      else {
        operator_delete(local_48);
        uVar7 = 1;
      }
      goto LAB_000314b8;
    }
  }
  else if (sVar6 <= uVar21) {
    pcVar9 = __s + sVar6;
    pcVar14 = __src;
    if (pcVar16 != __src && __s != pcVar9) {
      pcVar12 = __src;
      if (pcVar9 == __s + 1) {
        cVar1 = *__src;
        pcVar9 = __src;
        while ((pcVar14 = pcVar9, cVar1 != *__s &&
               (pcVar9 = pcVar9 + 1, pcVar14 = pcVar16, pcVar16 != pcVar9))) {
          pcVar12 = pcVar12 + 1;
          cVar1 = *pcVar12;
        }
      }
      else {
        while (pcVar11 = pcVar12, pcVar14 = pcVar16, pcVar11 != pcVar16) {
          pcVar12 = pcVar11 + 1;
          pcVar2 = __s + 1;
          pcVar3 = pcVar12;
          if (*pcVar11 == *__s) {
            while( true ) {
              pcVar14 = pcVar16;
              if (pcVar16 == pcVar3) goto LAB_00031730;
              pcVar15 = pcVar2 + 1;
              if (*pcVar3 != *pcVar2) break;
              pcVar14 = pcVar11;
              pcVar2 = pcVar15;
              pcVar3 = pcVar3 + 1;
              if (pcVar9 == pcVar15) goto LAB_00031730;
            }
          }
        }
      }
    }
LAB_00031730:
    if (pcVar16 != pcVar14) {
      local_74 = (int)pcVar14 - (int)__src;
      uVar10 = local_74;
      if (uVar21 <= local_74) {
        uVar10 = uVar21;
      }
      if (local_74 != 0xffffffff) goto LAB_000314dc;
    }
  }
  uVar7 = 0;
  if (*(undefined1 **)(param_3 + 0x18) != *(undefined1 **)(param_3 + 0x14)) {
    **(undefined1 **)(param_3 + 0x18) = 0;
    *(undefined4 *)(param_3 + 0x14) = *(undefined4 *)(param_3 + 0x18);
  }
  if (*(undefined1 **)(param_4 + 0x18) != *(undefined1 **)(param_4 + 0x14)) {
    **(undefined1 **)(param_4 + 0x18) = 0;
    *(undefined4 *)(param_4 + 0x14) = *(undefined4 *)(param_4 + 0x18);
  }
LAB_000314b8:
  if (local_2c != *piVar18) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar7);
  }
  return;
}

