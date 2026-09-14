/* 00084570 | FUN_00084570 */

undefined4 * FUN_00084570(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  byte extraout_DL;
  uint uVar2;
  int unaff_EBX;
  undefined4 *puVar3;
  
  uVar1 = FUN_0002e044();
  if (extraout_DL != 0xff) {
    uVar2 = extraout_DL & 0x70;
    if (uVar2 == 0x20) {
      _Unwind_GetTextRelBase(uVar1);
    }
    else if (uVar2 < 0x21) {
      if (((extraout_DL & 0x70) != 0) && (uVar2 != 0x10)) goto LAB_0008464e;
    }
    else if (uVar2 == 0x40) {
      _Unwind_GetRegionStart(uVar1);
    }
    else if (uVar2 != 0x50) {
      if (uVar2 != 0x30) goto LAB_0008464e;
      _Unwind_GetDataRelBase(uVar1);
    }
    if (extraout_DL == 0x50) {
      puVar3 = (undefined4 *)(param_1 + 3U & 0xfffffffc);
      *param_2 = *puVar3;
      return puVar3 + 1;
    }
  }
  uVar2 = extraout_DL & 0xf;
  if (uVar2 < 0xd) {
                    /* WARNING: Could not recover jumptable at 0x00084616. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    puVar3 = (undefined4 *)
             (*(code *)(
                       "_ZNK3STG12FFileManager17GetPathComponentsERKNS_11UStringBaseIciEERS2_S5_S5_S5_"
                       + *(int *)(unaff_EBX + 0x4c29 + uVar2 * 4) + unaff_EBX + 0x27))();
    return puVar3;
  }
LAB_0008464e:
                    /* WARNING: Subroutine does not return */
  abort();
}

