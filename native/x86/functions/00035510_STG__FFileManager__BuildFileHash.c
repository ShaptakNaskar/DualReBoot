/* 00035510 | STG::FFileManager::BuildFileHash */

/* STG::FFileManager::BuildFileHash(STG::UStringBase<char, int> const&, STG::UStringBase<char, int>
   const&, STG::FFileHash&) */

undefined4
STG::FFileManager::BuildFileHash(UStringBase *param_1,UStringBase *param_2,FFileHash *param_3)

{
  FFileManager *this;
  UStringBase *pUVar1;
  char cVar2;
  undefined4 *extraout_ECX;
  int unaff_EBX;
  undefined4 uVar3;
  int local_40;
  int local_3c [5];
  int *local_28;
  int local_24;
  
  FUN_0002e044();
  this = (FFileManager *)*extraout_ECX;
  pUVar1 = (UStringBase *)extraout_ECX[1];
  local_24 = **(int **)(unaff_EBX + 0x66909);
  GetBasePath();
  ClearBasePath(this);
  cVar2 = AddBasePath(this,pUVar1);
  uVar3 = 0;
  if (cVar2 != '\0') {
    uVar3 = BuildFileHash((UStringBase *)this,param_3);
  }
  ClearBasePath(this);
  cVar2 = AddBasePath(this,(UStringBase *)&local_40);
  if (cVar2 == '\0') {
    uVar3 = 0;
  }
  local_40 = *(int *)(unaff_EBX + 0x6690d) + 8;
  if ((local_28 != local_3c) && (local_28 != (int *)0x0)) {
    if ((uint)(local_3c[0] - (int)local_28) < 0x81) {
      std::__node_alloc::_M_deallocate(local_28,local_3c[0] - (int)local_28);
    }
    else {
      operator_delete(local_28);
    }
  }
  if (local_24 == **(int **)(unaff_EBX + 0x66909)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0002e000();
}

