/* 00061eec | FUN_00061eec */

void FUN_00061eec(int param_1,char *param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  char acStack_81c [2048];
  int local_1c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  piVar1 = *(int **)(DAT_00061fb8 + 0x61f08);
  local_1c = *piVar1;
  uStack_8 = param_3;
  uStack_4 = param_4;
  vsnprintf(acStack_81c,0x800,param_2,&uStack_8);
  if (param_1 == 1) {
    __android_log_write(4,DAT_00061fc4 + 0x61fb0,acStack_81c);
  }
  else if (param_1 == 2) {
    __android_log_write(3,DAT_00061fc0 + 0x61f98,acStack_81c);
  }
  else if (param_1 == 0) {
    __android_log_write(6,DAT_00061fbc + 0x61f80,acStack_81c);
  }
  if (local_1c == *piVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

