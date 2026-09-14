/* 00030bfc | FUN_00030bfc */

/* WARNING: Removing unreachable block (ram,0x00030de8) */

void FUN_00030bfc(int param_1,int param_2,int param_3,int param_4)

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
  char *__src;
  undefined1 *puVar10;
  char *pcVar11;
  char *pcVar12;
  char *pcVar13;
  char *pcVar14;
  int iVar15;
  int *piVar16;
  char *__s;
  int iVar17;
  uint uVar18;
  void *pvVar19;
  uint uVar20;
  char *local_74;
  uint local_60;
  string *local_5c [4];
  string *local_4c;
  string *local_48;
  string *local_44 [4];
  string *local_34;
  string *local_30;
  int local_2c;
  
  __s = *(char **)(param_2 + 0x18);
  piVar16 = *(int **)(DAT_00031130 + 0x30c1c);
  local_2c = *piVar16;
  sVar6 = strlen(__s);
  pcVar14 = *(char **)(param_1 + 0x14);
  __src = *(char **)(param_1 + 0x18);
  uVar20 = (int)pcVar14 - (int)__src;
  if (uVar20 == 0) {
    if (sVar6 == 0) {
      uVar18 = 0;
      local_74 = (char *)0x0;
LAB_00030ca4:
      iVar17 = *(int *)(param_2 + 0x14);
      sVar6 = (int)(__src + uVar18) - (int)__src;
      uVar20 = sVar6 + 1;
      local_34 = (string *)local_44;
      local_30 = (string *)local_44;
      if (uVar20 == 0) {
                    /* WARNING: Subroutine does not return */
        std::__stl_throw_length_error((char *)(DAT_00031134 + 0x30f2c));
      }
      if (0x10 < uVar20) {
        local_60 = uVar20;
        if (uVar20 < 0x81) {
          local_34 = (string *)std::__node_alloc::_M_allocate(&local_60);
        }
        else {
          local_34 = operator_new(uVar20);
        }
        local_44[0] = local_34 + local_60;
      }
      local_30 = local_34;
      if (__src != __src + uVar18) {
        pvVar8 = memcpy(local_34,__src,sVar6);
        local_34 = (string *)((int)pvVar8 + sVar6);
      }
      *local_34 = (string)0x0;
      psVar5 = local_30;
      psVar4 = local_34;
      if ((string *)(param_3 + 4) != (string *)local_44) {
        puVar10 = *(undefined1 **)(param_3 + 0x14);
        pvVar8 = *(void **)(param_3 + 0x18);
        uVar20 = (int)local_34 - (int)local_30;
        sVar6 = (int)puVar10 - (int)pvVar8;
        if (sVar6 < uVar20) {
          iVar15 = 0;
          if (sVar6 != 0) {
            memmove(pvVar8,local_30,sVar6);
            iVar15 = *(int *)(param_3 + 0x14) - *(int *)(param_3 + 0x18);
          }
          std::string::_M_append((string *)(param_3 + 4),(char *)(psVar5 + iVar15),(char *)psVar4);
        }
        else {
          if (uVar20 != 0) {
            memmove(pvVar8,local_30,uVar20);
            pvVar8 = *(void **)(param_3 + 0x18);
            puVar10 = *(undefined1 **)(param_3 + 0x14);
          }
          if ((undefined1 *)((int)pvVar8 + uVar20) != puVar10) {
            *(undefined1 *)((int)pvVar8 + uVar20) = *puVar10;
            *(undefined1 **)(param_3 + 0x14) =
                 (undefined1 *)((int)pvVar8 + uVar20) + (*(int *)(param_3 + 0x14) - (int)puVar10);
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
      iVar15 = *(int *)(param_1 + 0x18);
      uVar18 = *(int *)(param_1 + 0x14) - iVar15;
      uVar20 = (int)local_74 + (iVar17 - (int)__s);
      local_4c = (string *)local_5c;
      local_48 = (string *)local_5c;
      if (uVar18 < uVar20) {
                    /* WARNING: Subroutine does not return */
        std::__stl_throw_out_of_range((char *)(DAT_0003113c + 0x31120));
      }
      pvVar8 = (void *)(iVar15 + uVar20);
      pvVar19 = (void *)(iVar15 + uVar18);
      sVar6 = (int)pvVar19 - (int)pvVar8;
      uVar20 = sVar6 + 1;
      if (uVar20 == 0) {
                    /* WARNING: Subroutine does not return */
        std::__stl_throw_length_error((char *)(DAT_00031138 + 0x30f38));
      }
      if (0x10 < uVar20) {
        local_60 = uVar20;
        if (uVar20 < 0x81) {
          local_4c = (string *)std::__node_alloc::_M_allocate(&local_60);
        }
        else {
          local_4c = operator_new(uVar20);
        }
        local_5c[0] = local_4c + local_60;
      }
      local_48 = local_4c;
      if (pvVar8 != pvVar19) {
        pvVar8 = memcpy(local_4c,pvVar8,sVar6);
        local_4c = (string *)((int)pvVar8 + sVar6);
      }
      *local_4c = (string)0x0;
      psVar5 = local_48;
      psVar4 = local_4c;
      if ((string *)(param_4 + 4) != (string *)local_5c) {
        puVar10 = *(undefined1 **)(param_4 + 0x14);
        pvVar8 = *(void **)(param_4 + 0x18);
        uVar20 = (int)local_4c - (int)local_48;
        sVar6 = (int)puVar10 - (int)pvVar8;
        if (sVar6 < uVar20) {
          iVar17 = 0;
          if (sVar6 != 0) {
            memmove(pvVar8,local_48,sVar6);
            iVar17 = *(int *)(param_4 + 0x14) - *(int *)(param_4 + 0x18);
          }
          std::string::_M_append((string *)(param_4 + 4),(char *)(psVar5 + iVar17),(char *)psVar4);
        }
        else {
          if (uVar20 != 0) {
            memmove(pvVar8,local_48,uVar20);
            pvVar8 = *(void **)(param_4 + 0x18);
            puVar10 = *(undefined1 **)(param_4 + 0x14);
          }
          if (puVar10 != (undefined1 *)((int)pvVar8 + uVar20)) {
            *(undefined1 *)((int)pvVar8 + uVar20) = *puVar10;
            *(undefined1 **)(param_4 + 0x14) =
                 (undefined1 *)((int)pvVar8 + uVar20) + (*(int *)(param_4 + 0x14) - (int)puVar10);
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
      goto LAB_00030c80;
    }
  }
  else if (sVar6 <= uVar20) {
    pcVar9 = __s + sVar6;
    pcVar11 = __src;
    if (pcVar14 != __src && __s != pcVar9) {
      pcVar12 = __src;
      if (pcVar9 == __s + 1) {
        cVar1 = *__src;
        pcVar9 = __src;
        while ((pcVar11 = pcVar9, cVar1 != *__s &&
               (pcVar9 = pcVar9 + 1, pcVar11 = pcVar14, pcVar14 != pcVar9))) {
          pcVar12 = pcVar12 + 1;
          cVar1 = *pcVar12;
        }
      }
      else {
        while (local_74 = pcVar12, pcVar11 = pcVar14, local_74 != pcVar14) {
          pcVar12 = local_74 + 1;
          pcVar2 = __s + 1;
          pcVar3 = pcVar12;
          if (*local_74 == *__s) {
            while( true ) {
              pcVar11 = pcVar14;
              if (pcVar14 == pcVar3) goto LAB_00030ef8;
              pcVar13 = pcVar2 + 1;
              if (*pcVar3 != *pcVar2) break;
              pcVar11 = local_74;
              pcVar2 = pcVar13;
              pcVar3 = pcVar3 + 1;
              if (pcVar9 == pcVar13) goto LAB_00030ef8;
            }
          }
        }
      }
    }
LAB_00030ef8:
    if (pcVar14 != pcVar11) {
      local_74 = (char *)((int)pcVar11 - (int)__src);
      uVar18 = (uint)local_74;
      if (uVar20 <= local_74) {
        uVar18 = uVar20;
      }
      if (local_74 != (char *)0xffffffff) goto LAB_00030ca4;
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
LAB_00030c80:
  if (local_2c != *piVar16) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar7);
  }
  return;
}

