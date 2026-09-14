/* 0006f570 | FUN_0006f570 */

void FUN_0006f570(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  byte extraout_r3;
  int unaff_r5;
  code *UNRECOVERED_JUMPTABLE;
  
  iVar3 = DAT_0006f5a0;
  uVar2 = uRam0006f59c;
  uVar1 = uRam0006f598;
  *(undefined4 *)(param_1 + -0x8c) = param_2;
  *(undefined4 *)(param_1 + -0x58) = uVar1;
  *(undefined4 *)(param_1 + -0x54) = uVar2;
  *(undefined4 *)(param_1 + -0x88) = param_3;
  *(int *)(param_1 + -0x50) = iVar3 + 0x6f588;
  iVar3 = FUN_0006f4a8(param_1 + -0x90);
  *(byte *)(iVar3 + unaff_r5) = extraout_r3 | (byte)unaff_r5;
                    /* WARNING: Could not recover jumptable at 0x0006f59e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}

