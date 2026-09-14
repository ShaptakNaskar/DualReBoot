/* 00080d90 | operator.new */

/* operator new(unsigned int) */

void * operator_new(uint param_1)

{
  code *pcVar1;
  void *pvVar2;
  undefined4 uVar3;
  int unaff_EBX;
  
  FUN_0002e044();
  while( true ) {
    pvVar2 = malloc(param_1);
    if (pvVar2 != (void *)0x0) {
      return pvVar2;
    }
    pcVar1 = (code *)FUN_00080d70();
    if (pcVar1 == (code *)0x0) break;
    (*pcVar1)();
  }
  uVar3 = FUN_0007fa60(4);
  FUN_00080cd0(uVar3);
                    /* WARNING: Subroutine does not return */
  FUN_0007fb60(uVar3,"_ZN3STG10GEViewportC1ERKNS_10URectangleImEE" + unaff_EBX + 0x1f,
               unaff_EBX + -0x197);
}

