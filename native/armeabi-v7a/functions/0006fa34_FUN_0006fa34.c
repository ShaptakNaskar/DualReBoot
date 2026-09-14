/* 0006fa34 | FUN_0006fa34 */

void FUN_0006fa34(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  code *pcVar2;
  
  fprintf((FILE *)(*(int *)(DAT_0006fa7c + 0x6fa42) + 0xa8),(char *)(DAT_0006fa80 + 0x6fa4a),param_1
          ,*(int *)(DAT_0006fa7c + 0x6fa42),param_4);
  iVar1 = dlopen(DAT_0006fa84 + 0x6fa54,0);
  if (iVar1 != 0) {
    pcVar2 = (code *)dlsym(iVar1,DAT_0006fa88 + 0x6fa60);
    if (pcVar2 != (code *)0x0) {
      (*pcVar2)(7,DAT_0006fa8c + 0x6fa70,param_1);
    }
    dlclose(iVar1);
  }
                    /* WARNING: Subroutine does not return */
  FUN_000703f0();
}

