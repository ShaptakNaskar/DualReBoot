/* 0002f724 | STG::FFileBase::ReadSkip */

/* STG::FFileBase::ReadSkip(unsigned long) const */

void __thiscall STG::FFileBase::ReadSkip(FFileBase *this,ulong param_1)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  int *piVar5;
  undefined1 auStack_1024 [4096];
  int local_24;
  
  piVar5 = *(int **)(DAT_0002f7d4 + 0x2f73c);
  local_24 = *piVar5;
  if (param_1 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = 0;
    uVar3 = param_1;
    do {
      uVar2 = uVar3;
      if (0xfff < uVar3) {
        uVar2 = 0x1000;
      }
      iVar1 = (**(code **)(*(int *)this + 0x28))(this,auStack_1024,1,uVar2);
      if (iVar1 == 0) break;
      uVar4 = uVar4 + iVar1;
      uVar3 = uVar3 - iVar1;
    } while (uVar4 < param_1);
  }
  if (local_24 == *piVar5) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4 == param_1);
}

