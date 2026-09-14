/* 000406e0 | STG::GERendererAPI::GL_GetIsExtensionSupported */

/* WARNING: Type propagation algorithm not settling */
/* STG::GERendererAPI::GL_GetIsExtensionSupported(char const*) */

bool STG::GERendererAPI::GL_GetIsExtensionSupported(char *param_1)

{
  int iVar1;
  char *pcVar2;
  undefined4 *puVar3;
  undefined4 *__src;
  char *pcVar4;
  size_t sVar5;
  void *pvVar6;
  char **ppcVar7;
  char **ppcVar8;
  char *pcVar9;
  uint uVar10;
  size_t sVar11;
  char **ppcVar12;
  int unaff_EBX;
  bool bVar13;
  char *local_d4;
  char *local_cc;
  uint local_c0 [4];
  int local_b0;
  undefined4 local_ac;
  char *local_9c;
  char *local_98;
  int local_90;
  char *local_8c [4];
  char **local_7c;
  char **local_78;
  int local_70;
  char *local_6c [4];
  char **local_5c;
  char **local_58;
  int local_50;
  undefined1 local_4c [16];
  undefined4 *local_3c;
  undefined4 *local_38;
  int local_30;
  char *local_2c [4];
  char **local_1c;
  char **local_18;
  int local_14;
  
  local_14 = 0x406eb;
  FUN_0002e044();
  local_14 = **(int **)(unaff_EBX + 0x5b74d);
  local_ac = CONCAT22(local_ac._2_2_,0x20);
  iVar1 = *(int *)(unaff_EBX + 0x5b751) + 8;
  local_9c = (char *)((int)&local_ac + 1);
  local_b0 = iVar1;
  local_98 = (char *)&local_ac;
  pcVar4 = (char *)glGetString(0x1f03);
  sVar5 = strlen(pcVar4);
  std::string::_M_append((string *)&local_ac,pcVar4,pcVar4 + sVar5);
  std::string::_M_append
            ((string *)&local_ac,(char *)(unaff_EBX + 0x46c46),(char *)(unaff_EBX + 0x46c47));
  local_70 = iVar1;
  local_5c = local_6c;
  local_58 = local_6c;
  sVar5 = strlen(param_1);
  sVar11 = (int)(param_1 + sVar5) - (int)param_1;
  uVar10 = sVar11 + 1;
  if (uVar10 != 0) {
    ppcVar7 = local_6c;
    if (0x10 < uVar10) {
      local_c0[0] = uVar10;
      if (uVar10 < 0x81) {
        ppcVar7 = (char **)std::__node_alloc::_M_allocate(local_c0);
      }
      else {
        ppcVar7 = operator_new(uVar10);
      }
      local_6c[0] = (char *)((int)ppcVar7 + local_c0[0]);
      local_5c = ppcVar7;
      local_58 = ppcVar7;
    }
    if (param_1 != param_1 + sVar5) {
      pvVar6 = memcpy(ppcVar7,param_1,sVar11);
      ppcVar7 = (char **)((int)pvVar6 + sVar11);
    }
    iVar1 = *(int *)(unaff_EBX + 0x5b751);
    local_5c = ppcVar7;
    *(undefined1 *)ppcVar7 = 0;
    ppcVar7 = local_58;
    local_3c = (undefined4 *)((int)local_4c + 1);
    iVar1 = iVar1 + 8;
    local_4c._0_2_ = 0x20;
    local_50 = iVar1;
    local_38 = (undefined4 *)local_4c;
    sVar5 = strlen((char *)local_58);
    std::string::_M_append((string *)local_4c,(char *)ppcVar7,(char *)((int)ppcVar7 + sVar5));
    __src = local_38;
    puVar3 = local_3c;
    sVar5 = (int)local_3c - (int)local_38;
    uVar10 = sVar5 + 1;
    local_90 = iVar1;
    local_7c = local_8c;
    local_78 = local_8c;
    if (uVar10 != 0) {
      if (0x10 < uVar10) {
        local_c0[0] = uVar10;
        if (uVar10 < 0x81) {
          local_78 = (char **)std::__node_alloc::_M_allocate(local_c0);
        }
        else {
          local_78 = operator_new(uVar10);
        }
        local_8c[0] = (char *)((int)local_78 + local_c0[0]);
      }
      local_7c = local_78;
      if (puVar3 != __src) {
        pvVar6 = memcpy(local_78,__src,sVar5);
        local_7c = (char **)((int)pvVar6 + sVar5);
      }
      *(undefined1 *)local_7c = 0;
      std::string::_M_append
                ((string *)local_8c,(char *)(unaff_EBX + 0x46c46),(char *)(unaff_EBX + 0x46c47));
      local_50 = *(int *)(unaff_EBX + 0x5b751) + 8;
      if ((local_38 != (undefined4 *)local_4c) && (local_38 != (undefined4 *)0x0)) {
        if ((uint)(local_4c._0_4_ - (int)local_38) < 0x81) {
          std::__node_alloc::_M_deallocate(local_38,local_4c._0_4_ - (int)local_38);
        }
        else {
          operator_delete(local_38);
        }
      }
      local_70 = *(int *)(unaff_EBX + 0x5b751) + 8;
      if ((local_58 != local_6c) && (local_58 != (char **)0x0)) {
        if ((uint)((int)local_6c[0] - (int)local_58) < 0x81) {
          std::__node_alloc::_M_deallocate(local_58,(int)local_6c[0] - (int)local_58);
        }
        else {
          operator_delete(local_58);
        }
      }
      ppcVar7 = local_78;
      local_30 = *(int *)(unaff_EBX + 0x5b751) + 8;
      local_1c = local_2c;
      local_18 = local_2c;
      sVar5 = strlen((char *)local_78);
      sVar11 = (int)((int)ppcVar7 + sVar5) - (int)ppcVar7;
      uVar10 = sVar11 + 1;
      if (uVar10 != 0) {
        ppcVar8 = local_2c;
        if (0x10 < uVar10) {
          local_c0[0] = uVar10;
          if (uVar10 < 0x81) {
            ppcVar8 = (char **)std::__node_alloc::_M_allocate(local_c0);
          }
          else {
            ppcVar8 = operator_new(uVar10);
          }
          local_2c[0] = (char *)((int)ppcVar8 + local_c0[0]);
          local_1c = ppcVar8;
          local_18 = ppcVar8;
        }
        if (ppcVar7 != (char **)((int)ppcVar7 + sVar5)) {
          pvVar6 = memcpy(ppcVar8,ppcVar7,sVar11);
          ppcVar8 = (char **)((int)pvVar6 + sVar11);
        }
        local_1c = ppcVar8;
        *(undefined1 *)ppcVar8 = 0;
        ppcVar7 = local_18;
        sVar5 = strlen((char *)local_18);
        bVar13 = sVar5 == 0;
        local_cc = local_9c;
        local_d4 = local_98;
        if ((local_9c != local_98) &&
           (bVar13 = false, sVar5 <= (uint)((int)local_9c - (int)local_98))) {
          ppcVar8 = (char **)((int)ppcVar7 + sVar5);
          if ((ppcVar7 != ppcVar8) && (local_9c != local_98)) {
            if (ppcVar8 == (char **)((int)ppcVar7 + 1)) {
              if (*local_98 != *(char *)ppcVar7) {
                do {
                  local_d4 = local_d4 + 1;
                  if (local_9c == local_d4) {
                    local_d4 = local_9c;
                    goto LAB_00040aa8;
                  }
                } while (*local_d4 != *(char *)ppcVar7);
              }
            }
            else {
              pcVar4 = local_98;
              while (pcVar2 = pcVar4, pcVar4 = pcVar2 + 1, local_d4 = local_9c, local_cc = local_9c,
                    pcVar4 != local_9c + 1) {
                if (*pcVar2 == *(char *)ppcVar7) {
                  if (local_9c == pcVar4) break;
                  pcVar9 = pcVar4;
                  ppcVar12 = (char **)((int)ppcVar7 + 1);
                  while (*pcVar9 == *(char *)ppcVar12) {
                    ppcVar12 = (char **)((int)ppcVar12 + 1);
                    local_d4 = pcVar2;
                    if ((ppcVar8 == ppcVar12) ||
                       (pcVar9 = pcVar9 + 1, local_d4 = local_9c, local_9c == pcVar9))
                    goto LAB_00040aa8;
                  }
                }
              }
            }
          }
LAB_00040aa8:
          bVar13 = false;
          if (local_cc != local_d4) {
            bVar13 = (int)local_d4 - (int)local_98 != -1;
          }
        }
        local_30 = *(int *)(unaff_EBX + 0x5b751) + 8;
        if ((ppcVar7 != local_2c) && (ppcVar7 != (char **)0x0)) {
          if ((uint)((int)local_2c[0] - (int)ppcVar7) < 0x81) {
            std::__node_alloc::_M_deallocate(ppcVar7,(int)local_2c[0] - (int)ppcVar7);
          }
          else {
            operator_delete(ppcVar7);
          }
        }
        local_90 = *(int *)(unaff_EBX + 0x5b751) + 8;
        if ((local_78 != local_8c) && (local_78 != (char **)0x0)) {
          if ((uint)((int)local_8c[0] - (int)local_78) < 0x81) {
            std::__node_alloc::_M_deallocate(local_78,(int)local_8c[0] - (int)local_78);
          }
          else {
            operator_delete(local_78);
          }
        }
        local_b0 = *(int *)(unaff_EBX + 0x5b751) + 8;
        if ((local_98 != (char *)&local_ac) && (local_98 != (char *)0x0)) {
          if ((uint)(local_ac - (int)local_98) < 0x81) {
            std::__node_alloc::_M_deallocate(local_98,local_ac - (int)local_98);
          }
          else {
            operator_delete(local_98);
          }
        }
        if (local_14 == **(int **)(unaff_EBX + 0x5b74d)) {
          return bVar13;
        }
                    /* WARNING: Subroutine does not return */
        FUN_0002e000();
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  std::__stl_throw_length_error((char *)(unaff_EBX + 0x46c21));
}

