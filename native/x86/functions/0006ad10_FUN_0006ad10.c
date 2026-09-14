/* 0006ad10 | FUN_0006ad10 */

void FUN_0006ad10(int param_1,char *param_2)

{
  int *piVar1;
  int unaff_EBX;
  char local_820 [2048];
  int local_20;
  
  FUN_0002e044();
  piVar1 = *(int **)(&DAT_0003110e + unaff_EBX);
  local_20 = *piVar1;
  vsnprintf(local_820,0x800,param_2,&stack0x0000000c);
  if (param_1 == 1) {
    __android_log_write(4,"_ZN3STG7GEScene27InitializeModelVisMask_DateEm" + unaff_EBX + 0x1e,
                        local_820);
  }
  else if (param_1 == 2) {
    __android_log_write(3,"_ZN3STG7GEScene27InitializeModelVisMask_DateEm" + unaff_EBX + 0x1e,
                        local_820);
  }
  else if (param_1 == 0) {
    __android_log_write(6,"_ZN3STG7GEScene27InitializeModelVisMask_DateEm" + unaff_EBX + 0x1e,
                        local_820);
  }
  if (local_20 == *piVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0002e000();
}

