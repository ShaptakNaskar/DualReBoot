/* 00071b58 | __udivsi3 */

uint __udivsi3(uint param_1,uint param_2)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  
  if (param_2 - 1 == 0) {
    return param_1;
  }
  if (param_2 == 0) {
    uVar1 = 0;
    if (param_1 != 0) {
      uVar1 = 0xffffffff;
    }
    uVar2 = __aeabi_ldiv0(uVar1);
    return uVar2;
  }
  if (param_1 <= param_2) {
    return (uint)(param_1 == param_2);
  }
  if ((param_2 & param_2 - 1) == 0) {
    return param_1 >> (0x1fU - LZCOUNT(param_2) & 0xff);
  }
  uVar3 = param_2 << (LZCOUNT(param_2) - LZCOUNT(param_1) & 0xffU);
  uVar2 = 1 << (LZCOUNT(param_2) - LZCOUNT(param_1) & 0xffU);
  uVar4 = 0;
  while( true ) {
    if (uVar3 <= param_1) {
      param_1 = param_1 - uVar3;
      uVar4 = uVar4 | uVar2;
    }
    if (uVar3 >> 1 <= param_1) {
      param_1 = param_1 - (uVar3 >> 1);
      uVar4 = uVar4 | uVar2 >> 1;
    }
    if (uVar3 >> 2 <= param_1) {
      param_1 = param_1 - (uVar3 >> 2);
      uVar4 = uVar4 | uVar2 >> 2;
    }
    if (uVar3 >> 3 <= param_1) {
      param_1 = param_1 - (uVar3 >> 3);
      uVar4 = uVar4 | uVar2 >> 3;
    }
    bVar5 = param_1 == 0;
    if (!bVar5) {
      uVar2 = uVar2 >> 4;
      bVar5 = uVar2 == 0;
    }
    if (bVar5) break;
    uVar3 = uVar3 >> 4;
  }
  return uVar4;
}

