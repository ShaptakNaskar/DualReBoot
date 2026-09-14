/* 000715d8 | __cxa_call_unexpected */

void __cxa_call_unexpected(int *param_1)

{
  int *piVar1;
  
  piVar1 = param_1;
  if (DAT_000716c8 != *param_1 || DAT_000716cc != param_1[1]) {
    FUN_0006f5f0(param_1);
    piVar1 = (int *)FUN_00070460();
  }
  FUN_0006f5f0(piVar1);
  (*(code *)param_1[-0xb])();
                    /* WARNING: Subroutine does not return */
  FUN_000703f0();
}

