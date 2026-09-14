/* 0002ea90 | STG::FFileBase::Print */

/* STG::FFileBase::Print(char const*, ...) */

void STG::FFileBase::Print(char *param_1,...)

{
  uint uVar1;
  int iVar2;
  char *in_r1;
  undefined4 in_r2;
  undefined4 in_r3;
  int *piVar3;
  undefined4 *__arg;
  char acStack_81c [2048];
  int local_1c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  piVar3 = *(int **)(DAT_0002eb34 + 0x2eab8);
  __arg = &uStack_8;
  local_1c = *piVar3;
  uStack_8 = in_r2;
  uStack_4 = in_r3;
  uVar1 = vsnprintf(acStack_81c,0x800,in_r1,__arg);
  if (0 < (int)uVar1) {
    if (uVar1 < 0x801) {
      iVar2 = *(int *)(param_1 + 0xc) + uVar1;
    }
    else {
      iVar2 = *(int *)(param_1 + 0xc) + 0x800;
    }
    *(int *)(param_1 + 0xc) = iVar2;
  }
  (**(code **)(*(int *)param_1 + 0x34))
            (param_1,DAT_0002eb38 + 0x2eb0c,acStack_81c,*(code **)(*(int *)param_1 + 0x34),__arg);
  if (local_1c != *piVar3) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

