/* 00032308 | STG::FFileManager::GetPathFlags */

/* STG::FFileManager::GetPathFlags(STG::UStringBase<char, int> const&) const */

void __thiscall STG::FFileManager::GetPathFlags(FFileManager *this,UStringBase *param_1)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int local_9c;
  uint local_98 [4];
  uint *local_88;
  uint *local_84;
  int local_80;
  uint local_7c [4];
  uint *local_6c;
  uint *local_68;
  int local_64;
  uint local_60 [4];
  uint *local_50;
  uint *local_4c;
  int local_48;
  uint local_44 [4];
  uint *local_34;
  uint *local_30;
  int local_2c;
  
  piVar3 = *(int **)(DAT_000324e4 + 0x32320);
  local_2c = *piVar3;
  iVar2 = *(int *)(DAT_000324e8 + 0x3232c);
  iVar4 = iVar2 + 8;
  local_88 = local_98;
  local_6c = local_7c;
  local_50 = local_60;
  local_98[0] = local_98[0] & 0xffffff00;
  local_7c[0] = local_7c[0] & 0xffffff00;
  local_60[0] = local_60[0] & 0xffffff00;
  local_44[0] = local_44[0] & 0xffffff00;
  local_9c = iVar4;
  local_84 = local_88;
  local_80 = iVar4;
  local_68 = local_6c;
  local_64 = iVar4;
  local_4c = local_50;
  local_48 = iVar4;
  local_34 = local_44;
  local_30 = local_44;
  GetPathComponents(this,param_1,(UStringBase *)&local_9c,(UStringBase *)&local_80,
                    (UStringBase *)&local_64,(UStringBase *)&local_48);
  uVar1 = GetPathFlags(this,(UStringBase *)&local_9c,(UStringBase *)&local_80,
                       (UStringBase *)&local_64,(UStringBase *)&local_48);
  local_48 = iVar4;
  if ((local_30 != local_44) && (local_30 != (uint *)0x0)) {
    if (local_44[0] - (int)local_30 < 0x81) {
      std::__node_alloc::_M_deallocate(local_30,local_44[0] - (int)local_30);
    }
    else {
      operator_delete(local_30);
    }
  }
  local_64 = iVar2 + 8;
  if ((local_4c != local_60) && (local_4c != (uint *)0x0)) {
    if (local_60[0] - (int)local_4c < 0x81) {
      std::__node_alloc::_M_deallocate(local_4c,local_60[0] - (int)local_4c);
    }
    else {
      operator_delete(local_4c);
    }
  }
  local_80 = iVar2 + 8;
  if ((local_68 != local_7c) && (local_68 != (uint *)0x0)) {
    if (local_7c[0] - (int)local_68 < 0x81) {
      std::__node_alloc::_M_deallocate(local_68,local_7c[0] - (int)local_68);
    }
    else {
      operator_delete(local_68);
    }
  }
  local_9c = iVar2 + 8;
  if ((local_84 != local_98) && (local_84 != (uint *)0x0)) {
    if (local_98[0] - (int)local_84 < 0x81) {
      std::__node_alloc::_M_deallocate(local_84,local_98[0] - (int)local_84);
    }
    else {
      operator_delete(local_84);
    }
  }
  if (local_2c == *piVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}

