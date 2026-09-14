/* 0002e7c0 | STG::FFileBase::ReadSkip */

/* STG::FFileBase::ReadSkip(unsigned long) const */

bool __thiscall STG::FFileBase::ReadSkip(FFileBase *this,ulong param_1)

{
  int iVar1;
  uint uVar2;
  int unaff_EBX;
  uint uVar3;
  uint uVar4;
  undefined1 local_1020 [4096];
  int local_20;
  undefined4 uStack_14;
  
  uVar4 = 0;
  uStack_14 = 0x2e7cb;
  FUN_0002e044();
  local_20 = **(int **)(unaff_EBX + 0x6d66d);
  uVar3 = param_1;
  if (param_1 != 0) {
    do {
      uVar2 = 0x1000;
      if (uVar3 < 0x1000) {
        uVar2 = uVar3;
      }
      iVar1 = (**(code **)(*(int *)this + 0x28))(this,local_1020,1,uVar2);
      if (iVar1 == 0) break;
      uVar4 = uVar4 + iVar1;
      uVar3 = uVar3 - iVar1;
    } while (uVar4 < param_1);
  }
  if (local_20 != **(int **)(unaff_EBX + 0x6d66d)) {
                    /* WARNING: Subroutine does not return */
    FUN_0002e000();
  }
  return uVar4 == param_1;
}

