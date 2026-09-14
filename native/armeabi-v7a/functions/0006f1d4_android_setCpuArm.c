/* 0006f1d4 | android_setCpuArm */

bool android_setCpuArm(void)

{
  int iVar1;
  undefined4 in_stack_00000000;
  
  iVar1 = android_setCpu();
  if (iVar1 != 0) {
    *(undefined4 *)(DAT_0006f1e8 + 0x6f1fa) = in_stack_00000000;
  }
  return iVar1 != 0;
}

