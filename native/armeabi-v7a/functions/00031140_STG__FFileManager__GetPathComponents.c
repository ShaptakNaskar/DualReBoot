/* 00031140 | STG::FFileManager::GetPathComponents */

/* STG::FFileManager::GetPathComponents(STG::UStringBase<char, int> const&, STG::UStringBase<char,
   int>&, STG::UStringBase<char, int>&, STG::UStringBase<char, int>&, STG::UStringBase<char, int>&)
   const */

void __thiscall
STG::FFileManager::GetPathComponents
          (FFileManager *this,UStringBase *param_1,UStringBase *param_2,UStringBase *param_3,
          UStringBase *param_4,UStringBase *param_5)

{
  uint *puVar1;
  uint *puVar2;
  int iVar3;
  void *pvVar4;
  size_t sVar5;
  undefined1 *puVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  void *pvVar10;
  char *pcVar11;
  int *piVar12;
  int local_144;
  uint local_140 [4];
  uint *local_130;
  uint *local_12c;
  int local_128;
  uint local_124 [4];
  uint *local_114;
  uint *local_110;
  int local_10c;
  uint local_108 [4];
  uint *local_f8;
  uint *local_f4;
  int local_f0;
  undefined4 local_ec;
  int local_dc;
  undefined4 *local_d8;
  int local_d4;
  uint local_d0 [4];
  uint *local_c0;
  uint *local_bc;
  int local_b8;
  uint local_b4 [4];
  uint *local_a4;
  uint *local_a0;
  int local_9c;
  undefined4 local_98;
  int local_88;
  undefined4 *local_84;
  int local_80;
  uint local_7c [4];
  uint *local_6c;
  uint *local_68;
  int local_64;
  uint local_60 [4];
  uint *local_50;
  uint *local_4c;
  int local_48;
  undefined4 local_44;
  int local_34;
  undefined4 *local_30;
  int local_2c;
  
  piVar12 = *(int **)(DAT_00031ad8 + 0x31150);
  local_2c = *piVar12;
  iVar7 = *(int *)(DAT_00031adc + 0x31170);
  iVar8 = iVar7 + 8;
  local_130 = local_140;
  local_140[0] = local_140[0] & 0xffffff00;
  local_144 = iVar8;
  local_12c = local_130;
  NormalizePath(this,param_1,(UStringBase *)&local_144);
  local_114 = local_124;
  local_124[0] = local_124[0] & 0xffffff00;
  local_f8 = local_108;
  local_108[0] = local_108[0] & 0xffffff00;
  local_dc = (int)&local_ec + 1;
  local_ec = CONCAT22(local_ec._2_2_,0x3a);
  local_128 = iVar8;
  local_110 = local_114;
  local_10c = iVar8;
  local_f4 = local_f8;
  local_f0 = iVar8;
  local_d8 = &local_ec;
  iVar3 = FUN_00030bfc((UStringBase *)&local_144,&local_f0,(UStringBase<char,int> *)&local_128,
                       (UStringBase<char,int> *)&local_10c);
  puVar1 = local_130;
  puVar2 = local_12c;
  local_f0 = iVar8;
  if ((local_d8 != &local_ec) && (local_d8 != (undefined4 *)0x0)) {
    if ((uint)(local_ec - (int)local_d8) < 0x81) {
      std::__node_alloc::_M_deallocate(local_d8,local_ec - (int)local_d8);
      puVar1 = local_130;
      puVar2 = local_12c;
    }
    else {
      operator_delete(local_d8);
      puVar1 = local_130;
      puVar2 = local_12c;
    }
  }
  local_130 = puVar1;
  local_12c = puVar2;
  if (iVar3 == 0) {
    if (local_110 != local_114) {
      *(undefined1 *)local_110 = 0;
      local_114 = local_110;
    }
    uVar9 = (int)puVar1 - (int)puVar2;
    sVar5 = (int)local_f8 - (int)local_f4;
    if (sVar5 < uVar9) {
      iVar3 = 0;
      if (sVar5 != 0) {
        memmove(local_f4,puVar2,sVar5);
        iVar3 = (int)local_f8 - (int)local_f4;
      }
      std::string::_M_append((string *)local_108,(char *)((int)puVar2 + iVar3),(char *)puVar1);
    }
    else {
      if (uVar9 != 0) {
        memmove(local_f4,puVar2,uVar9);
      }
      if ((uint *)((int)local_f4 + uVar9) != local_f8) {
        *(char *)((int)local_f4 + uVar9) = (char)*local_f8;
        local_f8 = (uint *)((int)local_f4 + uVar9);
      }
    }
  }
  iVar8 = iVar7 + 8;
  local_d0[0] = local_d0[0] & 0xffffff00;
  local_b4[0] = local_b4[0] & 0xffffff00;
  local_c0 = local_d0;
  local_a4 = local_b4;
  local_98 = (uint)local_98._2_2_ << 0x10;
  local_98 = CONCAT31(local_98._1_3_,0x2f);
  local_88 = (int)&local_98 + 1;
  local_d4 = iVar8;
  local_bc = local_c0;
  local_b8 = iVar8;
  local_a0 = local_a4;
  local_9c = iVar8;
  local_84 = &local_98;
  iVar3 = UStringBase<char,int>::Find_FromEnd
                    ((UStringBase<char,int> *)&local_10c,(UStringBase *)&local_9c,
                     (UStringBase *)&local_d4,(UStringBase *)&local_b8);
  puVar1 = local_f8;
  puVar2 = local_f4;
  local_9c = iVar8;
  if ((local_84 != &local_98) && (local_84 != (undefined4 *)0x0)) {
    if ((uint)(local_98 - (int)local_84) < 0x81) {
      std::__node_alloc::_M_deallocate(local_84,local_98 - (int)local_84);
      puVar1 = local_f8;
      puVar2 = local_f4;
    }
    else {
      operator_delete(local_84);
      puVar1 = local_f8;
      puVar2 = local_f4;
    }
  }
  local_f8 = puVar1;
  local_f4 = puVar2;
  if (iVar3 == 0) {
    if (local_bc != local_c0) {
      *(undefined1 *)local_bc = 0;
      local_c0 = local_bc;
    }
    uVar9 = (int)puVar1 - (int)puVar2;
    sVar5 = (int)local_a4 - (int)local_a0;
    if (sVar5 < uVar9) {
      iVar3 = 0;
      if (sVar5 != 0) {
        memmove(local_a0,puVar2,sVar5);
        iVar3 = (int)local_a4 - (int)local_a0;
      }
      std::string::_M_append((string *)local_b4,(char *)((int)puVar2 + iVar3),(char *)puVar1);
    }
    else {
      if (uVar9 != 0) {
        memmove(local_a0,puVar2,uVar9);
      }
      if ((uint *)((int)local_a0 + uVar9) != local_a4) {
        *(char *)((int)local_a0 + uVar9) = (char)*local_a4;
        local_a4 = (uint *)((int)local_a0 + uVar9);
      }
    }
  }
  iVar8 = iVar7 + 8;
  local_6c = local_7c;
  local_50 = local_60;
  local_34 = (int)&local_44 + 1;
  local_7c[0] = local_7c[0] & 0xffffff00;
  local_60[0] = local_60[0] & 0xffffff00;
  local_44 = CONCAT22(local_44._2_2_,0x2e);
  local_80 = iVar8;
  local_68 = local_6c;
  local_64 = iVar8;
  local_4c = local_50;
  local_48 = iVar8;
  local_30 = &local_44;
  iVar3 = UStringBase<char,int>::Find_FromEnd
                    ((UStringBase<char,int> *)&local_b8,(UStringBase *)&local_48,
                     (UStringBase *)&local_80,(UStringBase *)&local_64);
  puVar1 = local_a4;
  puVar2 = local_a0;
  local_48 = iVar8;
  if ((local_30 != &local_44) && (local_30 != (undefined4 *)0x0)) {
    if ((uint)(local_44 - (int)local_30) < 0x81) {
      std::__node_alloc::_M_deallocate(local_30,local_44 - (int)local_30);
      puVar1 = local_a4;
      puVar2 = local_a0;
    }
    else {
      operator_delete(local_30);
      puVar1 = local_a4;
      puVar2 = local_a0;
    }
  }
  local_a4 = puVar1;
  local_a0 = puVar2;
  if (iVar3 == 0) {
    uVar9 = (int)puVar1 - (int)puVar2;
    sVar5 = (int)local_6c - (int)local_68;
    if (sVar5 < uVar9) {
      iVar3 = 0;
      if (sVar5 != 0) {
        memmove(local_68,puVar2,sVar5);
        iVar3 = (int)local_6c - (int)local_68;
      }
      std::string::_M_append((string *)local_7c,(char *)((int)puVar2 + iVar3),(char *)puVar1);
    }
    else {
      if (uVar9 != 0) {
        memmove(local_68,puVar2,uVar9);
      }
      if ((uint *)((int)local_68 + uVar9) != local_6c) {
        *(char *)((int)local_68 + uVar9) = (char)*local_6c;
        local_6c = (uint *)((int)local_68 + uVar9);
      }
    }
    if (local_4c != local_50) {
      *(undefined1 *)local_4c = 0;
      local_50 = local_4c;
    }
  }
  iVar3 = UStringBase<char,int>::Trim((UStringBase<char,int> *)&local_128);
  if ((string *)(param_2 + 4) != (string *)(iVar3 + 4)) {
    pvVar10 = *(void **)(iVar3 + 0x18);
    pcVar11 = *(char **)(iVar3 + 0x14);
    puVar6 = *(undefined1 **)(param_2 + 0x14);
    pvVar4 = *(void **)(param_2 + 0x18);
    uVar9 = (int)pcVar11 - (int)pvVar10;
    sVar5 = (int)puVar6 - (int)pvVar4;
    if (sVar5 < uVar9) {
      iVar3 = 0;
      if (sVar5 != 0) {
        memmove(pvVar4,pvVar10,sVar5);
        iVar3 = *(int *)(param_2 + 0x14) - *(int *)(param_2 + 0x18);
      }
      std::string::_M_append((string *)(param_2 + 4),(char *)((int)pvVar10 + iVar3),pcVar11);
    }
    else {
      if (uVar9 != 0) {
        memmove(pvVar4,pvVar10,uVar9);
        pvVar4 = *(void **)(param_2 + 0x18);
        puVar6 = *(undefined1 **)(param_2 + 0x14);
      }
      if (puVar6 != (undefined1 *)((int)pvVar4 + uVar9)) {
        *(undefined1 *)((int)pvVar4 + uVar9) = *puVar6;
        *(undefined1 **)(param_2 + 0x14) =
             (undefined1 *)((int)pvVar4 + uVar9) + (*(int *)(param_2 + 0x14) - (int)puVar6);
      }
    }
  }
  iVar3 = UStringBase<char,int>::Trim((UStringBase<char,int> *)&local_d4);
  if ((string *)(param_3 + 4) != (string *)(iVar3 + 4)) {
    pvVar10 = *(void **)(iVar3 + 0x18);
    pcVar11 = *(char **)(iVar3 + 0x14);
    puVar6 = *(undefined1 **)(param_3 + 0x14);
    pvVar4 = *(void **)(param_3 + 0x18);
    uVar9 = (int)pcVar11 - (int)pvVar10;
    sVar5 = (int)puVar6 - (int)pvVar4;
    if (sVar5 < uVar9) {
      iVar3 = 0;
      if (sVar5 != 0) {
        memmove(pvVar4,pvVar10,sVar5);
        iVar3 = *(int *)(param_3 + 0x14) - *(int *)(param_3 + 0x18);
      }
      std::string::_M_append((string *)(param_3 + 4),(char *)((int)pvVar10 + iVar3),pcVar11);
    }
    else {
      if (uVar9 != 0) {
        memmove(pvVar4,pvVar10,uVar9);
        pvVar4 = *(void **)(param_3 + 0x18);
        puVar6 = *(undefined1 **)(param_3 + 0x14);
      }
      if (puVar6 != (undefined1 *)((int)pvVar4 + uVar9)) {
        *(undefined1 *)((int)pvVar4 + uVar9) = *puVar6;
        *(undefined1 **)(param_3 + 0x14) =
             (undefined1 *)((int)pvVar4 + uVar9) + (*(int *)(param_3 + 0x14) - (int)puVar6);
      }
    }
  }
  iVar3 = UStringBase<char,int>::Trim((UStringBase<char,int> *)&local_80);
  if ((string *)(param_4 + 4) != (string *)(iVar3 + 4)) {
    pvVar10 = *(void **)(iVar3 + 0x18);
    pcVar11 = *(char **)(iVar3 + 0x14);
    puVar6 = *(undefined1 **)(param_4 + 0x14);
    pvVar4 = *(void **)(param_4 + 0x18);
    uVar9 = (int)pcVar11 - (int)pvVar10;
    sVar5 = (int)puVar6 - (int)pvVar4;
    if (sVar5 < uVar9) {
      iVar3 = 0;
      if (sVar5 != 0) {
        memmove(pvVar4,pvVar10,sVar5);
        iVar3 = *(int *)(param_4 + 0x14) - *(int *)(param_4 + 0x18);
      }
      std::string::_M_append((string *)(param_4 + 4),(char *)((int)pvVar10 + iVar3),pcVar11);
    }
    else {
      if (uVar9 != 0) {
        memmove(pvVar4,pvVar10,uVar9);
        pvVar4 = *(void **)(param_4 + 0x18);
        puVar6 = *(undefined1 **)(param_4 + 0x14);
      }
      if (puVar6 != (undefined1 *)((int)pvVar4 + uVar9)) {
        *(undefined1 *)((int)pvVar4 + uVar9) = *puVar6;
        *(undefined1 **)(param_4 + 0x14) =
             (undefined1 *)((int)pvVar4 + uVar9) + (*(int *)(param_4 + 0x14) - (int)puVar6);
      }
    }
  }
  iVar3 = UStringBase<char,int>::Trim((UStringBase<char,int> *)&local_64);
  if ((string *)(param_5 + 4) != (string *)(iVar3 + 4)) {
    pvVar10 = *(void **)(iVar3 + 0x18);
    pcVar11 = *(char **)(iVar3 + 0x14);
    puVar6 = *(undefined1 **)(param_5 + 0x14);
    pvVar4 = *(void **)(param_5 + 0x18);
    uVar9 = (int)pcVar11 - (int)pvVar10;
    sVar5 = (int)puVar6 - (int)pvVar4;
    if (sVar5 < uVar9) {
      iVar3 = 0;
      if (sVar5 != 0) {
        memmove(pvVar4,pvVar10,sVar5);
        iVar3 = *(int *)(param_5 + 0x14) - *(int *)(param_5 + 0x18);
      }
      std::string::_M_append((string *)(param_5 + 4),(char *)((int)pvVar10 + iVar3),pcVar11);
    }
    else {
      if (uVar9 != 0) {
        memmove(pvVar4,pvVar10,uVar9);
        pvVar4 = *(void **)(param_5 + 0x18);
        puVar6 = *(undefined1 **)(param_5 + 0x14);
      }
      if (puVar6 != (undefined1 *)((int)pvVar4 + uVar9)) {
        *(undefined1 *)((int)pvVar4 + uVar9) = *puVar6;
        *(undefined1 **)(param_5 + 0x14) =
             (undefined1 *)((int)pvVar4 + uVar9) + (*(int *)(param_5 + 0x14) - (int)puVar6);
      }
    }
  }
  local_64 = iVar7 + 8;
  if ((local_4c != local_60) && (local_4c != (uint *)0x0)) {
    if (local_60[0] - (int)local_4c < 0x81) {
      std::__node_alloc::_M_deallocate(local_4c,local_60[0] - (int)local_4c);
    }
    else {
      operator_delete(local_4c);
    }
  }
  local_80 = iVar7 + 8;
  if ((local_68 != local_7c) && (local_68 != (uint *)0x0)) {
    if (local_7c[0] - (int)local_68 < 0x81) {
      std::__node_alloc::_M_deallocate(local_68,local_7c[0] - (int)local_68);
    }
    else {
      operator_delete(local_68);
    }
  }
  local_b8 = iVar7 + 8;
  if ((local_a0 != local_b4) && (local_a0 != (uint *)0x0)) {
    if (local_b4[0] - (int)local_a0 < 0x81) {
      std::__node_alloc::_M_deallocate(local_a0,local_b4[0] - (int)local_a0);
    }
    else {
      operator_delete(local_a0);
    }
  }
  local_d4 = iVar7 + 8;
  if ((local_bc != local_d0) && (local_bc != (uint *)0x0)) {
    if (local_d0[0] - (int)local_bc < 0x81) {
      std::__node_alloc::_M_deallocate(local_bc,local_d0[0] - (int)local_bc);
    }
    else {
      operator_delete(local_bc);
    }
  }
  local_10c = iVar7 + 8;
  if ((local_f4 != local_108) && (local_f4 != (uint *)0x0)) {
    if (local_108[0] - (int)local_f4 < 0x81) {
      std::__node_alloc::_M_deallocate(local_f4,local_108[0] - (int)local_f4);
    }
    else {
      operator_delete(local_f4);
    }
  }
  local_128 = iVar7 + 8;
  if ((local_110 != local_124) && (local_110 != (uint *)0x0)) {
    if (local_124[0] - (int)local_110 < 0x81) {
      std::__node_alloc::_M_deallocate(local_110,local_124[0] - (int)local_110);
    }
    else {
      operator_delete(local_110);
    }
  }
  local_144 = iVar7 + 8;
  if ((local_12c != local_140) && (local_12c != (uint *)0x0)) {
    if (local_140[0] - (int)local_12c < 0x81) {
      std::__node_alloc::_M_deallocate(local_12c,local_140[0] - (int)local_12c);
    }
    else {
      operator_delete(local_12c);
    }
  }
  if (local_2c == *piVar12) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

