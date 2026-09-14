/* 00032bd0 | STG::FFileManager::GetPathComponents */

/* STG::FFileManager::GetPathComponents(STG::UStringBase<char, int> const&, STG::UStringBase<char,
   int>&, STG::UStringBase<char, int>&, STG::UStringBase<char, int>&) const */

void __thiscall
STG::FFileManager::GetPathComponents
          (FFileManager *this,UStringBase *param_1,UStringBase *param_2,UStringBase *param_3,
          UStringBase *param_4)

{
  uint *puVar1;
  uint *puVar2;
  string *psVar3;
  string *psVar4;
  uint uVar5;
  void *pvVar6;
  undefined1 *puVar7;
  int iVar8;
  int iVar9;
  size_t sVar10;
  size_t __n;
  int *piVar11;
  uint local_d8;
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
  uint local_7c [4];
  uint *local_6c;
  uint *local_68;
  int local_64;
  string *local_60 [4];
  string *local_50;
  string *local_4c;
  int local_48;
  string *local_44 [4];
  string *local_34;
  string *local_30;
  int local_2c;
  
  iVar8 = *(int *)(DAT_00033160 + 0x32bec);
  iVar9 = iVar8 + 8;
  piVar11 = *(int **)(DAT_00033164 + 0x32bf8);
  local_2c = *piVar11;
  local_c0 = local_d0;
  local_a4 = local_b4;
  local_88 = local_98;
  local_6c = local_7c;
  local_d0[0] = local_d0[0] & 0xffffff00;
  local_b4[0] = local_b4[0] & 0xffffff00;
  local_98[0] = local_98[0] & 0xffffff00;
  local_7c[0] = local_7c[0] & 0xffffff00;
  local_d4 = iVar9;
  local_bc = local_c0;
  local_b8 = iVar9;
  local_a0 = local_a4;
  local_9c = iVar9;
  local_84 = local_88;
  local_80 = iVar9;
  local_68 = local_6c;
  GetPathComponents(this,param_1,(UStringBase *)&local_d4,(UStringBase *)&local_b8,
                    (UStringBase *)&local_9c,(UStringBase *)&local_80);
  puVar2 = local_bc;
  puVar1 = local_c0;
  sVar10 = (int)local_c0 - (int)local_bc;
  uVar5 = sVar10 + 1;
  local_50 = (string *)local_60;
  local_64 = iVar9;
  local_4c = (string *)local_60;
  if (uVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    std::__stl_throw_length_error((char *)(DAT_00033170 + 0x33054));
  }
  if (0x10 < uVar5) {
    local_d8 = uVar5;
    if (uVar5 < 0x81) {
      local_50 = (string *)std::__node_alloc::_M_allocate(&local_d8);
    }
    else {
      local_50 = operator_new(uVar5);
    }
    local_60[0] = local_50 + local_d8;
  }
  local_4c = local_50;
  if (puVar2 != puVar1) {
    pvVar6 = memcpy(local_50,puVar2,sVar10);
    local_50 = (string *)((int)pvVar6 + sVar10);
  }
  *local_50 = (string)0x0;
  std::string::_M_append
            ((string *)local_60,(char *)(DAT_00033168 + 0x32d20),(char *)(DAT_00033168 + 0x32d21));
  psVar4 = local_4c;
  psVar3 = local_50;
  local_48 = iVar8 + 8;
  sVar10 = (int)local_50 - (int)local_4c;
  uVar5 = sVar10 + 1;
  local_34 = (string *)local_44;
  local_30 = (string *)local_44;
  if (uVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    std::__stl_throw_length_error((char *)(DAT_0003316c + 0x33048));
  }
  if (0x10 < uVar5) {
    local_d8 = uVar5;
    if (uVar5 < 0x81) {
      local_34 = (string *)std::__node_alloc::_M_allocate(&local_d8);
    }
    else {
      local_34 = operator_new(uVar5);
    }
    local_44[0] = local_34 + local_d8;
  }
  local_30 = local_34;
  if (psVar4 != psVar3) {
    pvVar6 = memcpy(local_34,psVar4,sVar10);
    local_34 = (string *)((int)pvVar6 + sVar10);
  }
  puVar1 = local_a0;
  *local_34 = (string)0x0;
  sVar10 = strlen((char *)local_a0);
  std::string::_M_append((string *)local_44,(char *)puVar1,(char *)((int)puVar1 + sVar10));
  psVar4 = local_30;
  psVar3 = local_34;
  puVar7 = *(undefined1 **)(param_2 + 0x14);
  pvVar6 = *(void **)(param_2 + 0x18);
  uVar5 = (int)local_34 - (int)local_30;
  sVar10 = (int)puVar7 - (int)pvVar6;
  if (sVar10 < uVar5) {
    iVar9 = 0;
    if (sVar10 != 0) {
      memmove(pvVar6,local_30,sVar10);
      iVar9 = *(int *)(param_2 + 0x14) - *(int *)(param_2 + 0x18);
    }
    std::string::_M_append((string *)(param_2 + 4),(char *)(psVar4 + iVar9),(char *)psVar3);
  }
  else {
    if (uVar5 != 0) {
      memmove(pvVar6,local_30,uVar5);
      pvVar6 = *(void **)(param_2 + 0x18);
      puVar7 = *(undefined1 **)(param_2 + 0x14);
    }
    if ((undefined1 *)((int)pvVar6 + uVar5) != puVar7) {
      *(undefined1 *)((int)pvVar6 + uVar5) = *puVar7;
      *(undefined1 **)(param_2 + 0x14) =
           (undefined1 *)((int)pvVar6 + uVar5) + (*(int *)(param_2 + 0x14) - (int)puVar7);
    }
  }
  local_48 = iVar8 + 8;
  if ((local_30 != (string *)local_44) && (local_30 != (string *)0x0)) {
    if ((uint)((int)local_44[0] - (int)local_30) < 0x81) {
      std::__node_alloc::_M_deallocate(local_30,(int)local_44[0] - (int)local_30);
    }
    else {
      operator_delete(local_30);
    }
  }
  local_64 = iVar8 + 8;
  if ((local_4c != (string *)local_60) && (local_4c != (string *)0x0)) {
    if ((uint)((int)local_60[0] - (int)local_4c) < 0x81) {
      std::__node_alloc::_M_deallocate(local_4c,(int)local_60[0] - (int)local_4c);
    }
    else {
      operator_delete(local_4c);
    }
  }
  puVar2 = local_84;
  puVar1 = local_88;
  puVar7 = *(undefined1 **)(param_3 + 0x14);
  pvVar6 = *(void **)(param_3 + 0x18);
  uVar5 = (int)local_88 - (int)local_84;
  sVar10 = (int)puVar7 - (int)pvVar6;
  if (sVar10 < uVar5) {
    iVar9 = 0;
    if (sVar10 != 0) {
      memmove(pvVar6,local_84,sVar10);
      iVar9 = *(int *)(param_3 + 0x14) - *(int *)(param_3 + 0x18);
    }
    std::string::_M_append((string *)(param_3 + 4),(char *)((int)puVar2 + iVar9),(char *)puVar1);
    puVar7 = *(undefined1 **)(param_4 + 0x14);
    pvVar6 = *(void **)(param_4 + 0x18);
    __n = (int)local_6c - (int)local_68;
    sVar10 = (int)puVar7 - (int)pvVar6;
    if (sVar10 < __n) goto LAB_0003308c;
  }
  else {
    if (uVar5 != 0) {
      memmove(pvVar6,local_84,uVar5);
      pvVar6 = *(void **)(param_3 + 0x18);
      puVar7 = *(undefined1 **)(param_3 + 0x14);
    }
    if ((undefined1 *)((int)pvVar6 + uVar5) != puVar7) {
      *(undefined1 *)((int)pvVar6 + uVar5) = *puVar7;
      *(undefined1 **)(param_3 + 0x14) =
           (undefined1 *)((int)pvVar6 + uVar5) + (*(int *)(param_3 + 0x14) - (int)puVar7);
    }
    puVar7 = *(undefined1 **)(param_4 + 0x14);
    pvVar6 = *(void **)(param_4 + 0x18);
    __n = (int)local_6c - (int)local_68;
    sVar10 = (int)puVar7 - (int)pvVar6;
    if (sVar10 < __n) {
LAB_0003308c:
      puVar2 = local_68;
      puVar1 = local_6c;
      iVar9 = 0;
      if (sVar10 != 0) {
        memmove(pvVar6,local_68,sVar10);
        iVar9 = *(int *)(param_4 + 0x14) - *(int *)(param_4 + 0x18);
      }
      std::string::_M_append((string *)(param_4 + 4),(char *)((int)puVar2 + iVar9),(char *)puVar1);
      goto LAB_00032f50;
    }
  }
  if (__n != 0) {
    memmove(pvVar6,local_68,__n);
    pvVar6 = *(void **)(param_4 + 0x18);
    puVar7 = *(undefined1 **)(param_4 + 0x14);
  }
  if (puVar7 != (undefined1 *)((int)pvVar6 + __n)) {
    *(undefined1 *)((int)pvVar6 + __n) = *puVar7;
    *(undefined1 **)(param_4 + 0x14) =
         (undefined1 *)((int)pvVar6 + __n) + (*(int *)(param_4 + 0x14) - (int)puVar7);
  }
LAB_00032f50:
  local_80 = iVar8 + 8;
  if ((local_68 != local_7c) && (local_68 != (uint *)0x0)) {
    if (local_7c[0] - (int)local_68 < 0x81) {
      std::__node_alloc::_M_deallocate(local_68,local_7c[0] - (int)local_68);
    }
    else {
      operator_delete(local_68);
    }
  }
  local_9c = iVar8 + 8;
  if ((local_84 != local_98) && (local_84 != (uint *)0x0)) {
    if (local_98[0] - (int)local_84 < 0x81) {
      std::__node_alloc::_M_deallocate(local_84,local_98[0] - (int)local_84);
    }
    else {
      operator_delete(local_84);
    }
  }
  local_b8 = iVar8 + 8;
  if ((local_a0 != local_b4) && (local_a0 != (uint *)0x0)) {
    if (local_b4[0] - (int)local_a0 < 0x81) {
      std::__node_alloc::_M_deallocate(local_a0,local_b4[0] - (int)local_a0);
    }
    else {
      operator_delete(local_a0);
    }
  }
  local_d4 = iVar8 + 8;
  if ((local_bc != local_d0) && (local_bc != (uint *)0x0)) {
    if (local_d0[0] - (int)local_bc < 0x81) {
      std::__node_alloc::_M_deallocate(local_bc,local_d0[0] - (int)local_bc);
    }
    else {
      operator_delete(local_bc);
    }
  }
  if (local_2c == *piVar11) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

