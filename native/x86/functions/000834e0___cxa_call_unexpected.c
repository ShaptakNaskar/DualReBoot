/* 000834e0 | __cxa_call_unexpected */

void __cxa_call_unexpected(int *param_1)

{
  code *pcVar1;
  
  FUN_0002e044();
  if (param_1 != (int *)0x0) {
    FUN_0007fc10(param_1);
    if (*param_1 == 0x432b2b00 && param_1[1] == 0x474e5543) {
      pcVar1 = (code *)param_1[-9];
    }
    else {
      FUN_000814a0();
      pcVar1 = (code *)FUN_00081520();
    }
    (*pcVar1)();
                    /* WARNING: Subroutine does not return */
    FUN_000814f0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_000803f0(0);
}

