/* 00085ef2 | FUN_00085ef2 */

undefined8 FUN_00085ef2(void)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 extraout_ECX;
  int iVar3;
  bool bVar4;
  ulonglong uVar5;
  
  uVar5 = FUN_0002e044();
  iVar3 = (int)(uVar5 >> 0x20);
  if ((char)uVar5 != -1) {
    uVar1 = (uint)uVar5 & 0x70;
    if (uVar1 == 0x20) {
      uVar2 = *(undefined4 *)(iVar3 + 4);
      goto LAB_00085f36;
    }
    if (uVar1 < 0x21) {
      if ((uVar5 & 0x70) == 0) goto LAB_00085f34;
      bVar4 = uVar1 == 0x10;
    }
    else {
      if (uVar1 == 0x30) {
        uVar2 = *(undefined4 *)(iVar3 + 8);
        goto LAB_00085f36;
      }
      bVar4 = uVar1 == 0x50;
    }
    if (!bVar4) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
  }
LAB_00085f34:
  uVar2 = 0;
LAB_00085f36:
  return CONCAT44(extraout_ECX,uVar2);
}

