/* 00035760 | STG::FLog::Print */

/* STG::FLog::Print(char const*, ...) */

void __thiscall STG::FLog::Print(FLog *this,char *param_1,...)

{
  int *piVar1;
  int unaff_EBX;
  char local_820 [2048];
  int local_20;
  
  FUN_0002e044();
  piVar1 = *(int **)(unaff_EBX + 0x666be);
  local_20 = *piVar1;
  vsnprintf(local_820,0x800,param_1,&stack0x0000000c);
  FFileBase::Print((FFileBase *)this,local_820);
  FFileBase::Flush((FFileBase *)this);
  FUN_00035640(1,local_820);
  if (local_20 == *piVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0002e000();
}

