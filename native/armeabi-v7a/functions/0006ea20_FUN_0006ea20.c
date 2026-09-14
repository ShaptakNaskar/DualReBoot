/* 0006ea20 | FUN_0006ea20 */

byte * FUN_0006ea20(byte *param_1,byte *param_2,int param_3,int *param_4)

{
  byte *pbVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  iVar3 = 0;
  pbVar1 = param_1;
  while (pbVar1 < param_2) {
    uVar4 = (uint)*pbVar1;
    uVar2 = uVar4 - 0x30;
    if (9 < uVar2) {
      uVar2 = uVar4 - 0x61;
      if ((5 < uVar2) && (uVar2 = uVar4 - 0x41, 5 < uVar2)) break;
      uVar2 = uVar2 + 10;
    }
    if (param_3 <= (int)uVar2) break;
    iVar3 = param_3 * iVar3 + uVar2;
    pbVar1 = pbVar1 + 1;
  }
  if (pbVar1 == param_1) {
    pbVar1 = (byte *)0x0;
  }
  else {
    *param_4 = iVar3;
  }
  return pbVar1;
}

