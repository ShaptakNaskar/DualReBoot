/* 0006ffc8 | operator.new */

/* operator new(unsigned int) */

void * operator_new(uint param_1)

{
  code *pcVar1;
  void *pvVar2;
  undefined4 uVar3;
  int extraout_r1;
  
  while( true ) {
    pvVar2 = malloc(param_1);
    if (pvVar2 != (void *)0x0) {
      return pvVar2;
    }
    pcVar1 = (code *)FUN_0006ff9c();
    if (pcVar1 == (code *)0x0) break;
    (*pcVar1)();
  }
  uVar3 = FUN_0006f4f4(4);
  FUN_0006ff48();
  FUN_0006f570(uVar3,DAT_00070008 + 0x6fff8,DAT_0007000c + 0x6fffa);
  if (extraout_r1 != -1) {
    __cxa_end_cleanup();
  }
                    /* WARNING: Subroutine does not return */
  __cxa_call_unexpected();
}

