/* 00085cf9 | _Unwind_Backtrace */

undefined4 _Unwind_Backtrace(code *param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined1 local_14c [320];
  
  FUN_0008567b();
  while (((iVar1 = FUN_000853d5(), iVar1 == 5 || (iVar1 == 0)) &&
         (iVar2 = (*param_1)(local_14c,param_2,iVar1,iVar1), iVar2 == 0))) {
    if (iVar1 == 5) {
      return 5;
    }
    FUN_00084f0b();
  }
  return 3;
}

