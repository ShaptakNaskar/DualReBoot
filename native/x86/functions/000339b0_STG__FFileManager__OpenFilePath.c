/* 000339b0 | STG::FFileManager::OpenFilePath */

/* STG::FFileManager::OpenFilePath(STG::UStringBase<char, int> const&, STG::FFileBase::EAccess)
   const */

FFileBase * __thiscall
STG::FFileManager::OpenFilePath(FFileManager *this,UStringBase *param_1,undefined4 param_3)

{
  char cVar1;
  FFileBase *this_00;
  int unaff_EBX;
  FFileBase *pFVar2;
  int local_30;
  uint local_2c [4];
  uint *local_1c;
  uint *local_18;
  int local_14;
  
  local_14 = 0x339bb;
  FUN_0002e044();
  local_2c[0] = local_2c[0] & 0xffffff00;
  local_14 = **(int **)(unaff_EBX + 0x6847d);
  local_30 = *(int *)(unaff_EBX + 0x68481) + 8;
  local_1c = local_2c;
  local_18 = local_2c;
  cVar1 = BuildPath(this,param_1,(UStringBase *)&local_30);
  pFVar2 = (FFileBase *)0x0;
  if (cVar1 != '\0') {
    this_00 = operator_new(0x34);
    FFileDisk::FFileDisk((FFileDisk *)this_00);
    cVar1 = FFileBase::Open(this_00,local_18,param_3);
    pFVar2 = this_00;
    if ((cVar1 == '\0') && (this_00 != (FFileBase *)0x0)) {
      pFVar2 = (FFileBase *)0x0;
      (**(code **)(*(int *)this_00 + 4))(this_00);
    }
  }
  local_30 = *(int *)(unaff_EBX + 0x68481) + 8;
  if ((local_18 != local_2c) && (local_18 != (uint *)0x0)) {
    if (local_2c[0] - (int)local_18 < 0x81) {
      std::__node_alloc::_M_deallocate(local_18,local_2c[0] - (int)local_18);
    }
    else {
      operator_delete(local_18);
    }
  }
  if (local_14 == **(int **)(unaff_EBX + 0x6847d)) {
    return pFVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0002e000();
}

