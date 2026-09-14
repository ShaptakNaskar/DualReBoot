/* 00073cc8 | FUN_00073cc8 */

void FUN_00073cc8(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  code *pcVar2;
  
  fprintf((FILE *)(*(int *)(DAT_00073d10 + 0x73cd4) + 0xa8),(char *)(DAT_00073d14 + 0x73cd8),param_1
          ,param_4,param_4);
  iVar1 = dlopen(DAT_00073d18 + 0x73ce6,0);
  if (iVar1 != 0) {
    pcVar2 = (code *)dlsym(iVar1,DAT_00073d1c + 0x73cf4);
    if (pcVar2 != (code *)0x0) {
      (*pcVar2)(7,DAT_00073d20 + 0x73d02,param_1);
    }
    dlclose(iVar1);
  }
                    /* WARNING: Subroutine does not return */
  FUN_000746d4();
}

