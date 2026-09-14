/* 00035640 | FUN_00035640 */

void FUN_00035640(int param_1,char *param_2)

{
  int *piVar1;
  int unaff_EBX;
  char local_820 [2048];
  int local_20;
  
  FUN_0002e044();
  piVar1 = *(int **)(unaff_EBX + 0x667de);
  local_20 = *piVar1;
  vsnprintf(local_820,0x800,param_2,&stack0x0000000c);
  if (param_1 == 1) {
    __android_log_write(4,unaff_EBX + 0x51ccc,local_820);
  }
  else if (param_1 == 2) {
    __android_log_write(3,unaff_EBX + 0x51ccc,local_820);
  }
  else if (param_1 == 0) {
    __android_log_write(6,unaff_EBX + 0x51ccc,local_820);
  }
  if (local_20 == *piVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0002e000();
}

