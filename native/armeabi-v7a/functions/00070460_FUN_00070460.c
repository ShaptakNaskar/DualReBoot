/* 00070460 | FUN_00070460 */

void FUN_00070460(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)FUN_00070404();
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)();
  }
                    /* WARNING: Subroutine does not return */
  FUN_000703f0();
}

