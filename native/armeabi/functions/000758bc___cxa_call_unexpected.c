/* 000758bc | __cxa_call_unexpected */

void __cxa_call_unexpected(int *param_1)

{
  int *piVar1;
  
  piVar1 = param_1;
  if (*param_1 == DAT_000759b8) goto LAB_000758e2;
  do {
    FUN_0007385c(param_1);
    piVar1 = (int *)FUN_00074724();
LAB_000758e2:
  } while (piVar1[1] != DAT_000759bc);
  FUN_0007385c();
  (*(code *)param_1[-0xb])();
                    /* WARNING: Subroutine does not return */
  FUN_000746d4();
}

