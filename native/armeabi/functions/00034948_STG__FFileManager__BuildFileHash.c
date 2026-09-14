/* 00034948 | STG::FFileManager::BuildFileHash */

/* STG::FFileManager::BuildFileHash(STG::UStringBase<char, int> const&, STG::FFileHash&) const */

void __thiscall
STG::FFileManager::BuildFileHash(FFileManager *this,UStringBase *param_1,FFileHash *param_2)

{
  string *psVar1;
  string *psVar2;
  int iVar3;
  void *__dest;
  size_t __n;
  undefined1 *puVar4;
  int iVar5;
  int *piVar6;
  undefined4 uVar7;
  uint __n_00;
  int iVar8;
  int local_bc;
  int local_b8 [5];
  int *local_a4;
  int local_a0;
  uint local_9c [4];
  uint *local_8c;
  uint *local_88;
  int local_84;
  uint local_80 [4];
  uint *local_70;
  uint *local_6c;
  int local_68;
  uint local_64 [4];
  uint *local_54;
  uint *local_50;
  int local_4c;
  uint local_48 [4];
  string *local_38;
  string *local_34;
  undefined4 local_30;
  int local_2c;
  
  iVar3 = DAT_00034c8c;
  piVar6 = *(int **)(DAT_00034c88 + 0x34960);
  local_2c = *piVar6;
  GetBasePath();
  iVar5 = *(int *)(iVar3 + 0x34984);
  iVar8 = iVar5 + 8;
  uVar7 = 0;
  local_9c[0] = local_9c[0] & 0xffffff00;
  local_a0 = iVar8;
  local_8c = local_9c;
  local_88 = local_9c;
  iVar3 = BuildPath(this,param_1,(UStringBase *)&local_a0);
  if (iVar3 == 0) {
    uVar7 = 0;
  }
  else {
    local_80[0] = local_80[0] & 0xffffff00;
    local_64[0] = local_64[0] & 0xffffff00;
    local_84 = iVar8;
    local_70 = local_80;
    local_6c = local_80;
    local_68 = iVar8;
    local_54 = local_64;
    local_50 = local_64;
    iVar3 = FUN_00031430((UStringBase *)&local_a0,&local_bc);
    if (iVar3 == 0) {
      uVar7 = 0;
    }
    else if ((local_6c == local_70) && (local_50 != local_54)) {
      local_30 = 0xffffffff;
      local_48[0] = local_48[0] & 0xffffff00;
      local_4c = iVar8;
      local_38 = (string *)local_48;
      local_34 = (string *)local_48;
      std::string::_M_append((string *)local_48,(char *)local_50,(char *)local_54);
      local_30 = UStringBaseHash_Internal((uchar *)local_34,(int)local_38 - (int)local_34);
      psVar2 = local_34;
      psVar1 = local_38;
      puVar4 = *(undefined1 **)(param_2 + 0x14);
      __dest = *(void **)(param_2 + 0x18);
      __n_00 = (int)local_38 - (int)local_34;
      __n = (int)puVar4 - (int)__dest;
      if (__n < __n_00) {
        iVar3 = 0;
        if (__n != 0) {
          memmove(__dest,local_34,__n);
          iVar3 = *(int *)(param_2 + 0x14) - *(int *)(param_2 + 0x18);
        }
        std::string::_M_append((string *)(param_2 + 4),(char *)(psVar2 + iVar3),(char *)psVar1);
      }
      else {
        if (__n_00 != 0) {
          memmove(__dest,local_34,__n_00);
          __dest = *(void **)(param_2 + 0x18);
          puVar4 = *(undefined1 **)(param_2 + 0x14);
        }
        if (puVar4 != (undefined1 *)((int)__dest + __n_00)) {
          *(undefined1 *)((int)__dest + __n_00) = *puVar4;
          *(undefined1 **)(param_2 + 0x14) =
               (undefined1 *)((int)__dest + __n_00) + (*(int *)(param_2 + 0x14) - (int)puVar4);
        }
      }
      local_4c = iVar5 + 8;
      *(undefined4 *)(param_2 + 0x1c) = local_30;
      if ((local_34 == (string *)local_48) || (local_34 == (string *)0x0)) {
        uVar7 = 1;
      }
      else if (local_48[0] - (int)local_34 < 0x81) {
        std::__node_alloc::_M_deallocate(local_34,local_48[0] - (int)local_34);
        uVar7 = 1;
      }
      else {
        operator_delete(local_34);
        uVar7 = 1;
      }
    }
    local_68 = iVar5 + 8;
    if ((local_50 != local_64) && (local_50 != (uint *)0x0)) {
      if (local_64[0] - (int)local_50 < 0x81) {
        std::__node_alloc::_M_deallocate(local_50,local_64[0] - (int)local_50);
      }
      else {
        operator_delete(local_50);
      }
    }
    local_84 = iVar5 + 8;
    if ((local_6c != local_80) && (local_6c != (uint *)0x0)) {
      if (local_80[0] - (int)local_6c < 0x81) {
        std::__node_alloc::_M_deallocate(local_6c,local_80[0] - (int)local_6c);
      }
      else {
        operator_delete(local_6c);
      }
    }
  }
  local_a0 = iVar5 + 8;
  if ((local_88 != local_9c) && (local_88 != (uint *)0x0)) {
    if (local_9c[0] - (int)local_88 < 0x81) {
      std::__node_alloc::_M_deallocate(local_88,local_9c[0] - (int)local_88);
    }
    else {
      operator_delete(local_88);
    }
  }
  local_bc = iVar5 + 8;
  if ((local_a4 != local_b8) && (local_a4 != (int *)0x0)) {
    if ((uint)(local_b8[0] - (int)local_a4) < 0x81) {
      std::__node_alloc::_M_deallocate(local_a4,local_b8[0] - (int)local_a4);
    }
    else {
      operator_delete(local_a4);
    }
  }
  if (local_2c != *piVar6) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar7);
  }
  return;
}

