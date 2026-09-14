/* 000837b0 | FUN_000837b0 */

undefined4 FUN_000837b0(void)

{
  uint uVar1;
  undefined4 uVar2;
  int unaff_EBX;
  
  uVar1 = FUN_0002e044();
  if ((char)uVar1 == -1) {
    return 0;
  }
  if (0xc < (uVar1 & 0xf)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
                    /* WARNING: Could not recover jumptable at 0x00083809. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (*(code *)("_ZN3STG13GERendererAPI16GL_BufferSubDataENS_14GEBufferObject5ETypeEPKhm" +
                    *(int *)(unaff_EBX + 0x57f0 + (uVar1 & 0xf) * 4) + unaff_EBX + 0x34))();
  return uVar2;
}

