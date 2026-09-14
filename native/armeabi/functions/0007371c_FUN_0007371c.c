/* 0007371c | FUN_0007371c */

void FUN_0007371c(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar1 = FUN_00073624();
  uVar2 = FUN_000746e8();
  *(undefined4 *)(param_1 + 0xc) = uVar2;
  uVar2 = FUN_00074698();
  iVar3 = *(int *)(iVar1 + 4);
  *(undefined4 *)(param_1 + 0x10) = uVar2;
  *(int *)(iVar1 + 4) = iVar3 + 1;
  ___Unwind_RaiseException(param_1 + 0x38);
  FUN_00073d24(param_1 + 0x38);
  pthread_getspecific(*(pthread_key_t *)(DAT_00073764 + 0x73750));
                    /* WARNING: Could not recover jumptable at 0x00073754. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)0x73747)();
  return;
}

