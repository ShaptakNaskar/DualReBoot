/* 00034488 | STG::FFileManager::BuildFileHash */

/* STG::FFileManager::BuildFileHash(STG::UStringBase<char, int> const&, STG::UStringBase<char, int>
   const&, STG::FFileHash&) */

void __thiscall
STG::FFileManager::BuildFileHash
          (FFileManager *this,UStringBase *param_1,UStringBase *param_2,FFileHash *param_3)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int local_38;
  int local_34 [5];
  int *local_20;
  int local_1c;
  
  piVar2 = *(int **)(DAT_00034574 + 0x344a8);
  local_1c = *piVar2;
  GetBasePath();
  ClearBasePath(this);
  iVar1 = AddBasePath(this,param_1);
  uVar3 = 0;
  if (iVar1 != 0) {
    uVar3 = BuildFileHash(this,param_2,param_3);
  }
  ClearBasePath(this);
  iVar1 = AddBasePath(this,(UStringBase *)&local_38);
  local_38 = *(int *)(DAT_00034578 + 0x344fc) + 8;
  if (iVar1 == 0) {
    uVar3 = 0;
  }
  if ((local_20 != local_34) && (local_20 != (int *)0x0)) {
    if ((uint)(local_34[0] - (int)local_20) < 0x81) {
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
  __stack_chk_fail(uVar3);
}

