/* 0003bf60 | STG::GERendererAPI::GL_GetIsExtensionSupported */

/* STG::GERendererAPI::GL_GetIsExtensionSupported(char const*) */

void STG::GERendererAPI::GL_GetIsExtensionSupported(char *param_1)

{
  string sVar1;
  string *psVar2;
  string *psVar3;
  string *psVar4;
  char *__s;
  size_t sVar5;
  uint uVar6;
  void *pvVar7;
  char **ppcVar8;
  string *psVar9;
  string *psVar10;
  string *psVar11;
  int iVar12;
  int *piVar13;
  size_t sVar14;
  int iVar15;
  string *psVar16;
  string *psVar17;
  uint local_bc;
  int local_b8;
  undefined4 local_b4;
  string *local_a4;
  string *local_a0;
  int local_9c;
  string *local_98 [4];
  string *local_88;
  string *local_84;
  int local_80;
  char *local_7c [4];
  char **local_6c;
  char **local_68;
  int local_64;
  undefined4 local_60;
  string *local_50;
  string *local_4c;
  int local_48;
  string *local_44 [4];
  string *local_34;
  string *local_30;
  int local_2c;
  
  piVar13 = *(int **)(DAT_0003c478 + 0x3bf80);
  iVar12 = *(int *)(DAT_0003c47c + 0x3bf88);
  local_2c = *piVar13;
  local_a4 = (string *)((int)&local_b4 + 1);
  local_b4 = CONCAT22(local_b4._2_2_,0x20);
  local_b8 = iVar12 + 8;
  local_a0 = (string *)&local_b4;
  __s = (char *)glGetString(0x1f03);
  sVar5 = strlen(__s);
  std::string::_M_append((string *)&local_b4,__s,__s + sVar5);
  std::string::_M_append
            ((string *)&local_b4,(char *)(DAT_0003c480 + 0x3bfe0),(char *)(DAT_0003c480 + 0x3bfe1));
  local_80 = iVar12 + 8;
  local_6c = local_7c;
  local_68 = local_7c;
  sVar5 = strlen(param_1);
  sVar14 = (int)(param_1 + sVar5) - (int)param_1;
  uVar6 = sVar14 + 1;
  if (uVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    std::__stl_throw_length_error((char *)(DAT_0003c48c + 0x3c318));
  }
  ppcVar8 = local_7c;
  if (0x10 < uVar6) {
    local_bc = uVar6;
    if (uVar6 < 0x81) {
      local_6c = (char **)std::__node_alloc::_M_allocate(&local_bc);
    }
    else {
      local_6c = operator_new(uVar6);
    }
    local_7c[0] = (char *)((int)local_6c + local_bc);
    ppcVar8 = local_6c;
    local_68 = local_6c;
  }
  if (param_1 != param_1 + sVar5) {
    pvVar7 = memcpy(ppcVar8,param_1,sVar14);
    ppcVar8 = (char **)((int)pvVar7 + sVar14);
  }
  local_6c = ppcVar8;
  *(undefined1 *)ppcVar8 = 0;
  ppcVar8 = local_68;
  iVar15 = iVar12 + 8;
  local_50 = (string *)((int)&local_60 + 1);
  local_60 = CONCAT22(local_60._2_2_,0x20);
  local_64 = iVar15;
  local_4c = (string *)&local_60;
  sVar5 = strlen((char *)local_68);
  std::string::_M_append((string *)&local_60,(char *)ppcVar8,(char *)((int)ppcVar8 + sVar5));
  psVar9 = local_4c;
  psVar4 = local_50;
  sVar5 = (int)local_50 - (int)local_4c;
  uVar6 = sVar5 + 1;
  local_88 = (string *)local_98;
  local_9c = iVar15;
  local_84 = (string *)local_98;
  if (uVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    std::__stl_throw_length_error((char *)(DAT_0003c488 + 0x3c30c));
  }
  if (0x10 < uVar6) {
    local_bc = uVar6;
    if (uVar6 < 0x81) {
      local_88 = (string *)std::__node_alloc::_M_allocate(&local_bc);
    }
    else {
      local_88 = operator_new(uVar6);
    }
    local_98[0] = local_88 + local_bc;
  }
  local_84 = local_88;
  if (psVar9 != psVar4) {
    pvVar7 = memcpy(local_88,psVar9,sVar5);
    local_88 = (string *)((int)pvVar7 + sVar5);
  }
  *local_88 = (string)0x0;
  std::string::_M_append
            ((string *)local_98,(char *)(DAT_0003c484 + 0x3c110),(char *)(DAT_0003c484 + 0x3c111));
  local_64 = iVar12 + 8;
  if ((local_4c != (string *)&local_60) && (local_4c != (string *)0x0)) {
    if ((uint)(local_60 - (int)local_4c) < 0x81) {
      std::__node_alloc::_M_deallocate(local_4c,local_60 - (int)local_4c);
    }
    else {
      operator_delete(local_4c);
    }
  }
  local_80 = iVar12 + 8;
  if ((local_68 != local_7c) && (local_68 != (char **)0x0)) {
    if ((uint)((int)local_7c[0] - (int)local_68) < 0x81) {
      std::__node_alloc::_M_deallocate(local_68,(int)local_7c[0] - (int)local_68);
    }
    else {
      operator_delete(local_68);
    }
  }
  psVar4 = local_84;
  local_48 = iVar12 + 8;
  local_34 = (string *)local_44;
  local_30 = (string *)local_44;
  sVar5 = strlen((char *)local_84);
  sVar14 = (int)(psVar4 + sVar5) - (int)psVar4;
  uVar6 = sVar14 + 1;
  if (uVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    std::__stl_throw_length_error((char *)(DAT_0003c490 + 0x3c350));
  }
  psVar9 = (string *)local_44;
  if (0x10 < uVar6) {
    local_bc = uVar6;
    if (uVar6 < 0x81) {
      local_34 = (string *)std::__node_alloc::_M_allocate(&local_bc);
    }
    else {
      local_34 = operator_new(uVar6);
    }
    local_44[0] = local_34 + local_bc;
    psVar9 = local_34;
    local_30 = local_34;
  }
  if (psVar4 != psVar4 + sVar5) {
    pvVar7 = memcpy(psVar9,psVar4,sVar14);
    psVar9 = (string *)((int)pvVar7 + sVar14);
  }
  iVar15 = 0;
  local_34 = psVar9;
  *psVar9 = (string)0x0;
  psVar4 = local_30;
  sVar5 = strlen((char *)local_30);
  if (local_a4 == local_a0) {
    iVar15 = 1 - sVar5;
    if (1 < sVar5) {
      iVar15 = 0;
    }
  }
  else if (sVar5 <= (uint)((int)local_a4 - (int)local_a0)) {
    psVar10 = psVar4 + sVar5;
    psVar9 = local_a0;
    if (local_a4 != local_a0 && psVar4 != psVar10) {
      psVar17 = local_a0;
      if (psVar10 == psVar4 + 1) {
        sVar1 = *local_a0;
        psVar10 = local_a0;
        while ((psVar9 = psVar10, sVar1 != *psVar4 &&
               (psVar10 = psVar10 + 1, psVar9 = local_a4, local_a4 != psVar10))) {
          psVar17 = psVar17 + 1;
          sVar1 = *psVar17;
        }
      }
      else {
        while (psVar16 = psVar17, psVar9 = local_a4, psVar16 != local_a4) {
          psVar17 = psVar16 + 1;
          psVar2 = psVar4 + 1;
          psVar3 = psVar17;
          if (*psVar16 == *psVar4) {
            while( true ) {
              psVar9 = local_a4;
              if (local_a4 == psVar3) goto LAB_0003c23c;
              psVar11 = psVar2 + 1;
              if (*psVar3 != *psVar2) break;
              psVar9 = psVar16;
              psVar2 = psVar11;
              psVar3 = psVar3 + 1;
              if (psVar10 == psVar11) goto LAB_0003c23c;
            }
          }
        }
      }
    }
LAB_0003c23c:
    if (local_a4 == psVar9) {
      iVar15 = 0;
    }
    else {
      iVar15 = 0;
      if ((int)psVar9 - (int)local_a0 != -1) {
        iVar15 = 1;
      }
    }
  }
  local_48 = iVar12 + 8;
  if ((psVar4 != (string *)local_44) && (psVar4 != (string *)0x0)) {
    if ((uint)((int)local_44[0] - (int)psVar4) < 0x81) {
      std::__node_alloc::_M_deallocate(psVar4,(int)local_44[0] - (int)psVar4);
    }
    else {
      operator_delete(psVar4);
    }
  }
  local_9c = iVar12 + 8;
  if ((local_84 != (string *)local_98) && (local_84 != (string *)0x0)) {
    if ((uint)((int)local_98[0] - (int)local_84) < 0x81) {
      std::__node_alloc::_M_deallocate(local_84,(int)local_98[0] - (int)local_84);
    }
    else {
      operator_delete(local_84);
    }
  }
  local_b8 = iVar12 + 8;
  if ((local_a0 != (string *)&local_b4) && (local_a0 != (string *)0x0)) {
    if ((uint)(local_b4 - (int)local_a0) < 0x81) {
      std::__node_alloc::_M_deallocate(local_a0,local_b4 - (int)local_a0);
    }
    else {
      operator_delete(local_a0);
    }
  }
  if (local_2c == *piVar13) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar15);
}

