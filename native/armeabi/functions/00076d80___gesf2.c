/* 00076d80 | __gesf2 */

uint __gesf2(uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  bool bVar5;
  
  uVar1 = param_1 * 2;
  uVar2 = param_2 * 2;
  if (((int)uVar1 >> 0x18 == -1 || (int)uVar2 >> 0x18 == -1) &&
     ((((int)uVar1 >> 0x18 == -1 && ((param_1 & 0x7fffff) != 0)) ||
      (((int)uVar2 >> 0x18 == -1 && ((param_2 & 0x7fffff) != 0)))))) {
    return 0xffffffff;
  }
  bVar4 = (param_2 & 0x7fffffff) == 0;
  bVar5 = uVar1 == 0 && bVar4;
  uVar3 = 0;
  if (uVar1 != 0 || !bVar4) {
    uVar3 = param_1 ^ param_2;
    bVar5 = uVar3 == 0;
  }
  bVar4 = -1 < (int)uVar3;
  if (bVar4) {
    param_1 = uVar1 + param_2 * -2;
    bVar5 = param_1 == 0;
  }
  if ((bVar4 && uVar1 >= uVar2) && !bVar5) {
    param_1 = (int)param_2 >> 0x1f;
  }
  if (!bVar4 || uVar1 < uVar2) {
    param_1 = ~((int)param_2 >> 0x1f);
  }
  if (!bVar5) {
    param_1 = param_1 | 1;
  }
  return param_1;
}

