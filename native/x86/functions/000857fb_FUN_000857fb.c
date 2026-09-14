/* 000857fb | FUN_000857fb */

undefined4 __regparm3 FUN_000857fb(undefined4 *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  code *local_34;
  
  FUN_0002e044();
  do {
    iVar1 = FUN_000853d5();
    iVar2 = _Unwind_GetCFA(param_2);
    uVar3 = (uint)(iVar2 + (*(int *)(param_2 + 0x60) >> 0x1f) == param_1[4]);
    if (iVar1 != 0) {
      return 2;
    }
    if (local_34 != (code *)0x0) {
      iVar1 = (*local_34)(1,uVar3 << 2 | 2,*param_1,param_1[1],param_1,param_2,0,0);
      if (iVar1 == 7) {
        return 7;
      }
      if (iVar1 != 8) {
        return 2;
      }
    }
    if (uVar3 != 0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    FUN_00084f0b();
  } while( true );
}

