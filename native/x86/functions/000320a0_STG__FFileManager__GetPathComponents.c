/* 000320a0 | STG::FFileManager::GetPathComponents */

/* STG::FFileManager::GetPathComponents(STG::UStringBase<char, int> const&, STG::UStringBase<char,
   int>&, STG::UStringBase<char, int>&) const */

void __thiscall
STG::FFileManager::GetPathComponents
          (FFileManager *this,UStringBase *param_1,UStringBase *param_2,UStringBase *param_3)

{
  int iVar1;
  uint *puVar2;
  uint *puVar3;
  undefined1 **ppuVar4;
  undefined1 **ppuVar5;
  string *psVar6;
  string *psVar7;
  void *pvVar8;
  undefined1 *puVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  undefined1 *puVar13;
  int unaff_EBX;
  size_t sVar14;
  uint local_120 [4];
  int local_110;
  uint local_10c [4];
  uint *local_fc;
  uint *local_f8;
  int local_f0;
  uint local_ec [4];
  uint *local_dc;
  uint *local_d8;
  int local_d0;
  uint local_cc [4];
  uint *local_bc;
  uint *local_b8;
  int local_b0;
  uint local_ac [4];
  uint *local_9c;
  uint *local_98;
  int local_90;
  undefined1 *local_8c [4];
  undefined1 **local_7c;
  undefined1 **local_78;
  int local_70;
  string *local_6c [4];
  string *local_5c;
  string *local_58;
  int local_50;
  undefined1 *local_4c [4];
  undefined1 **local_3c;
  undefined1 **local_38;
  int local_30;
  string *local_2c [4];
  string *local_1c;
  string *local_18;
  int local_14;
  
  local_14 = 0x320ab;
  FUN_0002e044();
  iVar1 = *(int *)(unaff_EBX + 0x69d91);
  local_10c[0] = local_10c[0] & 0xffffff00;
  local_ec[0] = local_ec[0] & 0xffffff00;
  local_14 = **(int **)(unaff_EBX + 0x69d8d);
  iVar10 = iVar1 + 8;
  local_cc[0] = local_cc[0] & 0xffffff00;
  local_ac[0] = local_ac[0] & 0xffffff00;
  local_110 = iVar10;
  local_fc = local_10c;
  local_f8 = local_10c;
  local_f0 = iVar10;
  local_dc = local_ec;
  local_d8 = local_ec;
  local_d0 = iVar10;
  local_bc = local_cc;
  local_b8 = local_cc;
  local_b0 = iVar10;
  local_9c = local_ac;
  local_98 = local_ac;
  GetPathComponents(this,param_1,(UStringBase *)&local_110,(UStringBase *)&local_f0,
                    (UStringBase *)&local_d0,(UStringBase *)&local_b0);
  puVar3 = local_f8;
  puVar2 = local_fc;
  sVar14 = (int)local_fc - (int)local_f8;
  uVar11 = sVar14 + 1;
  local_90 = iVar10;
  local_7c = local_8c;
  local_78 = local_8c;
  if (uVar11 != 0) {
    if (0x10 < uVar11) {
      local_120[0] = uVar11;
      if (uVar11 < 0x81) {
        local_78 = (undefined1 **)std::__node_alloc::_M_allocate(local_120);
      }
      else {
        local_78 = operator_new(uVar11);
      }
      local_8c[0] = (undefined1 *)(local_120[0] + (int)local_78);
    }
    local_7c = local_78;
    if (puVar2 != puVar3) {
      pvVar8 = memcpy(local_78,puVar3,sVar14);
      local_7c = (undefined1 **)((int)pvVar8 + sVar14);
    }
    *(undefined1 *)local_7c = 0;
    std::string::_M_append
              ((string *)local_8c,(char *)(unaff_EBX + 0x5526e),(char *)(unaff_EBX + 0x5526f));
    ppuVar5 = local_78;
    ppuVar4 = local_7c;
    local_70 = iVar1 + 8;
    sVar14 = (int)local_7c - (int)local_78;
    uVar11 = sVar14 + 1;
    local_5c = (string *)local_6c;
    local_58 = (string *)local_6c;
    if (uVar11 != 0) {
      if (0x10 < uVar11) {
        local_120[0] = uVar11;
        if (uVar11 < 0x81) {
          local_5c = (string *)std::__node_alloc::_M_allocate(local_120);
        }
        else {
          local_5c = operator_new(uVar11);
        }
        local_6c[0] = local_5c + local_120[0];
      }
      local_58 = local_5c;
      if (ppuVar4 != ppuVar5) {
        pvVar8 = memcpy(local_5c,ppuVar5,sVar14);
        local_5c = (string *)((int)pvVar8 + sVar14);
      }
      puVar2 = local_d8;
      *local_5c = (string)0x0;
      sVar14 = strlen((char *)local_d8);
      std::string::_M_append((string *)local_6c,(char *)puVar2,(char *)((int)puVar2 + sVar14));
      psVar7 = local_58;
      psVar6 = local_5c;
      uVar11 = (int)local_5c - (int)local_58;
      puVar9 = *(undefined1 **)(param_2 + 0x14);
      pvVar8 = *(void **)(param_2 + 0x18);
      uVar12 = (int)puVar9 - (int)pvVar8;
      if (uVar12 < uVar11) {
        iVar10 = 0;
        if (uVar12 != 0) {
          memmove(pvVar8,local_58,uVar12);
          iVar10 = *(int *)(param_2 + 0x14) - *(int *)(param_2 + 0x18);
        }
        std::string::_M_append((string *)(param_2 + 4),(char *)(psVar7 + iVar10),(char *)psVar6);
      }
      else {
        if (uVar11 != 0) {
          memmove(pvVar8,local_58,uVar11);
          puVar9 = *(undefined1 **)(param_2 + 0x14);
          pvVar8 = *(void **)(param_2 + 0x18);
        }
        puVar13 = (undefined1 *)(uVar11 + (int)pvVar8);
        if (puVar13 != puVar9) {
          *puVar13 = *puVar9;
          *(undefined1 **)(param_2 + 0x14) = puVar13 + (*(int *)(param_2 + 0x14) - (int)puVar9);
        }
      }
      local_70 = iVar1 + 8;
      if ((local_58 != (string *)local_6c) && (local_58 != (string *)0x0)) {
        if ((uint)((int)local_6c[0] - (int)local_58) < 0x81) {
          std::__node_alloc::_M_deallocate(local_58,(int)local_6c[0] - (int)local_58);
        }
        else {
          operator_delete(local_58);
        }
      }
      local_90 = iVar1 + 8;
      if ((local_78 != local_8c) && (local_78 != (undefined1 **)0x0)) {
        if ((uint)((int)local_8c[0] - (int)local_78) < 0x81) {
          std::__node_alloc::_M_deallocate(local_78,(int)local_8c[0] - (int)local_78);
        }
        else {
          operator_delete(local_78);
        }
      }
      puVar3 = local_b8;
      puVar2 = local_bc;
      sVar14 = (int)local_bc - (int)local_b8;
      uVar11 = sVar14 + 1;
      local_50 = iVar1 + 8;
      local_3c = local_4c;
      local_38 = local_4c;
      if (uVar11 != 0) {
        if (0x10 < uVar11) {
          local_120[0] = uVar11;
          if (uVar11 < 0x81) {
            local_38 = (undefined1 **)std::__node_alloc::_M_allocate(local_120);
          }
          else {
            local_38 = operator_new(uVar11);
          }
          local_4c[0] = (undefined1 *)(local_120[0] + (int)local_38);
        }
        local_3c = local_38;
        if (puVar2 != puVar3) {
          pvVar8 = memcpy(local_38,puVar3,sVar14);
          local_3c = (undefined1 **)((int)pvVar8 + sVar14);
        }
        *(undefined1 *)local_3c = 0;
        std::string::_M_append
                  ((string *)local_4c,(char *)(unaff_EBX + 0x55270),(char *)(unaff_EBX + 0x55271));
        ppuVar5 = local_38;
        ppuVar4 = local_3c;
        local_30 = iVar1 + 8;
        sVar14 = (int)local_3c - (int)local_38;
        uVar11 = sVar14 + 1;
        local_1c = (string *)local_2c;
        local_18 = (string *)local_2c;
        if (uVar11 != 0) {
          if (0x10 < uVar11) {
            local_120[0] = uVar11;
            if (uVar11 < 0x81) {
              local_1c = (string *)std::__node_alloc::_M_allocate(local_120);
            }
            else {
              local_1c = operator_new(uVar11);
            }
            local_2c[0] = local_1c + local_120[0];
          }
          local_18 = local_1c;
          if (ppuVar4 != ppuVar5) {
            pvVar8 = memcpy(local_1c,ppuVar5,sVar14);
            local_1c = (string *)((int)pvVar8 + sVar14);
          }
          puVar2 = local_98;
          *local_1c = (string)0x0;
          sVar14 = strlen((char *)local_98);
          std::string::_M_append((string *)local_2c,(char *)puVar2,(char *)((int)puVar2 + sVar14));
          psVar7 = local_18;
          psVar6 = local_1c;
          uVar11 = (int)local_1c - (int)local_18;
          puVar9 = *(undefined1 **)(param_3 + 0x14);
          pvVar8 = *(void **)(param_3 + 0x18);
          uVar12 = (int)puVar9 - (int)pvVar8;
          if (uVar12 < uVar11) {
            iVar10 = 0;
            if (uVar12 != 0) {
              memmove(pvVar8,local_18,uVar12);
              iVar10 = *(int *)(param_3 + 0x14) - *(int *)(param_3 + 0x18);
            }
            std::string::_M_append((string *)(param_3 + 4),(char *)(psVar7 + iVar10),(char *)psVar6)
            ;
          }
          else {
            if (uVar11 != 0) {
              memmove(pvVar8,local_18,uVar11);
              puVar9 = *(undefined1 **)(param_3 + 0x14);
              pvVar8 = *(void **)(param_3 + 0x18);
            }
            puVar13 = (undefined1 *)(uVar11 + (int)pvVar8);
            if (puVar9 != puVar13) {
              *puVar13 = *puVar9;
              *(undefined1 **)(param_3 + 0x14) = puVar13 + (*(int *)(param_3 + 0x14) - (int)puVar9);
            }
          }
          local_30 = iVar1 + 8;
          if ((local_18 != (string *)local_2c) && (local_18 != (string *)0x0)) {
            if ((uint)((int)local_2c[0] - (int)local_18) < 0x81) {
              std::__node_alloc::_M_deallocate(local_18,(int)local_2c[0] - (int)local_18);
            }
            else {
              operator_delete(local_18);
            }
          }
          local_50 = iVar1 + 8;
          if ((local_38 != local_4c) && (local_38 != (undefined1 **)0x0)) {
            if ((uint)((int)local_4c[0] - (int)local_38) < 0x81) {
              std::__node_alloc::_M_deallocate(local_38,(int)local_4c[0] - (int)local_38);
            }
            else {
              operator_delete(local_38);
            }
          }
          local_b0 = iVar1 + 8;
          if ((local_98 != local_ac) && (local_98 != (uint *)0x0)) {
            if (local_ac[0] - (int)local_98 < 0x81) {
              std::__node_alloc::_M_deallocate(local_98,local_ac[0] - (int)local_98);
            }
            else {
              operator_delete(local_98);
            }
          }
          local_d0 = iVar1 + 8;
          if ((local_b8 != local_cc) && (local_b8 != (uint *)0x0)) {
            if (local_cc[0] - (int)local_b8 < 0x81) {
              std::__node_alloc::_M_deallocate(local_b8,local_cc[0] - (int)local_b8);
            }
            else {
              operator_delete(local_b8);
            }
          }
          local_f0 = iVar1 + 8;
          if ((local_d8 != local_ec) && (local_d8 != (uint *)0x0)) {
            if (local_ec[0] - (int)local_d8 < 0x81) {
              std::__node_alloc::_M_deallocate(local_d8,local_ec[0] - (int)local_d8);
            }
            else {
              operator_delete(local_d8);
            }
          }
          local_110 = iVar1 + 8;
          if ((local_f8 != local_10c) && (local_f8 != (uint *)0x0)) {
            if (local_10c[0] - (int)local_f8 < 0x81) {
              std::__node_alloc::_M_deallocate(local_f8,local_10c[0] - (int)local_f8);
            }
            else {
              operator_delete(local_f8);
            }
          }
          if (local_14 == **(int **)(unaff_EBX + 0x69d8d)) {
            return;
          }
                    /* WARNING: Subroutine does not return */
          FUN_0002e000();
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  std::__stl_throw_length_error((char *)(unaff_EBX + 0x55261));
}

