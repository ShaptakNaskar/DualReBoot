/* 0007f9d0 | FUN_0007f9d0 */

void __regparm3 FUN_0007f9d0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  FUN_0002e044();
  iVar1 = FUN_0007f850();
  uVar2 = FUN_00081520();
  *(undefined4 *)(param_1 + 0xc) = uVar2;
  uVar2 = FUN_000814a0();
  *(undefined4 *)(param_1 + 0x10) = uVar2;
  *(int *)(iVar1 + 4) = *(int *)(iVar1 + 4) + 1;
  _Unwind_RaiseException(param_1 + 0x30);
                    /* WARNING: Subroutine does not return */
  FUN_000803f0(param_1 + 0x30);
}

