/* 000337ac | STG::FFileManager::BuildPath */

/* STG::FFileManager::BuildPath(STG::UStringBase<char, int> const&, STG::UStringBase<char, int>&)
   const */

void __thiscall
STG::FFileManager::BuildPath(FFileManager *this,UStringBase *param_1,UStringBase *param_2)

{
  uint *puVar1;
  string *psVar2;
  int *piVar3;
  void *__dest;
  int iVar4;
  int iVar5;
  string *this_00;
  size_t sVar6;
  size_t sVar7;
  undefined1 *puVar8;
  uint uVar9;
  undefined4 uVar10;
  size_t sVar11;
  int iVar12;
  int *piVar13;
  int local_128;
  uint local_124 [4];
  uint *local_114;
  uint *local_110;
  int local_10c;
  uint local_108 [4];
  uint *local_f8;
  uint *local_f4;
  int local_f0;
  uint local_ec [4];
  uint *local_dc;
  uint *local_d8;
  int local_d4;
  uint local_d0 [4];
  uint *local_c0;
  uint *local_bc;
  int local_b8;
  uint local_b4 [4];
  uint *local_a4;
  uint *local_a0;
  int local_9c;
  uint local_98 [4];
  uint *local_88;
  uint *local_84;
  int local_80;
  undefined4 local_7c;
  int local_6c;
  string *local_68;
  int local_64;
  undefined4 local_60;
  int local_50;
  string *local_4c;
  int local_48;
  int local_44 [4];
  char *local_34;
  int *local_30;
  int local_2c;
  
  if (*(undefined1 **)(param_2 + 0x18) != *(undefined1 **)(param_2 + 0x14)) {
    **(undefined1 **)(param_2 + 0x18) = 0;
    *(undefined4 *)(param_2 + 0x14) = *(undefined4 *)(param_2 + 0x18);
  }
  iVar5 = HasValidBasePath(this);
  if (iVar5 == 0) {
    return;
  }
  piVar13 = *(int **)(DAT_000337a4 + 0x3318c);
  local_2c = *piVar13;
  GetBasePath();
  piVar3 = local_30;
  puVar8 = *(undefined1 **)(param_2 + 0x14);
  __dest = *(void **)(param_2 + 0x18);
  uVar9 = (int)local_34 - (int)local_30;
  this_00 = (string *)(param_2 + 4);
  sVar6 = (int)puVar8 - (int)__dest;
  if (sVar6 < uVar9) {
    iVar5 = 0;
    if (sVar6 != 0) {
      memmove(__dest,local_30,sVar6);
      iVar5 = *(int *)(param_2 + 0x14) - *(int *)(param_2 + 0x18);
    }
    std::string::_M_append(this_00,(char *)((int)piVar3 + iVar5),local_34);
  }
  else {
    if (uVar9 != 0) {
      memmove(__dest,local_30,uVar9);
      __dest = *(void **)(param_2 + 0x18);
      puVar8 = *(undefined1 **)(param_2 + 0x14);
    }
    if ((undefined1 *)((int)__dest + uVar9) != puVar8) {
      *(undefined1 *)((int)__dest + uVar9) = *puVar8;
      *(undefined1 **)(param_2 + 0x14) =
           (undefined1 *)((int)__dest + uVar9) + (*(int *)(param_2 + 0x14) - (int)puVar8);
    }
  }
  iVar5 = *(int *)(DAT_000337a8 + 0x3320c);
  local_48 = iVar5 + 8;
  if ((local_30 != local_44) && (local_30 != (int *)0x0)) {
    if ((uint)(local_44[0] - (int)local_30) < 0x81) {
      std::__node_alloc::_M_deallocate(local_30,local_44[0] - (int)local_30);
    }
    else {
      operator_delete(local_30);
    }
  }
  local_114 = local_124;
  iVar12 = iVar5 + 8;
  local_f8 = local_108;
  local_dc = local_ec;
  local_c0 = local_d0;
  local_124[0] = local_124[0] & 0xffffff00;
  local_108[0] = local_108[0] & 0xffffff00;
  local_ec[0] = local_ec[0] & 0xffffff00;
  local_d0[0] = local_d0[0] & 0xffffff00;
  local_128 = iVar12;
  local_110 = local_114;
  local_10c = iVar12;
  local_f4 = local_f8;
  local_f0 = iVar12;
  local_d8 = local_dc;
  local_d4 = iVar12;
  local_bc = local_c0;
  GetPathComponents(this,param_1,(UStringBase *)&local_128,(UStringBase *)&local_10c,
                    (UStringBase *)&local_f0,(UStringBase *)&local_d4);
  uVar9 = GetPathFlags(this,(UStringBase *)&local_128,(UStringBase *)&local_10c,
                       (UStringBase *)&local_f0,(UStringBase *)&local_d4);
  iVar4 = GetIsPathRelative(this,uVar9);
  puVar1 = local_f4;
  if (iVar4 == 0) {
    iVar4 = GetIsPathAbsolute(this,uVar9);
    if (iVar4 != 0) {
      sVar7 = *(int *)(this + 0x18) - (int)*(void **)(this + 0x1c);
      sVar11 = (int)local_114 - (int)local_110;
      sVar6 = sVar7;
      if ((int)sVar11 <= (int)sVar7) {
        sVar6 = sVar11;
      }
      iVar4 = memcmp(*(void **)(this + 0x1c),local_110,sVar6);
      uVar10 = 0;
      if (iVar4 != 0) goto LAB_00033338;
      if (((int)sVar7 < (int)sVar11) || ((int)sVar11 < (int)sVar7)) {
        uVar10 = 0;
        goto LAB_00033338;
      }
      local_b4[0] = local_b4[0] & 0xffffff00;
      local_98[0] = local_98[0] & 0xffffff00;
      local_b8 = iVar12;
      local_a4 = local_b4;
      local_a0 = local_b4;
      local_9c = iVar12;
      local_88 = local_98;
      local_84 = local_98;
      iVar4 = FUN_00031430((UStringBase *)&local_10c,this + 0x20);
      puVar1 = local_84;
      if ((iVar4 == 0) || (local_a0 != local_a4)) {
        local_9c = iVar5 + 8;
        if ((local_84 != local_98) && (local_84 != (uint *)0x0)) {
          if (local_98[0] - (int)local_84 < 0x81) {
            std::__node_alloc::_M_deallocate(local_84,local_98[0] - (int)local_84);
          }
          else {
            operator_delete(local_84);
          }
        }
        local_b8 = iVar5 + 8;
        if (local_a0 == local_b4) {
          uVar10 = 0;
        }
        else if (local_a0 == (uint *)0x0) {
          uVar10 = 0;
        }
        else if (local_b4[0] - (int)local_a0 < 0x81) {
          std::__node_alloc::_M_deallocate(local_a0,local_b4[0] - (int)local_a0);
          uVar10 = 0;
        }
        else {
          operator_delete(local_a0);
          uVar10 = 0;
        }
        goto LAB_00033338;
      }
      sVar6 = strlen((char *)local_84);
      std::string::_M_append(this_00,(char *)puVar1,(char *)((int)puVar1 + sVar6));
      local_9c = iVar12;
      if ((local_84 != local_98) && (local_84 != (uint *)0x0)) {
        if (local_98[0] - (int)local_84 < 0x81) {
          std::__node_alloc::_M_deallocate(local_84,local_98[0] - (int)local_84);
        }
        else {
          operator_delete(local_84);
        }
      }
      local_b8 = iVar5 + 8;
      if ((local_a0 != local_b4) && (local_a0 != (uint *)0x0)) {
        if (local_b4[0] - (int)local_a0 < 0x81) {
          std::__node_alloc::_M_deallocate(local_a0,local_b4[0] - (int)local_a0);
        }
        else {
          operator_delete(local_a0);
        }
      }
    }
  }
  else {
    sVar6 = strlen((char *)local_f4);
    std::string::_M_append(this_00,(char *)puVar1,(char *)((int)puVar1 + sVar6));
  }
  puVar1 = local_d8;
  if ((uVar9 & 4) != 0) {
    local_50 = (int)&local_60 + 1;
    iVar4 = iVar5 + 8;
    local_60 = CONCAT22(local_60._2_2_,0x2f);
    local_64 = iVar4;
    local_4c = (string *)&local_60;
    sVar6 = strlen((char *)local_d8);
    std::string::_M_append((string *)&local_60,(char *)puVar1,(char *)((int)puVar1 + sVar6));
    psVar2 = local_4c;
    sVar6 = strlen((char *)local_4c);
    std::string::_M_append(this_00,(char *)psVar2,(char *)(psVar2 + sVar6));
    local_64 = iVar4;
    if ((local_4c != (string *)&local_60) && (local_4c != (string *)0x0)) {
      if ((uint)(local_60 - (int)local_4c) < 0x81) {
        std::__node_alloc::_M_deallocate(local_4c,local_60 - (int)local_4c);
      }
      else {
        operator_delete(local_4c);
      }
    }
  }
  puVar1 = local_bc;
  if ((uVar9 & 8) != 0) {
    local_6c = (int)&local_7c + 1;
    iVar4 = iVar5 + 8;
    local_7c = CONCAT22(local_7c._2_2_,0x2e);
    local_80 = iVar4;
    local_68 = (string *)&local_7c;
    sVar6 = strlen((char *)local_bc);
    std::string::_M_append((string *)&local_7c,(char *)puVar1,(char *)((int)puVar1 + sVar6));
    psVar2 = local_68;
    sVar6 = strlen((char *)local_68);
    std::string::_M_append(this_00,(char *)psVar2,(char *)(psVar2 + sVar6));
    local_80 = iVar4;
    if ((local_68 != (string *)&local_7c) && (local_68 != (string *)0x0)) {
      if ((uint)(local_7c - (int)local_68) < 0x81) {
        std::__node_alloc::_M_deallocate(local_68,local_7c - (int)local_68);
        uVar10 = 1;
      }
      else {
        operator_delete(local_68);
        uVar10 = 1;
      }
      goto LAB_00033338;
    }
  }
  uVar10 = 1;
LAB_00033338:
  local_d4 = iVar5 + 8;
  if ((local_bc != local_d0) && (local_bc != (uint *)0x0)) {
    if (local_d0[0] - (int)local_bc < 0x81) {
      std::__node_alloc::_M_deallocate(local_bc,local_d0[0] - (int)local_bc);
    }
    else {
      operator_delete(local_bc);
    }
  }
  local_f0 = iVar5 + 8;
  if ((local_d8 != local_ec) && (local_d8 != (uint *)0x0)) {
    if (local_ec[0] - (int)local_d8 < 0x81) {
      std::__node_alloc::_M_deallocate(local_d8,local_ec[0] - (int)local_d8);
    }
    else {
      operator_delete(local_d8);
    }
  }
  local_10c = iVar5 + 8;
  if ((local_f4 != local_108) && (local_f4 != (uint *)0x0)) {
    if (local_108[0] - (int)local_f4 < 0x81) {
      std::__node_alloc::_M_deallocate(local_f4,local_108[0] - (int)local_f4);
    }
    else {
      operator_delete(local_f4);
    }
  }
  local_128 = iVar5 + 8;
  if ((local_110 != local_124) && (local_110 != (uint *)0x0)) {
    if (local_124[0] - (int)local_110 < 0x81) {
      std::__node_alloc::_M_deallocate(local_110,local_124[0] - (int)local_110);
    }
    else {
      operator_delete(local_110);
    }
  }
  if (local_2c != *piVar13) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar10);
  }
  return;
}

