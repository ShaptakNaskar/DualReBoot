/* 0007276c | FUN_0007276c */

undefined4 FUN_0007276c(int param_1,int param_2,undefined4 param_3,undefined4 *param_4)

{
  int iVar1;
  undefined4 uVar2;
  uint extraout_r2;
  int extraout_r3;
  bool bVar3;
  ulonglong uVar4;
  
  do {
    iVar1 = FUN_00072418(param_1,*(undefined4 *)(param_2 + 0x40));
    if (iVar1 != 0) goto LAB_000727b8;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_2 + 0x40);
    iVar1 = (**(code **)(param_1 + 0x10))(1,param_1,param_2);
  } while (iVar1 == 8);
  if (iVar1 == 7) {
    uVar4 = restore_core_regs(param_2 + 4);
    if ((int)(uVar4 >> 0x20) == 0) {
      bVar3 = extraout_r2 == 0xf;
      if (extraout_r2 < 0x10) {
        bVar3 = extraout_r3 == 0;
      }
      if (bVar3) {
        uVar2 = 0;
        *param_4 = *(undefined4 *)((int)uVar4 + extraout_r2 * 4 + 4);
      }
      else {
        uVar2 = 2;
      }
      return uVar2;
    }
    if (uVar4 < 0x500000000) {
      uVar2 = 1;
    }
    else {
      uVar2 = 2;
    }
    return uVar2;
  }
LAB_000727b8:
                    /* WARNING: Subroutine does not return */
  abort();
}

