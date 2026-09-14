/* 000330e0 | FUN_000330e0 */

undefined1 __regparm3 FUN_000330e0(FFileManager *param_1)

{
  string *this;
  int iVar1;
  uint *puVar2;
  undefined1 uVar3;
  char *pcVar4;
  int *piVar5;
  char cVar6;
  uint uVar7;
  undefined1 *puVar8;
  ulong uVar9;
  size_t sVar10;
  int iVar11;
  int iVar12;
  int *extraout_ECX;
  void *__dest;
  UStringBase *extraout_EDX;
  uint __n;
  undefined1 *puVar13;
  size_t sVar14;
  size_t sVar15;
  int unaff_EBX;
  int local_140;
  uint local_13c [4];
  uint *local_12c;
  uint *local_128;
  int local_120;
  uint local_11c [4];
  uint *local_10c;
  uint *local_108;
  int local_100;
  uint local_fc [4];
  uint *local_ec;
  uint *local_e8;
  int local_e0;
  uint local_dc [4];
  uint *local_cc;
  uint *local_c8;
  int local_c0;
  uint local_bc [4];
  uint *local_ac;
  uint *local_a8;
  int local_a0;
  uint local_9c [4];
  uint *local_8c;
  uint *local_88;
  int local_80;
  undefined4 local_7c;
  int local_6c;
  uint *local_68;
  int local_60;
  undefined4 local_5c;
  int local_4c;
  char *local_48;
  int local_40;
  int local_3c [4];
  char *local_2c;
  int *local_28;
  int local_24;
  undefined4 local_18;
  
  local_18 = 0x330f7;
  FUN_0002e044();
  iVar1 = *extraout_ECX;
  local_24 = **(int **)(unaff_EBX + 0x68d41);
  STG::FFileManager::GetBasePath();
  piVar5 = local_28;
  this = (string *)(iVar1 + 4);
  uVar7 = (int)local_2c - (int)local_28;
  puVar8 = *(undefined1 **)(iVar1 + 0x14);
  __dest = *(void **)(iVar1 + 0x18);
  __n = (int)puVar8 - (int)__dest;
  if (__n < uVar7) {
    iVar12 = 0;
    if (__n != 0) {
      memmove(__dest,local_28,__n);
      iVar12 = *(int *)(iVar1 + 0x14) - *(int *)(iVar1 + 0x18);
    }
    std::string::_M_append(this,(char *)(iVar12 + (int)piVar5),local_2c);
  }
  else {
    if (uVar7 != 0) {
      memmove(__dest,local_28,uVar7);
      puVar8 = *(undefined1 **)(iVar1 + 0x14);
      __dest = *(void **)(iVar1 + 0x18);
    }
    puVar13 = (undefined1 *)(uVar7 + (int)__dest);
    if (puVar13 != puVar8) {
      *puVar13 = *puVar8;
      *(int *)(iVar1 + 0x14) = (int)(puVar13 + (*(int *)(iVar1 + 0x14) - (int)puVar8));
    }
  }
  iVar1 = *(int *)(unaff_EBX + 0x68d45);
  local_40 = iVar1 + 8;
  if ((local_28 != local_3c) && (local_28 != (int *)0x0)) {
    if ((uint)(local_3c[0] - (int)local_28) < 0x81) {
      std::__node_alloc::_M_deallocate(local_28,local_3c[0] - (int)local_28);
    }
    else {
      operator_delete(local_28);
    }
  }
  iVar12 = iVar1 + 8;
  local_13c[0] = local_13c[0] & 0xffffff00;
  local_11c[0] = local_11c[0] & 0xffffff00;
  local_fc[0] = local_fc[0] & 0xffffff00;
  local_dc[0] = local_dc[0] & 0xffffff00;
  local_140 = iVar12;
  local_12c = local_13c;
  local_128 = local_13c;
  local_120 = iVar12;
  local_10c = local_11c;
  local_108 = local_11c;
  local_100 = iVar12;
  local_ec = local_fc;
  local_e8 = local_fc;
  local_e0 = iVar12;
  local_cc = local_dc;
  local_c8 = local_dc;
  STG::FFileManager::GetPathComponents
            (param_1,extraout_EDX,(UStringBase *)&local_140,(UStringBase *)&local_120,
             (UStringBase *)&local_100,(UStringBase *)&local_e0);
  uVar9 = STG::FFileManager::GetPathFlags
                    (param_1,(UStringBase *)&local_140,(UStringBase *)&local_120,
                     (UStringBase *)&local_100,(UStringBase *)&local_e0);
  cVar6 = STG::FFileManager::GetIsPathRelative(param_1,uVar9);
  puVar2 = local_108;
  if (cVar6 == '\0') {
    cVar6 = STG::FFileManager::GetIsPathAbsolute(param_1,uVar9);
    if (cVar6 == '\0') goto LAB_00033323;
    sVar14 = *(int *)(param_1 + 0x18) - *(int *)(param_1 + 0x1c);
    sVar15 = (int)local_12c - (int)local_128;
    sVar10 = sVar14;
    if ((int)sVar15 < (int)sVar14) {
      sVar10 = sVar15;
    }
    iVar11 = memcmp(*(void **)(param_1 + 0x1c),local_128,sVar10);
    uVar3 = 0;
    if (((iVar11 != 0) || (uVar3 = 0, (int)sVar14 < (int)sVar15)) || ((int)sVar15 < (int)sVar14))
    goto LAB_00033344;
    local_bc[0] = local_bc[0] & 0xffffff00;
    local_9c[0] = local_9c[0] & 0xffffff00;
    local_c0 = iVar12;
    local_ac = local_bc;
    local_a8 = local_bc;
    local_a0 = iVar12;
    local_8c = local_9c;
    local_88 = local_9c;
    cVar6 = FUN_00030b60(&local_c0,&local_a0);
    puVar2 = local_88;
    if ((cVar6 != '\0') && (local_a8 == local_ac)) {
      sVar10 = strlen((char *)local_88);
      std::string::_M_append(this,(char *)puVar2,(char *)((int)puVar2 + sVar10));
      local_a0 = iVar12;
      if ((local_88 != local_9c) && (local_88 != (uint *)0x0)) {
        if (local_9c[0] - (int)local_88 < 0x81) {
          std::__node_alloc::_M_deallocate(local_88,local_9c[0] - (int)local_88);
        }
        else {
          operator_delete(local_88);
        }
      }
      local_c0 = iVar1 + 8;
      if ((local_a8 != local_bc) && (local_a8 != (uint *)0x0)) {
        if (local_bc[0] - (int)local_a8 < 0x81) {
          std::__node_alloc::_M_deallocate(local_a8,local_bc[0] - (int)local_a8);
        }
        else {
          operator_delete(local_a8);
        }
      }
      goto LAB_00033323;
    }
    local_a0 = iVar1 + 8;
    if ((local_88 != local_9c) && (local_88 != (uint *)0x0)) {
      if (local_9c[0] - (int)local_88 < 0x81) {
        std::__node_alloc::_M_deallocate(local_88,local_9c[0] - (int)local_88);
      }
      else {
        operator_delete(local_88);
      }
    }
    local_c0 = iVar1 + 8;
    uVar3 = 0;
    if ((local_a8 == local_bc) || (local_a8 == (uint *)0x0)) goto LAB_00033344;
    uVar7 = local_bc[0] - (int)local_a8;
    puVar2 = local_a8;
  }
  else {
    sVar10 = strlen((char *)local_108);
    std::string::_M_append(this,(char *)puVar2,(char *)((int)puVar2 + sVar10));
LAB_00033323:
    puVar2 = local_e8;
    if ((uVar9 & 4) != 0) {
      iVar12 = iVar1 + 8;
      local_4c = (int)&local_5c + 1;
      local_5c = CONCAT22(local_5c._2_2_,0x2f);
      local_60 = iVar12;
      local_48 = (char *)&local_5c;
      sVar10 = strlen((char *)local_e8);
      std::string::_M_append((string *)&local_5c,(char *)puVar2,(char *)((int)puVar2 + sVar10));
      pcVar4 = local_48;
      sVar10 = strlen(local_48);
      std::string::_M_append(this,pcVar4,pcVar4 + sVar10);
      local_60 = iVar12;
      if ((local_48 != (char *)&local_5c) && (local_48 != (char *)0x0)) {
        if ((uint)(local_5c - (int)local_48) < 0x81) {
          std::__node_alloc::_M_deallocate(local_48,local_5c - (int)local_48);
        }
        else {
          operator_delete(local_48);
        }
      }
    }
    puVar2 = local_c8;
    uVar3 = 1;
    if ((uVar9 & 8) == 0) goto LAB_00033344;
    iVar12 = iVar1 + 8;
    local_6c = (int)&local_7c + 1;
    local_7c = CONCAT22(local_7c._2_2_,0x2e);
    local_80 = iVar12;
    local_68 = &local_7c;
    sVar10 = strlen((char *)local_c8);
    std::string::_M_append((string *)&local_7c,(char *)puVar2,(char *)((int)puVar2 + sVar10));
    puVar2 = local_68;
    sVar10 = strlen((char *)local_68);
    std::string::_M_append(this,(char *)puVar2,(char *)((int)puVar2 + sVar10));
    local_80 = iVar12;
    if ((local_68 == &local_7c) || (local_68 == (uint *)0x0)) goto LAB_00033344;
    uVar7 = local_7c - (int)local_68;
    puVar2 = local_68;
  }
  if (uVar7 < 0x81) {
    std::__node_alloc::_M_deallocate(puVar2,uVar7);
  }
  else {
    operator_delete(puVar2);
  }
LAB_00033344:
  local_e0 = iVar1 + 8;
  if ((local_c8 != local_dc) && (local_c8 != (uint *)0x0)) {
    if (local_dc[0] - (int)local_c8 < 0x81) {
      std::__node_alloc::_M_deallocate(local_c8,local_dc[0] - (int)local_c8);
    }
    else {
      operator_delete(local_c8);
    }
  }
  local_100 = iVar1 + 8;
  if ((local_e8 != local_fc) && (local_e8 != (uint *)0x0)) {
    if (local_fc[0] - (int)local_e8 < 0x81) {
      std::__node_alloc::_M_deallocate(local_e8,local_fc[0] - (int)local_e8);
    }
    else {
      operator_delete(local_e8);
    }
  }
  local_120 = iVar1 + 8;
  if ((local_108 != local_11c) && (local_108 != (uint *)0x0)) {
    if (local_11c[0] - (int)local_108 < 0x81) {
      std::__node_alloc::_M_deallocate(local_108,local_11c[0] - (int)local_108);
    }
    else {
      operator_delete(local_108);
    }
  }
  local_140 = iVar1 + 8;
  if ((local_128 != local_13c) && (local_128 != (uint *)0x0)) {
    if (local_13c[0] - (int)local_128 < 0x81) {
      std::__node_alloc::_M_deallocate(local_128,local_13c[0] - (int)local_128);
    }
    else {
      operator_delete(local_128);
    }
  }
  if (local_24 != **(int **)(unaff_EBX + 0x68d41)) {
                    /* WARNING: Subroutine does not return */
    FUN_0002e000();
  }
  return uVar3;
}

