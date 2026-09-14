/* 00031180 | STG::FFileManager::GetPathComponents */

/* STG::FFileManager::GetPathComponents(STG::UStringBase<char, int> const&, STG::UStringBase<char,
   int>&, STG::UStringBase<char, int>&, STG::UStringBase<char, int>&, STG::UStringBase<char, int>&)
   const */

void __thiscall
STG::FFileManager::GetPathComponents
          (FFileManager *this,UStringBase *param_1,UStringBase *param_2,UStringBase *param_3,
          UStringBase *param_4,UStringBase *param_5)

{
  char *pcVar1;
  void *pvVar2;
  uint *puVar3;
  char cVar4;
  int iVar5;
  undefined1 *puVar6;
  uint uVar7;
  void *pvVar8;
  int unaff_EBX;
  uint uVar9;
  uint *puVar10;
  undefined1 *puVar11;
  int local_150;
  uint local_14c [4];
  uint *local_13c;
  uint *local_138;
  int local_130;
  uint local_12c [4];
  uint *local_11c;
  uint *local_118;
  int local_110;
  uint local_10c [4];
  uint *local_fc;
  uint *local_f8;
  int local_f0;
  undefined4 local_ec;
  int local_dc;
  undefined4 *local_d8;
  int local_d0;
  uint local_cc [4];
  uint *local_bc;
  uint *local_b8;
  int local_b0;
  uint local_ac [4];
  uint *local_9c;
  uint *local_98;
  int local_90;
  undefined4 local_8c;
  int local_7c;
  undefined4 *local_78;
  int local_70;
  uint local_6c [4];
  uint *local_5c;
  uint *local_58;
  int local_50;
  uint local_4c [4];
  uint *local_3c;
  uint *local_38;
  int local_30;
  undefined4 local_2c;
  int local_1c;
  undefined4 *local_18;
  int local_14;
  
  local_14 = 0x3118b;
  FUN_0002e044();
  local_14c[0] = local_14c[0] & 0xffffff00;
  local_14 = **(int **)(unaff_EBX + 0x6acad);
  iVar5 = *(int *)(unaff_EBX + 0x6acb1) + 8;
  local_150 = iVar5;
  local_13c = local_14c;
  local_138 = local_14c;
  NormalizePath(this,param_1,(UStringBase *)&local_150);
  local_dc = (int)&local_ec + 1;
  local_12c[0] = local_12c[0] & 0xffffff00;
  local_10c[0] = local_10c[0] & 0xffffff00;
  local_ec = CONCAT22(local_ec._2_2_,0x3a);
  local_130 = iVar5;
  local_11c = local_12c;
  local_118 = local_12c;
  local_110 = iVar5;
  local_fc = local_10c;
  local_f8 = local_10c;
  local_f0 = iVar5;
  local_d8 = &local_ec;
  cVar4 = FUN_00030b60(&local_130,&local_110);
  puVar10 = local_13c;
  puVar3 = local_138;
  local_f0 = iVar5;
  if ((local_d8 != &local_ec) && (local_d8 != (undefined4 *)0x0)) {
    if ((uint)(local_ec - (int)local_d8) < 0x81) {
      std::__node_alloc::_M_deallocate(local_d8,local_ec - (int)local_d8);
      puVar10 = local_13c;
      puVar3 = local_138;
    }
    else {
      operator_delete(local_d8);
      puVar10 = local_13c;
      puVar3 = local_138;
    }
  }
  local_13c = puVar10;
  local_138 = puVar3;
  if (cVar4 == '\0') {
    if (local_118 != local_11c) {
      *(undefined1 *)local_118 = 0;
      local_11c = local_118;
    }
    uVar9 = (int)puVar10 - (int)puVar3;
    uVar7 = (int)local_fc - (int)local_f8;
    if (uVar7 < uVar9) {
      iVar5 = 0;
      if (uVar7 != 0) {
        memmove(local_f8,puVar3,uVar7);
        iVar5 = (int)local_fc - (int)local_f8;
      }
      std::string::_M_append((string *)local_10c,(char *)((int)puVar3 + iVar5),(char *)puVar10);
    }
    else {
      if (uVar9 != 0) {
        memmove(local_f8,puVar3,uVar9);
      }
      puVar10 = (uint *)((int)local_f8 + uVar9);
      if (local_fc != puVar10) {
        *(char *)puVar10 = (char)*local_fc;
        local_fc = puVar10;
      }
    }
  }
  iVar5 = *(int *)(unaff_EBX + 0x6acb1) + 8;
  local_7c = (int)&local_8c + 1;
  local_cc[0] = local_cc[0] & 0xffffff00;
  local_ac[0] = local_ac[0] & 0xffffff00;
  local_8c = CONCAT22(local_8c._2_2_,0x2f);
  local_d0 = iVar5;
  local_bc = local_cc;
  local_b8 = local_cc;
  local_b0 = iVar5;
  local_9c = local_ac;
  local_98 = local_ac;
  local_90 = iVar5;
  local_78 = &local_8c;
  cVar4 = UStringBase<char,int>::Find_FromEnd
                    ((UStringBase<char,int> *)&local_110,(UStringBase *)&local_90,
                     (UStringBase *)&local_d0,(UStringBase *)&local_b0);
  puVar10 = local_fc;
  puVar3 = local_f8;
  local_90 = iVar5;
  if ((local_78 != &local_8c) && (local_78 != (undefined4 *)0x0)) {
    if ((uint)(local_8c - (int)local_78) < 0x81) {
      std::__node_alloc::_M_deallocate(local_78,local_8c - (int)local_78);
      puVar10 = local_fc;
      puVar3 = local_f8;
    }
    else {
      operator_delete(local_78);
      puVar10 = local_fc;
      puVar3 = local_f8;
    }
  }
  local_fc = puVar10;
  local_f8 = puVar3;
  if (cVar4 == '\0') {
    if (local_b8 != local_bc) {
      *(undefined1 *)local_b8 = 0;
      local_bc = local_b8;
    }
    uVar9 = (int)puVar10 - (int)puVar3;
    uVar7 = (int)local_9c - (int)local_98;
    if (uVar7 < uVar9) {
      iVar5 = 0;
      if (uVar7 != 0) {
        memmove(local_98,puVar3,uVar7);
        iVar5 = (int)local_9c - (int)local_98;
      }
      std::string::_M_append((string *)local_ac,(char *)((int)puVar3 + iVar5),(char *)puVar10);
    }
    else {
      if (uVar9 != 0) {
        memmove(local_98,puVar3,uVar9);
      }
      puVar10 = (uint *)((int)local_98 + uVar9);
      if (local_9c != puVar10) {
        *(char *)puVar10 = (char)*local_9c;
        local_9c = puVar10;
      }
    }
  }
  local_6c[0] = local_6c[0] & 0xffffff00;
  iVar5 = *(int *)(unaff_EBX + 0x6acb1) + 8;
  local_1c = (int)&local_2c + 1;
  local_4c[0] = local_4c[0] & 0xffffff00;
  local_2c = CONCAT22(local_2c._2_2_,0x2e);
  local_70 = iVar5;
  local_5c = local_6c;
  local_58 = local_6c;
  local_50 = iVar5;
  local_3c = local_4c;
  local_38 = local_4c;
  local_30 = iVar5;
  local_18 = &local_2c;
  cVar4 = UStringBase<char,int>::Find_FromEnd
                    ((UStringBase<char,int> *)&local_b0,(UStringBase *)&local_30,
                     (UStringBase *)&local_70,(UStringBase *)&local_50);
  puVar10 = local_9c;
  puVar3 = local_98;
  local_30 = iVar5;
  if ((local_18 != &local_2c) && (local_18 != (undefined4 *)0x0)) {
    if ((uint)(local_2c - (int)local_18) < 0x81) {
      std::__node_alloc::_M_deallocate(local_18,local_2c - (int)local_18);
      puVar10 = local_9c;
      puVar3 = local_98;
    }
    else {
      operator_delete(local_18);
      puVar10 = local_9c;
      puVar3 = local_98;
    }
  }
  local_9c = puVar10;
  local_98 = puVar3;
  if (cVar4 == '\0') {
    uVar9 = (int)puVar10 - (int)puVar3;
    uVar7 = (int)local_5c - (int)local_58;
    if (uVar7 < uVar9) {
      iVar5 = 0;
      if (uVar7 != 0) {
        memmove(local_58,puVar3,uVar7);
        iVar5 = (int)local_5c - (int)local_58;
      }
      std::string::_M_append((string *)local_6c,(char *)((int)puVar3 + iVar5),(char *)puVar10);
    }
    else {
      if (uVar9 != 0) {
        memmove(local_58,puVar3,uVar9);
      }
      puVar10 = (uint *)(uVar9 + (int)local_58);
      if (puVar10 != local_5c) {
        *(char *)puVar10 = (char)*local_5c;
        local_5c = puVar10;
      }
    }
    if (local_38 != local_3c) {
      *(undefined1 *)local_38 = 0;
      local_3c = local_38;
    }
  }
  iVar5 = UStringBase<char,int>::Trim((UStringBase<char,int> *)&local_130);
  if ((string *)(param_2 + 4) != (string *)(iVar5 + 4)) {
    pcVar1 = *(char **)(iVar5 + 0x14);
    pvVar2 = *(void **)(iVar5 + 0x18);
    uVar9 = (int)pcVar1 - (int)pvVar2;
    puVar6 = *(undefined1 **)(param_2 + 0x14);
    pvVar8 = *(void **)(param_2 + 0x18);
    uVar7 = (int)puVar6 - (int)pvVar8;
    if (uVar7 < uVar9) {
      iVar5 = 0;
      if (uVar7 != 0) {
        memmove(pvVar8,pvVar2,uVar7);
        iVar5 = *(int *)(param_2 + 0x14) - *(int *)(param_2 + 0x18);
      }
      std::string::_M_append((string *)(param_2 + 4),(char *)((int)pvVar2 + iVar5),pcVar1);
    }
    else {
      if (uVar9 != 0) {
        memmove(pvVar8,pvVar2,uVar9);
        puVar6 = *(undefined1 **)(param_2 + 0x14);
        pvVar8 = *(void **)(param_2 + 0x18);
      }
      puVar11 = (undefined1 *)(uVar9 + (int)pvVar8);
      if (puVar6 != puVar11) {
        *puVar11 = *puVar6;
        *(undefined1 **)(param_2 + 0x14) = puVar11 + (*(int *)(param_2 + 0x14) - (int)puVar6);
      }
    }
  }
  iVar5 = UStringBase<char,int>::Trim((UStringBase<char,int> *)&local_d0);
  if ((string *)(param_3 + 4) != (string *)(iVar5 + 4)) {
    pcVar1 = *(char **)(iVar5 + 0x14);
    pvVar2 = *(void **)(iVar5 + 0x18);
    uVar9 = (int)pcVar1 - (int)pvVar2;
    puVar6 = *(undefined1 **)(param_3 + 0x14);
    pvVar8 = *(void **)(param_3 + 0x18);
    uVar7 = (int)puVar6 - (int)pvVar8;
    if (uVar7 < uVar9) {
      iVar5 = 0;
      if (uVar7 != 0) {
        memmove(pvVar8,pvVar2,uVar7);
        iVar5 = *(int *)(param_3 + 0x14) - *(int *)(param_3 + 0x18);
      }
      std::string::_M_append((string *)(param_3 + 4),(char *)((int)pvVar2 + iVar5),pcVar1);
    }
    else {
      if (uVar9 != 0) {
        memmove(pvVar8,pvVar2,uVar9);
        puVar6 = *(undefined1 **)(param_3 + 0x14);
        pvVar8 = *(void **)(param_3 + 0x18);
      }
      puVar11 = (undefined1 *)(uVar9 + (int)pvVar8);
      if (puVar6 != puVar11) {
        *puVar11 = *puVar6;
        *(undefined1 **)(param_3 + 0x14) = puVar11 + (*(int *)(param_3 + 0x14) - (int)puVar6);
      }
    }
  }
  iVar5 = UStringBase<char,int>::Trim((UStringBase<char,int> *)&local_70);
  if ((string *)(param_4 + 4) != (string *)(iVar5 + 4)) {
    pcVar1 = *(char **)(iVar5 + 0x14);
    pvVar2 = *(void **)(iVar5 + 0x18);
    uVar9 = (int)pcVar1 - (int)pvVar2;
    puVar6 = *(undefined1 **)(param_4 + 0x14);
    pvVar8 = *(void **)(param_4 + 0x18);
    uVar7 = (int)puVar6 - (int)pvVar8;
    if (uVar7 < uVar9) {
      iVar5 = 0;
      if (uVar7 != 0) {
        memmove(pvVar8,pvVar2,uVar7);
        iVar5 = *(int *)(param_4 + 0x14) - *(int *)(param_4 + 0x18);
      }
      std::string::_M_append((string *)(param_4 + 4),(char *)((int)pvVar2 + iVar5),pcVar1);
    }
    else {
      if (uVar9 != 0) {
        memmove(pvVar8,pvVar2,uVar9);
        puVar6 = *(undefined1 **)(param_4 + 0x14);
        pvVar8 = *(void **)(param_4 + 0x18);
      }
      puVar11 = (undefined1 *)(uVar9 + (int)pvVar8);
      if (puVar11 != puVar6) {
        *puVar11 = *puVar6;
        *(undefined1 **)(param_4 + 0x14) = puVar11 + (*(int *)(param_4 + 0x14) - (int)puVar6);
      }
    }
  }
  iVar5 = UStringBase<char,int>::Trim((UStringBase<char,int> *)&local_50);
  if ((string *)(param_5 + 4) != (string *)(iVar5 + 4)) {
    pcVar1 = *(char **)(iVar5 + 0x14);
    pvVar2 = *(void **)(iVar5 + 0x18);
    uVar9 = (int)pcVar1 - (int)pvVar2;
    puVar6 = *(undefined1 **)(param_5 + 0x14);
    pvVar8 = *(void **)(param_5 + 0x18);
    uVar7 = (int)puVar6 - (int)pvVar8;
    if (uVar7 < uVar9) {
      iVar5 = 0;
      if (uVar7 != 0) {
        memmove(pvVar8,pvVar2,uVar7);
        iVar5 = *(int *)(param_5 + 0x14) - *(int *)(param_5 + 0x18);
      }
      std::string::_M_append((string *)(param_5 + 4),(char *)((int)pvVar2 + iVar5),pcVar1);
    }
    else {
      if (uVar9 != 0) {
        memmove(pvVar8,pvVar2,uVar9);
        puVar6 = *(undefined1 **)(param_5 + 0x14);
        pvVar8 = *(void **)(param_5 + 0x18);
      }
      puVar11 = (undefined1 *)(uVar9 + (int)pvVar8);
      if (puVar6 != puVar11) {
        *puVar11 = *puVar6;
        *(undefined1 **)(param_5 + 0x14) = puVar11 + (*(int *)(param_5 + 0x14) - (int)puVar6);
      }
    }
  }
  local_50 = *(int *)(unaff_EBX + 0x6acb1) + 8;
  if ((local_38 != local_4c) && (local_38 != (uint *)0x0)) {
    if (local_4c[0] - (int)local_38 < 0x81) {
      std::__node_alloc::_M_deallocate(local_38,local_4c[0] - (int)local_38);
    }
    else {
      operator_delete(local_38);
    }
  }
  local_70 = *(int *)(unaff_EBX + 0x6acb1) + 8;
  if ((local_58 != local_6c) && (local_58 != (uint *)0x0)) {
    if (local_6c[0] - (int)local_58 < 0x81) {
      std::__node_alloc::_M_deallocate(local_58,local_6c[0] - (int)local_58);
    }
    else {
      operator_delete(local_58);
    }
  }
  local_b0 = *(int *)(unaff_EBX + 0x6acb1) + 8;
  if ((local_98 != local_ac) && (local_98 != (uint *)0x0)) {
    if (local_ac[0] - (int)local_98 < 0x81) {
      std::__node_alloc::_M_deallocate(local_98,local_ac[0] - (int)local_98);
    }
    else {
      operator_delete(local_98);
    }
  }
  local_d0 = *(int *)(unaff_EBX + 0x6acb1) + 8;
  if ((local_b8 != local_cc) && (local_b8 != (uint *)0x0)) {
    if (local_cc[0] - (int)local_b8 < 0x81) {
      std::__node_alloc::_M_deallocate(local_b8,local_cc[0] - (int)local_b8);
    }
    else {
      operator_delete(local_b8);
    }
  }
  local_110 = *(int *)(unaff_EBX + 0x6acb1) + 8;
  if ((local_f8 != local_10c) && (local_f8 != (uint *)0x0)) {
    if (local_10c[0] - (int)local_f8 < 0x81) {
      std::__node_alloc::_M_deallocate(local_f8,local_10c[0] - (int)local_f8);
    }
    else {
      operator_delete(local_f8);
    }
  }
  local_130 = *(int *)(unaff_EBX + 0x6acb1) + 8;
  if ((local_118 != local_12c) && (local_118 != (uint *)0x0)) {
    if (local_12c[0] - (int)local_118 < 0x81) {
      std::__node_alloc::_M_deallocate(local_118,local_12c[0] - (int)local_118);
    }
    else {
      operator_delete(local_118);
    }
  }
  local_150 = *(int *)(unaff_EBX + 0x6acb1) + 8;
  if ((local_138 != local_14c) && (local_138 != (uint *)0x0)) {
    if (local_14c[0] - (int)local_138 < 0x81) {
      std::__node_alloc::_M_deallocate(local_138,local_14c[0] - (int)local_138);
    }
    else {
      operator_delete(local_138);
    }
  }
  if (local_14 != **(int **)(unaff_EBX + 0x6acad)) {
                    /* WARNING: Subroutine does not return */
    FUN_0002e000();
  }
  return;
}

