/* 00083760 | FUN_00083760 */

uint FUN_00083760(int *param_1)

{
  byte bVar1;
  uint uVar2;
  byte bVar3;
  uint uVar4;
  byte *pbVar5;
  
  uVar4 = 0;
  pbVar5 = (byte *)*param_1;
  uVar2 = 0;
  do {
    bVar1 = *pbVar5;
    pbVar5 = pbVar5 + 1;
    bVar3 = (byte)uVar4;
    uVar4 = uVar4 + 7;
    uVar2 = uVar2 | (bVar1 & 0x7f) << (bVar3 & 0x1f);
  } while ((char)bVar1 < '\0');
  *param_1 = (int)pbVar5;
  if (((bVar1 & 0x40) != 0) && (uVar4 < 0x20)) {
    uVar2 = uVar2 | -1 << ((byte)uVar4 & 0x1f);
  }
  return uVar2;
}

