/* 00060800 | STG::UStringBase<char,int>::Replace */

/* WARNING: Removing unreachable block (ram,0x00060b6c) */
/* STG::UStringBase<char, int>::Replace(STG::UStringBase<char, int> const&, STG::UStringBase<char,
   int> const&) */

void __thiscall
STG::UStringBase<char,int>::Replace
          (UStringBase<char,int> *this,UStringBase *param_1,UStringBase *param_2)

{
  char **ppcVar1;
  char **ppcVar2;
  uint *puVar3;
  size_t sVar4;
  char *pcVar5;
  void *pvVar6;
  char *pcVar7;
  uint uVar8;
  char *pcVar9;
  uint uVar10;
  int iVar11;
  char *pcVar12;
  char *pcVar13;
  string *this_00;
  uint uVar14;
  char *pcVar15;
  void *__src;
  char *__src_00;
  char *pcVar16;
  int iVar17;
  int *piVar18;
  int iVar19;
  bool bVar20;
  char *local_a8;
  uint local_98;
  char *local_94 [4];
  char **local_84;
  char **local_80;
  char *local_7c [4];
  char **local_6c;
  char **local_68;
  int local_64;
  uint local_60 [4];
  uint *local_50;
  uint *local_4c;
  int local_48;
  uint local_44 [4];
  uint *local_34;
  uint *local_30;
  int local_2c;
  
  local_50 = local_60;
  piVar18 = *(int **)(DAT_00060e54 + 0x60848);
  iVar19 = *(int *)(DAT_00060e58 + 0x60864);
  local_2c = *piVar18;
  local_64 = iVar19 + 8;
  local_34 = local_44;
  local_60[0] = local_60[0] & 0xffffff00;
  local_44[0] = local_44[0] & 0xffffff00;
  local_4c = local_50;
  local_48 = local_64;
  local_30 = local_34;
  while( true ) {
    pcVar13 = *(char **)(param_1 + 0x18);
    sVar4 = strlen(pcVar13);
    __src_00 = *(char **)(this + 0x18);
    uVar8 = *(int *)(this + 0x14) - (int)__src_00;
    if (uVar8 < sVar4) break;
    pcVar9 = __src_00 + uVar8;
    if (sVar4 == 0) {
      uVar8 = (int)pcVar9 - (int)__src_00;
    }
    else {
      pcVar15 = __src_00;
      if (__src_00 != pcVar9) {
        pcVar5 = pcVar13 + sVar4;
        local_a8 = pcVar9;
        if (pcVar13 != pcVar5) {
          pcVar15 = pcVar9;
          if (pcVar13 != pcVar5 + -1) {
            pcVar16 = pcVar9 + -1;
            do {
              for (; local_a8[-1] == pcVar5[-1]; local_a8 = local_a8 + -1) {
                if (__src_00 == pcVar16) goto LAB_00060a10;
                pcVar7 = pcVar5 + -1;
                pcVar12 = pcVar16;
                while (pcVar7 = pcVar7 + -1, pcVar12[-1] == *pcVar7) {
                  if (pcVar12 == pcVar13 + (1 - (int)pcVar5) + (int)local_a8) goto LAB_00060e00;
                  pcVar12 = pcVar12 + -1;
                  if (__src_00 == pcVar12) goto LAB_00060a10;
                }
                pcVar16 = pcVar16 + -1;
              }
              bVar20 = __src_00 != pcVar16;
              local_a8 = local_a8 + -1;
              pcVar16 = pcVar16 + -1;
            } while (bVar20);
            goto LAB_00060a10;
          }
          if (pcVar9[-1] != pcVar5[-1]) {
            pcVar16 = pcVar9 + -1;
            do {
              local_a8 = local_a8 + -1;
              if (__src_00 == local_a8) goto LAB_00060a10;
              pcVar16 = pcVar16 + -1;
            } while (*pcVar16 != pcVar5[-1]);
          }
        }
LAB_00060e00:
        pcVar15 = local_a8 + ((int)pcVar13 - (int)pcVar5);
      }
LAB_00060a10:
      if (pcVar9 == pcVar15) break;
      uVar8 = (int)pcVar15 - (int)__src_00;
    }
    if (uVar8 == 0xffffffff) break;
    uVar10 = *(int *)(this + 0x14) - (int)__src_00;
    uVar14 = uVar8;
    if (uVar10 < uVar8) {
      uVar14 = uVar10;
    }
    local_6c = local_7c;
    sVar4 = (int)(__src_00 + uVar14) - (int)__src_00;
    uVar10 = sVar4 + 1;
    iVar17 = *(int *)(param_1 + 0x14);
    local_68 = local_6c;
    if (uVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      std::__stl_throw_length_error((char *)(DAT_00060e5c + 0x60ce4));
    }
    if (0x10 < uVar10) {
      local_98 = uVar10;
      if (uVar10 < 0x81) {
        local_68 = (char **)std::__node_alloc::_M_allocate(&local_98);
      }
      else {
        local_68 = operator_new(uVar10);
      }
      local_7c[0] = (char *)((int)local_68 + local_98);
    }
    local_6c = local_68;
    if (__src_00 != __src_00 + uVar14) {
      pvVar6 = memcpy(local_68,__src_00,sVar4);
      local_6c = (char **)((int)pvVar6 + sVar4);
    }
    *(undefined1 *)local_6c = 0;
    ppcVar2 = local_68;
    ppcVar1 = local_6c;
    uVar14 = (int)local_6c - (int)local_68;
    sVar4 = (int)local_50 - (int)local_4c;
    if (sVar4 < uVar14) {
      iVar11 = 0;
      if (sVar4 != 0) {
        memmove(local_4c,local_68,sVar4);
        iVar11 = (int)local_50 - (int)local_4c;
      }
      std::string::_M_append((string *)local_60,(char *)((int)ppcVar2 + iVar11),(char *)ppcVar1);
    }
    else {
      if (uVar14 != 0) {
        memmove(local_4c,local_68,uVar14);
      }
      if (local_50 != (uint *)((int)local_4c + uVar14)) {
        *(char *)((int)local_4c + uVar14) = (char)*local_50;
        local_50 = (uint *)((int)local_4c + uVar14);
      }
    }
    if ((local_68 != local_7c) && (local_68 != (char **)0x0)) {
      if ((uint)((int)local_7c[0] - (int)local_68) < 0x81) {
        std::__node_alloc::_M_deallocate(local_68,(int)local_7c[0] - (int)local_68);
      }
      else {
        operator_delete(local_68);
      }
    }
    iVar11 = *(int *)(this + 0x18);
    uVar8 = uVar8 + (iVar17 - (int)pcVar13);
    local_84 = local_94;
    local_80 = local_94;
    if ((uint)(*(int *)(this + 0x14) - iVar11) < uVar8) {
                    /* WARNING: Subroutine does not return */
      std::__stl_throw_out_of_range((char *)(DAT_00060e64 + 0x60e50));
    }
    __src = (void *)(iVar11 + uVar8);
    pvVar6 = (void *)(iVar11 + (*(int *)(this + 0x14) - iVar11));
    sVar4 = (int)pvVar6 - (int)__src;
    uVar8 = sVar4 + 1;
    if (uVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      std::__stl_throw_length_error((char *)(DAT_00060e60 + 0x60cf0));
    }
    if (0x10 < uVar8) {
      local_98 = uVar8;
      if (uVar8 < 0x81) {
        local_84 = (char **)std::__node_alloc::_M_allocate(&local_98);
      }
      else {
        local_84 = operator_new(uVar8);
      }
      local_94[0] = (char *)((int)local_84 + local_98);
    }
    local_80 = local_84;
    if (__src != pvVar6) {
      pvVar6 = memcpy(local_84,__src,sVar4);
      local_84 = (char **)((int)pvVar6 + sVar4);
    }
    *(undefined1 *)local_84 = 0;
    ppcVar2 = local_80;
    ppcVar1 = local_84;
    uVar8 = (int)local_84 - (int)local_80;
    sVar4 = (int)local_34 - (int)local_30;
    if (sVar4 < uVar8) {
      iVar17 = 0;
      if (sVar4 != 0) {
        memmove(local_30,local_80,sVar4);
        iVar17 = (int)local_34 - (int)local_30;
      }
      std::string::_M_append((string *)local_44,(char *)((int)ppcVar2 + iVar17),(char *)ppcVar1);
    }
    else {
      if (uVar8 != 0) {
        memmove(local_30,local_80,uVar8);
      }
      if ((uint *)((int)local_30 + uVar8) != local_34) {
        *(char *)((int)local_30 + uVar8) = (char)*local_34;
        local_34 = (uint *)((int)local_30 + uVar8);
      }
    }
    if ((local_80 != local_94) && (local_80 != (char **)0x0)) {
      if ((uint)((int)local_94[0] - (int)local_80) < 0x81) {
        std::__node_alloc::_M_deallocate(local_80,(int)local_94[0] - (int)local_80);
      }
      else {
        operator_delete(local_80);
      }
    }
    puVar3 = local_4c;
    if (*(undefined1 **)(this + 0x18) != *(undefined1 **)(this + 0x14)) {
      **(undefined1 **)(this + 0x18) = 0;
      *(undefined4 *)(this + 0x14) = *(undefined4 *)(this + 0x18);
    }
    this_00 = (string *)(this + 4);
    sVar4 = strlen((char *)local_4c);
    std::string::_M_append(this_00,(char *)puVar3,(char *)((int)puVar3 + sVar4));
    pcVar13 = *(char **)(param_2 + 0x18);
    sVar4 = strlen(pcVar13);
    std::string::_M_append(this_00,pcVar13,pcVar13 + sVar4);
    puVar3 = local_30;
    sVar4 = strlen((char *)local_30);
    std::string::_M_append(this_00,(char *)puVar3,(char *)((int)puVar3 + sVar4));
  }
  if (local_4c != local_50) {
    *(undefined1 *)local_4c = 0;
    local_50 = local_4c;
  }
  if (local_30 != local_34) {
    *(undefined1 *)local_30 = 0;
    local_34 = local_30;
  }
  local_48 = iVar19 + 8;
  if ((local_30 != local_44) && (local_30 != (uint *)0x0)) {
    if (local_44[0] - (int)local_30 < 0x81) {
      std::__node_alloc::_M_deallocate(local_30,local_44[0] - (int)local_30);
    }
    else {
      operator_delete(local_30);
    }
  }
  local_64 = iVar19 + 8;
  if ((local_4c != local_60) && (local_4c != (uint *)0x0)) {
    if (local_60[0] - (int)local_4c < 0x81) {
      std::__node_alloc::_M_deallocate(local_4c,local_60[0] - (int)local_4c);
    }
    else {
      operator_delete(local_4c);
    }
  }
  if (local_2c != *piVar18) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(this);
  }
  return;
}

