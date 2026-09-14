/* 00085f3a | FUN_00085f3a */

undefined4 * FUN_00085f3a(int param_1,undefined4 *param_2)

{
  byte bVar1;
  int unaff_EBX;
  undefined4 *puVar2;
  
  bVar1 = FUN_0002e044();
  if (bVar1 == 0x50) {
    puVar2 = (undefined4 *)(param_1 + 3U & 0xfffffffc);
    *param_2 = *puVar2;
    return puVar2 + 1;
  }
  if ((bVar1 & 0xf) < 0xd) {
                    /* WARNING: Could not recover jumptable at 0x00085f88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    puVar2 = (undefined4 *)
             (*(code *)(*(int *)(unaff_EBX + 0x33bb + (bVar1 & 0xf) * 4) + unaff_EBX + 0x160af))();
    return puVar2;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}

