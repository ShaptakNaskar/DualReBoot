/* 00032ff0 | STG::FFileManager::OpenFilePath */

/* STG::FFileManager::OpenFilePath(STG::UStringBase<char, int> const&, STG::FFileBase::EAccess)
   const */

void __thiscall
STG::FFileManager::OpenFilePath(FFileManager *this,UStringBase *param_1,undefined4 param_3)

{
  int iVar1;
  FFileDisk *this_00;
  int *piVar2;
  int iVar3;
  int local_38;
  uint local_34 [4];
  uint *local_24;
  uint *local_20;
  int local_1c;
  
  piVar2 = *(int **)(DAT_000330e4 + 0x33010);
  iVar3 = *(int *)(DAT_000330e8 + 0x33018);
  local_1c = *piVar2;
  local_38 = iVar3 + 8;
  local_34[0] = local_34[0] & 0xffffff00;
  local_24 = local_34;
  local_20 = local_34;
  iVar1 = BuildPath(this,param_1,(UStringBase *)&local_38);
  this_00 = (FFileDisk *)0x0;
  if (iVar1 != 0) {
    this_00 = operator_new(0x34);
    FFileDisk::FFileDisk(this_00);
    iVar1 = FFileBase::Open((FFileBase *)this_00,local_20,param_3);
    if ((iVar1 == 0) && (this_00 != (FFileDisk *)0x0)) {
      (**(code **)(*(int *)this_00 + 4))(this_00);
      this_00 = (FFileDisk *)0x0;
    }
  }
  local_38 = iVar3 + 8;
  if ((local_20 != local_34) && (local_20 != (uint *)0x0)) {
    if (local_34[0] - (int)local_20 < 0x81) {
      std::__node_alloc::_M_deallocate(local_20,local_34[0] - (int)local_20);
    }
    else {
      operator_delete(local_20);
    }
  }
  if (local_1c == *piVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(this_00);
}

