/* 00034658 | STG::FLog::Print */

/* STG::FLog::Print(char const*, ...) */

void STG::FLog::Print(char *param_1,...)

{
  char *in_r1;
  undefined4 in_r2;
  undefined4 in_r3;
  int *piVar1;
  char acStack_81c [2048];
  int local_1c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  piVar1 = *(int **)(DAT_000346e4 + 0x34680);
  local_1c = *piVar1;
  uStack_8 = in_r2;
  uStack_4 = in_r3;
  vsnprintf(acStack_81c,0x800,in_r1,&uStack_8);
  FFileBase::Print(param_1,acStack_81c);
  FFileBase::Flush((FFileBase *)param_1);
  FUN_0003457c(1,acStack_81c);
  if (local_1c == *piVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

