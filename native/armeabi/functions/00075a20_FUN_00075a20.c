/* 00075a20 | FUN_00075a20 */

undefined4 FUN_00075a20(undefined4 param_1,uint param_2)

{
  undefined4 uVar1;
  
  if (param_2 == 0xff) {
    return 0;
  }
  if (0xc < (param_2 & 0xf)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
                    /* WARNING: Could not emulate address calculation at 0x00075a44 */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*(code *)(*(int *)((param_2 & 0xf) * 4 + DAT_00075b04 + 0x75a46) + DAT_00075b04 + 0x75a46
                    ))();
  return uVar1;
}

