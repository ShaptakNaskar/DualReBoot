/* 00084210 | FUN_00084210 */

void __regparm3 FUN_00084210(byte *param_1,uint *param_2)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  
  bVar3 = 0;
  uVar4 = 0;
  do {
    bVar1 = *param_1;
    param_1 = param_1 + 1;
    bVar2 = bVar3 & 0x1f;
    bVar3 = bVar3 + 7;
    uVar4 = uVar4 | (bVar1 & 0x7f) << bVar2;
  } while ((char)bVar1 < '\0');
  *param_2 = uVar4;
  return;
}

