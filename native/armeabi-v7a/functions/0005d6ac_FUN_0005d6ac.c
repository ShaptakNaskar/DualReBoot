/* 0005d6ac | FUN_0005d6ac */

void FUN_0005d6ac(int param_1,char *param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  char acStack_81c [2048];
  int local_1c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  piVar1 = *(int **)(DAT_0005d778 + 0x5d6d4);
  local_1c = *piVar1;
  uStack_8 = param_3;
  uStack_4 = param_4;
  vsnprintf(acStack_81c,0x800,param_2,&uStack_8);
  if (param_1 == 1) {
    __android_log_write(4,DAT_0005d784 + 0x5d770,acStack_81c);
  }
  else if (param_1 == 2) {
    __android_log_write(3,DAT_0005d780 + 0x5d758,acStack_81c);
  }
  else if (param_1 == 0) {
    __android_log_write(6,DAT_0005d77c + 0x5d740,acStack_81c);
  }
  if (local_1c == *piVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

