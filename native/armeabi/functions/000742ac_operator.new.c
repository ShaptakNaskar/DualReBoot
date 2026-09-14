/* 000742ac | operator.new */

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
    pcVar1 = (code *)FUN_00074298();
    if (pcVar1 == (code *)0x0) break;
    (*pcVar1)();
  }
  uVar3 = FUN_00073768(4);
  FUN_0007424c();
  FUN_000737e8(uVar3,DAT_000742f0 + 0x742dc,DAT_000742f4 + 0x742de);
  if (extraout_r1 != -1) {
    __cxa_end_cleanup();
  }
                    /* WARNING: Subroutine does not return */
  __cxa_call_unexpected();
}

