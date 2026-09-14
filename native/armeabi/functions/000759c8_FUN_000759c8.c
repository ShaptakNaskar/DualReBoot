/* 000759c8 | FUN_000759c8 */

uint FUN_000759c8(undefined4 *param_1)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  byte *pbVar4;
  
  pbVar4 = (byte *)*param_1;
  uVar3 = 0;
  uVar2 = 0;
  do {
    bVar1 = *pbVar4;
    pbVar4 = pbVar4 + 1;
    uVar2 = uVar2 | (bVar1 & 0x7f) << (uVar3 & 0xff);
    uVar3 = uVar3 + 7;
  } while ((int)((uint)bVar1 << 0x18) < 0);
  *param_1 = pbVar4;
  return uVar2;
}

