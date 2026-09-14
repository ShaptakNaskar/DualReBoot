/* 000329b0 | STG::FFileManager::GetPathComponents */

/* STG::FFileManager::GetPathComponents(STG::UStringBase<char, int> const&, STG::UStringBase<char,
   int>&, STG::UStringBase<char, int>&, STG::UStringBase<char, int>&) const */

void __thiscall
STG::FFileManager::GetPathComponents
          (FFileManager *this,UStringBase *param_1,UStringBase *param_2,UStringBase *param_3,
          UStringBase *param_4)

{
  uint *puVar1;
  uint *puVar2;
  undefined1 **ppuVar3;
  undefined1 **__src;
  string *psVar4;
  string *psVar5;
  void *pvVar6;
  undefined1 *puVar7;
  int iVar8;
  uint uVar9;
  int unaff_EBX;
  size_t sVar10;
  uint uVar11;
  undefined1 *puVar12;
  uint local_e0 [4];
  int local_d0;
  uint local_cc [4];
  uint *local_bc;
  uint *local_b8;
  int local_b0;
  uint local_ac [4];
  uint *local_9c;
  uint *local_98;
  int local_90;
  uint local_8c [4];
  uint *local_7c;
  uint *local_78;
  int local_70;
  uint local_6c [4];
  uint *local_5c;
  uint *local_58;
  int local_50;
  undefined1 *local_4c [4];
  undefined1 **local_3c;
  undefined1 **local_38;
  int local_30;
  string *local_2c [4];
  string *local_1c;
  string *local_18;
  int local_14;
  
  local_14 = 0x329bb;
  FUN_0002e044();
  local_cc[0] = local_cc[0] & 0xffffff00;
  local_ac[0] = local_ac[0] & 0xffffff00;
  local_14 = **(int **)(unaff_EBX + 0x6947d);
  iVar8 = *(int *)(unaff_EBX + 0x69481) + 8;
  local_8c[0] = local_8c[0] & 0xffffff00;
  local_6c[0] = local_6c[0] & 0xffffff00;
  local_d0 = iVar8;
  local_bc = local_cc;
  local_b8 = local_cc;
  local_b0 = iVar8;
  local_9c = local_ac;
  local_98 = local_ac;
  local_90 = iVar8;
  local_7c = local_8c;
  local_78 = local_8c;
  local_70 = iVar8;
  local_5c = local_6c;
  local_58 = local_6c;
  GetPathComponents(this,param_1,(UStringBase *)&local_d0,(UStringBase *)&local_b0,
                    (UStringBase *)&local_90,(UStringBase *)&local_70);
  puVar2 = local_b8;
  puVar1 = local_bc;
  sVar10 = (int)local_bc - (int)local_b8;
  uVar9 = sVar10 + 1;
  local_50 = iVar8;
  local_3c = local_4c;
  local_38 = local_4c;
  if (uVar9 != 0) {
    if (0x10 < uVar9) {
      local_e0[0] = uVar9;
      if (uVar9 < 0x81) {
        local_38 = (undefined1 **)std::__node_alloc::_M_allocate(local_e0);
      }
      else {
        local_38 = operator_new(uVar9);
      }
      local_4c[0] = (undefined1 *)(local_e0[0] + (int)local_38);
    }
    local_3c = local_38;
    if (puVar1 != puVar2) {
      pvVar6 = memcpy(local_38,puVar2,sVar10);
      local_3c = (undefined1 **)((int)pvVar6 + sVar10);
    }
    *(undefined1 *)local_3c = 0;
    std::string::_M_append
              ((string *)local_4c,(char *)(unaff_EBX + 0x5495e),(char *)(unaff_EBX + 0x5495f));
    __src = local_38;
    ppuVar3 = local_3c;
    local_30 = *(int *)(unaff_EBX + 0x69481) + 8;
    sVar10 = (int)local_3c - (int)local_38;
    uVar9 = sVar10 + 1;
    local_1c = (string *)local_2c;
    local_18 = (string *)local_2c;
    if (uVar9 != 0) {
      if (0x10 < uVar9) {
        local_e0[0] = uVar9;
        if (uVar9 < 0x81) {
          local_1c = (string *)std::__node_alloc::_M_allocate(local_e0);
        }
        else {
          local_1c = operator_new(uVar9);
        }
        local_2c[0] = local_1c + local_e0[0];
      }
      local_18 = local_1c;
      if (ppuVar3 != __src) {
        pvVar6 = memcpy(local_1c,__src,sVar10);
        local_1c = (string *)((int)pvVar6 + sVar10);
      }
      puVar1 = local_98;
      *local_1c = (string)0x0;
      sVar10 = strlen((char *)local_98);
      std::string::_M_append((string *)local_2c,(char *)puVar1,(char *)((int)puVar1 + sVar10));
      psVar5 = local_18;
      psVar4 = local_1c;
      uVar11 = (int)local_1c - (int)local_18;
      puVar7 = *(undefined1 **)(param_2 + 0x14);
      pvVar6 = *(void **)(param_2 + 0x18);
      uVar9 = (int)puVar7 - (int)pvVar6;
      if (uVar9 < uVar11) {
        iVar8 = 0;
        if (uVar9 != 0) {
          memmove(pvVar6,local_18,uVar9);
          iVar8 = *(int *)(param_2 + 0x14) - *(int *)(param_2 + 0x18);
        }
        std::string::_M_append((string *)(param_2 + 4),(char *)(psVar5 + iVar8),(char *)psVar4);
      }
      else {
        if (uVar11 != 0) {
          memmove(pvVar6,local_18,uVar11);
          puVar7 = *(undefined1 **)(param_2 + 0x14);
          pvVar6 = *(void **)(param_2 + 0x18);
        }
        puVar12 = (undefined1 *)(uVar11 + (int)pvVar6);
        if (puVar12 != puVar7) {
          *puVar12 = *puVar7;
          *(undefined1 **)(param_2 + 0x14) = puVar12 + (*(int *)(param_2 + 0x14) - (int)puVar7);
        }
      }
      local_30 = *(int *)(unaff_EBX + 0x69481) + 8;
      if ((local_18 != (string *)local_2c) && (local_18 != (string *)0x0)) {
        if ((uint)((int)local_2c[0] - (int)local_18) < 0x81) {
          std::__node_alloc::_M_deallocate(local_18,(int)local_2c[0] - (int)local_18);
        }
        else {
          operator_delete(local_18);
        }
      }
      local_50 = *(int *)(unaff_EBX + 0x69481) + 8;
      if ((local_38 != local_4c) && (local_38 != (undefined1 **)0x0)) {
        if ((uint)((int)local_4c[0] - (int)local_38) < 0x81) {
          std::__node_alloc::_M_deallocate(local_38,(int)local_4c[0] - (int)local_38);
        }
        else {
          operator_delete(local_38);
        }
      }
      puVar2 = local_78;
      puVar1 = local_7c;
      uVar11 = (int)local_7c - (int)local_78;
      puVar7 = *(undefined1 **)(param_3 + 0x14);
      pvVar6 = *(void **)(param_3 + 0x18);
      uVar9 = (int)puVar7 - (int)pvVar6;
      if (uVar9 < uVar11) {
        iVar8 = 0;
        if (uVar9 != 0) {
          memmove(pvVar6,local_78,uVar9);
          iVar8 = *(int *)(param_3 + 0x14) - *(int *)(param_3 + 0x18);
        }
        std::string::_M_append((string *)(param_3 + 4),(char *)((int)puVar2 + iVar8),(char *)puVar1)
        ;
      }
      else {
        if (uVar11 != 0) {
          memmove(pvVar6,local_78,uVar11);
          puVar7 = *(undefined1 **)(param_3 + 0x14);
          pvVar6 = *(void **)(param_3 + 0x18);
        }
        puVar12 = (undefined1 *)(uVar11 + (int)pvVar6);
        if (puVar12 != puVar7) {
          *puVar12 = *puVar7;
          *(undefined1 **)(param_3 + 0x14) = puVar12 + (*(int *)(param_3 + 0x14) - (int)puVar7);
        }
      }
      puVar2 = local_58;
      puVar1 = local_5c;
      uVar11 = (int)local_5c - (int)local_58;
      puVar7 = *(undefined1 **)(param_4 + 0x14);
      pvVar6 = *(void **)(param_4 + 0x18);
      uVar9 = (int)puVar7 - (int)pvVar6;
      if (uVar9 < uVar11) {
        iVar8 = 0;
        if (uVar9 != 0) {
          memmove(pvVar6,local_58,uVar9);
          iVar8 = *(int *)(param_4 + 0x14) - *(int *)(param_4 + 0x18);
        }
        std::string::_M_append((string *)(param_4 + 4),(char *)((int)puVar2 + iVar8),(char *)puVar1)
        ;
      }
      else {
        if (uVar11 != 0) {
          memmove(pvVar6,local_58,uVar11);
          puVar7 = *(undefined1 **)(param_4 + 0x14);
          pvVar6 = *(void **)(param_4 + 0x18);
        }
        puVar12 = (undefined1 *)(uVar11 + (int)pvVar6);
        if (puVar12 != puVar7) {
          *puVar12 = *puVar7;
          *(undefined1 **)(param_4 + 0x14) = puVar12 + (*(int *)(param_4 + 0x14) - (int)puVar7);
        }
      }
      local_70 = *(int *)(unaff_EBX + 0x69481) + 8;
      if ((local_58 != local_6c) && (local_58 != (uint *)0x0)) {
        if (local_6c[0] - (int)local_58 < 0x81) {
          std::__node_alloc::_M_deallocate(local_58,local_6c[0] - (int)local_58);
        }
        else {
          operator_delete(local_58);
        }
      }
      local_90 = *(int *)(unaff_EBX + 0x69481) + 8;
      if ((local_78 != local_8c) && (local_78 != (uint *)0x0)) {
        if (local_8c[0] - (int)local_78 < 0x81) {
          std::__node_alloc::_M_deallocate(local_78,local_8c[0] - (int)local_78);
        }
        else {
          operator_delete(local_78);
        }
      }
      local_b0 = *(int *)(unaff_EBX + 0x69481) + 8;
      if ((local_98 != local_ac) && (local_98 != (uint *)0x0)) {
        if (local_ac[0] - (int)local_98 < 0x81) {
          std::__node_alloc::_M_deallocate(local_98,local_ac[0] - (int)local_98);
        }
        else {
          operator_delete(local_98);
        }
      }
      local_d0 = *(int *)(unaff_EBX + 0x69481) + 8;
      if ((local_b8 != local_cc) && (local_b8 != (uint *)0x0)) {
        if (local_cc[0] - (int)local_b8 < 0x81) {
          std::__node_alloc::_M_deallocate(local_b8,local_cc[0] - (int)local_b8);
        }
        else {
          operator_delete(local_b8);
        }
      }
      if (local_14 == **(int **)(unaff_EBX + 0x6947d)) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_0002e000();
    }
  }
                    /* WARNING: Subroutine does not return */
  std::__stl_throw_length_error((char *)(unaff_EBX + 0x54951));
}

