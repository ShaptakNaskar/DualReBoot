/* 00080420 | FUN_00080420 */

void FUN_00080420(void)

{
  int iVar1;
  int unaff_EBX;
  byte in_stack_00000010;
  undefined4 in_stack_00000014;
  
  iVar1 = FUN_0002e044();
  if ((iVar1 != 0) && ((in_stack_00000010 & 0xf) < 0xd)) {
                    /* WARNING: Could not recover jumptable at 0x00080479. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)("_ZN3STG13GERendererAPI11GL_ValidateEPKc" +
              *(int *)(unaff_EBX + 0x8907 + (in_stack_00000010 & 0xf) * 4) + unaff_EBX + 0xc))();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_000803f0(in_stack_00000014);
}

