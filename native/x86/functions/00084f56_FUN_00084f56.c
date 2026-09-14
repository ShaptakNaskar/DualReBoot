/* 00084f56 | FUN_00084f56 */

void FUN_00084f56(int param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  byte *extraout_ECX;
  byte *extraout_EDX;
  int unaff_EBX;
  uint uVar4;
  uint uVar5;
  int local_2c;
  
  FUN_0002e044();
  *(undefined4 *)(param_2 + 0x90) = 0;
  pbVar3 = extraout_ECX;
  while ((pbVar3 < extraout_EDX &&
         (*(uint *)(param_2 + 0xa4) <
          (uint)(*(int *)(param_1 + 0x4c) - (*(int *)(param_1 + 0x60) >> 0x1f))))) {
    bVar1 = *pbVar3;
    pbVar3 = pbVar3 + 1;
    uVar4 = (uint)bVar1;
    uVar5 = uVar4 & 0xc0;
    if (uVar5 == 0x40) {
      *(uint *)(param_2 + 0xa4) =
           (uVar4 & 0x3f) * *(int *)(param_2 + 0xb0) + *(uint *)(param_2 + 0xa4);
    }
    else if (uVar5 == 0x80) {
      pbVar3 = (byte *)FUN_00084210();
      iVar2 = *(int *)(param_2 + 0xac);
      *(undefined4 *)(param_2 + 4 + (uVar4 & 0x3f) * 8) = 1;
      *(int *)(param_2 + (uVar4 & 0x3f) * 8) = local_2c * iVar2;
    }
    else {
      if (uVar5 != 0xc0) {
        if (0x2f < bVar1) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
                    /* WARNING: Could not recover jumptable at 0x0008500b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)("_ZTIN3STG9FFileBaseE" +
                  *(int *)(unaff_EBX + 0x42dd + uVar4 * 4) + unaff_EBX + 0x13))();
        return;
      }
      *(undefined4 *)(param_2 + 4 + (uVar4 & 0x3f) * 8) = 0;
    }
  }
  return;
}

