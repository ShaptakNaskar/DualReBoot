/* 00030b60 | FUN_00030b60 */

undefined4 FUN_00030b60(int param_1,int param_2)

{
  char cVar1;
  char *__s;
  char *pcVar2;
  char *__src;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  string *psVar7;
  string *psVar8;
  size_t sVar9;
  undefined4 uVar10;
  void *pvVar11;
  undefined1 *puVar12;
  char *pcVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  undefined1 *puVar18;
  int iVar19;
  int unaff_EBX;
  void *__src_00;
  undefined8 uVar20;
  char *local_78;
  uint local_60 [4];
  string *local_50 [4];
  string *local_40;
  string *local_3c;
  string *local_30 [4];
  string *local_20;
  string *local_1c;
  int local_14;
  
  local_14 = 0x30b6b;
  uVar20 = FUN_0002e044();
  iVar19 = (int)((ulonglong)uVar20 >> 0x20);
  iVar15 = (int)uVar20;
  local_14 = **(int **)(unaff_EBX + 0x6b2cd);
  __s = *(char **)(iVar19 + 0x18);
  sVar9 = strlen(__s);
  pcVar2 = *(char **)(iVar15 + 0x14);
  __src = *(char **)(iVar15 + 0x18);
  uVar16 = (int)pcVar2 - (int)__src;
  if (uVar16 == 0) {
    if (sVar9 == 0) {
      local_78 = (char *)0x0;
      uVar16 = 0;
LAB_00030c26:
      sVar9 = (int)(__src + uVar16) - (int)__src;
      uVar17 = sVar9 + 1;
      iVar19 = *(int *)(iVar19 + 0x14);
      local_20 = (string *)local_30;
      local_1c = (string *)local_30;
      if (uVar17 == 0) {
LAB_00030f20:
                    /* WARNING: Subroutine does not return */
        std::__stl_throw_length_error((char *)(unaff_EBX + 0x567a1));
      }
      if (0x10 < uVar17) {
        local_60[0] = uVar17;
        if (uVar17 < 0x81) {
          local_20 = (string *)std::__node_alloc::_M_allocate(local_60);
        }
        else {
          local_20 = operator_new(uVar17);
        }
        local_30[0] = local_20 + local_60[0];
      }
      local_1c = local_20;
      if (__src != __src + uVar16) {
        pvVar11 = memcpy(local_20,__src,sVar9);
        local_20 = (string *)((int)pvVar11 + sVar9);
      }
      *local_20 = (string)0x0;
      psVar8 = local_1c;
      psVar7 = local_20;
      if ((string *)(param_1 + 4) != (string *)local_30) {
        puVar12 = *(undefined1 **)(param_1 + 0x14);
        uVar16 = (int)local_20 - (int)local_1c;
        pvVar11 = *(void **)(param_1 + 0x18);
        uVar17 = (int)puVar12 - (int)pvVar11;
        if (uVar17 < uVar16) {
          iVar14 = 0;
          if (uVar17 != 0) {
            memmove(pvVar11,local_1c,uVar17);
            iVar14 = *(int *)(param_1 + 0x14) - *(int *)(param_1 + 0x18);
          }
          std::string::_M_append((string *)(param_1 + 4),(char *)(psVar8 + iVar14),(char *)psVar7);
        }
        else {
          if (uVar16 != 0) {
            memmove(pvVar11,local_1c,uVar16);
            puVar12 = *(undefined1 **)(param_1 + 0x14);
            pvVar11 = *(void **)(param_1 + 0x18);
          }
          puVar18 = (undefined1 *)((int)pvVar11 + uVar16);
          if (puVar18 != puVar12) {
            *puVar18 = *puVar12;
            *(int *)(param_1 + 0x14) = (int)(puVar18 + (*(int *)(param_1 + 0x14) - (int)puVar12));
          }
        }
      }
      if ((local_1c != (string *)local_30) && (local_1c != (string *)0x0)) {
        if ((uint)((int)local_30[0] - (int)local_1c) < 0x81) {
          std::__node_alloc::_M_deallocate(local_1c,(int)local_30[0] - (int)local_1c);
        }
        else {
          operator_delete(local_1c);
        }
      }
      uVar17 = (iVar19 - (int)__s) + (int)local_78;
      iVar19 = *(int *)(iVar15 + 0x18);
      uVar16 = *(int *)(iVar15 + 0x14) - iVar19;
      local_40 = (string *)local_50;
      local_3c = (string *)local_50;
      if (uVar16 < uVar17) {
                    /* WARNING: Subroutine does not return */
        std::__stl_throw_out_of_range((char *)(unaff_EBX + 0x567a1));
      }
      pvVar11 = (void *)(uVar16 + iVar19);
      __src_00 = (void *)(uVar17 + iVar19);
      sVar9 = (int)pvVar11 - (int)__src_00;
      uVar16 = sVar9 + 1;
      if (uVar16 == 0) goto LAB_00030f20;
      if (0x10 < uVar16) {
        local_60[0] = uVar16;
        if (uVar16 < 0x81) {
          local_40 = (string *)std::__node_alloc::_M_allocate(local_60);
        }
        else {
          local_40 = operator_new(uVar16);
        }
        local_50[0] = local_40 + local_60[0];
      }
      local_3c = local_40;
      if (pvVar11 != __src_00) {
        pvVar11 = memcpy(local_40,__src_00,sVar9);
        local_40 = (string *)((int)pvVar11 + sVar9);
      }
      *local_40 = (string)0x0;
      psVar8 = local_3c;
      psVar7 = local_40;
      if ((string *)(param_2 + 4) != (string *)local_50) {
        uVar17 = (int)local_40 - (int)local_3c;
        puVar12 = *(undefined1 **)(param_2 + 0x14);
        pvVar11 = *(void **)(param_2 + 0x18);
        uVar16 = (int)puVar12 - (int)pvVar11;
        if (uVar16 < uVar17) {
          iVar15 = 0;
          if (uVar16 != 0) {
            memmove(pvVar11,local_3c,uVar16);
            iVar15 = *(int *)(param_2 + 0x14) - *(int *)(param_2 + 0x18);
          }
          std::string::_M_append((string *)(param_2 + 4),(char *)(psVar8 + iVar15),(char *)psVar7);
        }
        else {
          if (uVar17 != 0) {
            memmove(pvVar11,local_3c,uVar17);
            puVar12 = *(undefined1 **)(param_2 + 0x14);
            pvVar11 = *(void **)(param_2 + 0x18);
          }
          puVar18 = (undefined1 *)(uVar17 + (int)pvVar11);
          if (puVar12 != puVar18) {
            *puVar18 = *puVar12;
            *(int *)(param_2 + 0x14) = (int)(puVar18 + (*(int *)(param_2 + 0x14) - (int)puVar12));
          }
        }
      }
      uVar10 = 1;
      if ((local_3c != (string *)local_50) && (local_3c != (string *)0x0)) {
        if ((uint)((int)local_50[0] - (int)local_3c) < 0x81) {
          std::__node_alloc::_M_deallocate(local_3c,(int)local_50[0] - (int)local_3c);
          uVar10 = 1;
        }
        else {
          operator_delete(local_3c);
          uVar10 = 1;
        }
      }
      goto LAB_00030bf3;
    }
  }
  else if (sVar9 <= uVar16) {
    pcVar13 = __s + sVar9;
    local_78 = __src;
    if ((__s != pcVar13) && (pcVar2 != __src)) {
      if (pcVar13 == __s + 1) {
        cVar1 = *__src;
        pcVar13 = __src;
        while ((local_78 = pcVar13, cVar1 != *__s &&
               (pcVar13 = pcVar13 + 1, local_78 = pcVar2, pcVar2 != pcVar13))) {
          cVar1 = *pcVar13;
        }
      }
      else {
        pcVar4 = __src;
        while (pcVar3 = pcVar4, pcVar4 = pcVar3 + 1, local_78 = pcVar2, pcVar4 != pcVar2 + 1) {
          pcVar5 = __s + 1;
          pcVar6 = pcVar4;
          if (pcVar4[-1] == *__s) {
            while( true ) {
              local_78 = pcVar2;
              if (pcVar2 == pcVar6) goto LAB_00030fa4;
              if (*pcVar6 != *pcVar5) break;
              local_78 = pcVar3;
              if (pcVar13 == pcVar5 + 1) goto LAB_00030fa4;
              pcVar5 = pcVar5 + 1;
              pcVar6 = pcVar6 + 1;
            }
          }
        }
      }
    }
LAB_00030fa4:
    if ((pcVar2 != local_78) &&
       (local_78 = (char *)((int)local_78 - (int)__src), local_78 != (char *)0xffffffff)) {
      if (local_78 <= uVar16) {
        uVar16 = (uint)local_78;
      }
      goto LAB_00030c26;
    }
  }
  if (*(undefined1 **)(param_1 + 0x18) != *(undefined1 **)(param_1 + 0x14)) {
    **(undefined1 **)(param_1 + 0x18) = 0;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_1 + 0x18);
  }
  uVar10 = 0;
  if (*(undefined1 **)(param_2 + 0x18) != *(undefined1 **)(param_2 + 0x14)) {
    **(undefined1 **)(param_2 + 0x18) = 0;
    *(undefined4 *)(param_2 + 0x14) = *(undefined4 *)(param_2 + 0x18);
  }
LAB_00030bf3:
  if (local_14 != **(int **)(unaff_EBX + 0x6b2cd)) {
                    /* WARNING: Subroutine does not return */
    FUN_0002e000();
  }
  return uVar10;
}

