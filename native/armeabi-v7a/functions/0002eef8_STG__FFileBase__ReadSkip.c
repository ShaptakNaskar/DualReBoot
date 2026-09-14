/* 0002eef8 | STG::FFileBase::ReadSkip */

/* STG::FFileBase::ReadSkip(unsigned long) const */

void __thiscall STG::FFileBase::ReadSkip(FFileBase *this,ulong param_1)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  ulong unaff_r5;
  int *piVar4;
  undefined1 auStack_1024 [4096];
  int local_24;
  
  piVar4 = *(int **)(DAT_0002efa4 + 0x2ef18);
  if (param_1 == 0) {
    unaff_r5 = 0;
  }
  local_24 = *piVar4;
  if (param_1 != 0) {
    unaff_r5 = 0;
    uVar3 = param_1;
    do {
      uVar2 = uVar3;
      if (0xfff < uVar3) {
        uVar2 = 0x1000;
      }
      iVar1 = (**(code **)(*(int *)this + 0x28))(this,auStack_1024,1,uVar2);
      if (iVar1 == 0) break;
      unaff_r5 = unaff_r5 + iVar1;
      uVar3 = uVar3 - iVar1;
    } while (unaff_r5 < param_1);
  }
  if (local_24 == *piVar4) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(unaff_r5 == param_1);
}

