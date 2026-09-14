/* 00081570 | FUN_00081570 */

void FUN_00081570(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)FUN_00081520();
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)();
  }
                    /* WARNING: Subroutine does not return */
  FUN_000814f0();
}

