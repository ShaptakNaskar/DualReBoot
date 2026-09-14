/* 00085ea2 | FUN_00085ea2 */

undefined8 FUN_00085ea2(void)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 extraout_ECX;
  
  bVar1 = FUN_0002e044();
  if (bVar1 == 0xff) {
    uVar2 = 0;
  }
  else {
    bVar1 = bVar1 & 7;
    if (bVar1 == 2) {
      uVar2 = 2;
    }
    else {
      if (bVar1 < 3) {
        if (bVar1 != 0) {
LAB_00085ee0:
                    /* WARNING: Subroutine does not return */
          abort();
        }
      }
      else if (bVar1 != 3) {
        if (bVar1 != 4) goto LAB_00085ee0;
        uVar2 = 8;
        goto LAB_00085eee;
      }
      uVar2 = 4;
    }
  }
LAB_00085eee:
  return CONCAT44(extraout_ECX,uVar2);
}

