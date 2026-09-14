/* 00083730 | FUN_00083730 */

uint FUN_00083730(int *param_1)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte *pbVar4;
  uint uVar5;
  
  bVar3 = 0;
  uVar5 = 0;
  pbVar4 = (byte *)*param_1;
  do {
    bVar1 = *pbVar4;
    pbVar4 = pbVar4 + 1;
    bVar2 = bVar3 & 0x1f;
    bVar3 = bVar3 + 7;
    uVar5 = uVar5 | (bVar1 & 0x7f) << bVar2;
  } while ((char)bVar1 < '\0');
  *param_1 = (int)pbVar4;
  return uVar5;
}

