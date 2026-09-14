/* 0006f4a8 | FUN_0006f4a8 */

void FUN_0006f4a8(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar1 = FUN_0006f3b0();
  uVar2 = FUN_00070404();
  *(undefined4 *)(param_1 + 0xc) = uVar2;
  uVar2 = FUN_00070394();
  iVar3 = *(int *)(iVar1 + 4);
  *(undefined4 *)(param_1 + 0x10) = uVar2;
  *(int *)(iVar1 + 4) = iVar3 + 1;
  ___Unwind_RaiseException(param_1 + 0x38);
  FUN_0006fa90(param_1 + 0x38);
  pthread_getspecific(*(pthread_key_t *)(DAT_0006f4f0 + 0x6f4dc));
                    /* WARNING: Could not recover jumptable at 0x0006f4e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)0x6f4d5)();
  return;
}

