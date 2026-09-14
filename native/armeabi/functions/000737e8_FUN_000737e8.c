/* 000737e8 | FUN_000737e8 */

void FUN_000737e8(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  byte extraout_r3;
  int unaff_r5;
  code *UNRECOVERED_JUMPTABLE;
  
  *(undefined4 *)(param_1 + -0x88) = param_3;
  uVar2 = uRam0007380c;
  uVar1 = uRam00073808;
  *(undefined4 *)(param_1 + -0x8c) = param_2;
  *(undefined4 *)(param_1 + -0x58) = uVar1;
  *(undefined4 *)(param_1 + -0x54) = uVar2;
  *(int *)(param_1 + -0x50) = DAT_00073810 + 0x737fe;
  iVar3 = FUN_0007371c();
  *(byte *)(iVar3 + unaff_r5) = extraout_r3 | (byte)unaff_r5;
                    /* WARNING: Could not recover jumptable at 0x0007380e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}

