/* 00031d80 | STG::FFileManager::GetPathFlags */

/* STG::FFileManager::GetPathFlags(STG::UStringBase<char, int> const&) const */

undefined4 __thiscall STG::FFileManager::GetPathFlags(FFileManager *this,UStringBase *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int unaff_EBX;
  int local_90;
  uint local_8c [4];
  uint *local_7c;
  uint *local_78;
  int local_70;
  uint local_6c [4];
  uint *local_5c;
  uint *local_58;
  int local_50;
  uint local_4c [4];
  uint *local_3c;
  uint *local_38;
  int local_30;
  uint local_2c [4];
  uint *local_1c;
  uint *local_18;
  int local_14;
  
  local_14 = 0x31d8b;
  FUN_0002e044();
  iVar2 = *(int *)(unaff_EBX + 0x6a0b1);
  local_8c[0] = local_8c[0] & 0xffffff00;
  local_14 = **(int **)(unaff_EBX + 0x6a0ad);
  iVar1 = iVar2 + 8;
  local_6c[0] = local_6c[0] & 0xffffff00;
  local_4c[0] = local_4c[0] & 0xffffff00;
  local_2c[0] = local_2c[0] & 0xffffff00;
  local_90 = iVar1;
  local_7c = local_8c;
  local_78 = local_8c;
  local_70 = iVar1;
  local_5c = local_6c;
  local_58 = local_6c;
  local_50 = iVar1;
  local_3c = local_4c;
  local_38 = local_4c;
  local_30 = iVar1;
  local_1c = local_2c;
  local_18 = local_2c;
  GetPathComponents(this,param_1,(UStringBase *)&local_90,(UStringBase *)&local_70,
                    (UStringBase *)&local_50,(UStringBase *)&local_30);
  uVar3 = GetPathFlags(this,(UStringBase *)&local_90,(UStringBase *)&local_70,
                       (UStringBase *)&local_50,(UStringBase *)&local_30);
  local_30 = iVar1;
  if ((local_18 != local_2c) && (local_18 != (uint *)0x0)) {
    if (local_2c[0] - (int)local_18 < 0x81) {
      std::__node_alloc::_M_deallocate(local_18,local_2c[0] - (int)local_18);
    }
    else {
      operator_delete(local_18);
    }
  }
  local_50 = iVar2 + 8;
  if ((local_38 != local_4c) && (local_38 != (uint *)0x0)) {
    if (local_4c[0] - (int)local_38 < 0x81) {
      std::__node_alloc::_M_deallocate(local_38,local_4c[0] - (int)local_38);
    }
    else {
      operator_delete(local_38);
    }
  }
  local_70 = iVar2 + 8;
  if ((local_58 != local_6c) && (local_58 != (uint *)0x0)) {
    if (local_6c[0] - (int)local_58 < 0x81) {
      std::__node_alloc::_M_deallocate(local_58,local_6c[0] - (int)local_58);
    }
    else {
      operator_delete(local_58);
    }
  }
  local_90 = iVar2 + 8;
  if ((local_78 != local_8c) && (local_78 != (uint *)0x0)) {
    if (local_8c[0] - (int)local_78 < 0x81) {
      std::__node_alloc::_M_deallocate(local_78,local_8c[0] - (int)local_78);
    }
    else {
      operator_delete(local_78);
    }
  }
  if (local_14 == **(int **)(unaff_EBX + 0x6a0ad)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0002e000();
}

