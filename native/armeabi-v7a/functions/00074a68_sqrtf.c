/* 00074a68 | sqrtf */

float sqrtf(float __x)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  
  if (((uint)__x & 0x7f800000) == 0x7f800000) {
    return __x + __x * __x;
  }
  if ((int)__x < 1) {
    if (ABS(__x) == 0.0) {
      return __x;
    }
    if (__x != 0.0) {
      return (__x - __x) / (__x - __x);
    }
  }
  else if ((int)__x >> 0x17 != 0) {
    uVar5 = ((int)__x >> 0x17) - 0x7f;
    uVar1 = uVar5 & 1;
    iVar7 = ((int)uVar5 >> 1) << 0x17;
    goto LAB_00074ab0;
  }
  iVar7 = 0;
  if (((uint)__x & 0x800000) == 0) {
    do {
      __x = (float)((int)__x << 1);
      iVar7 = iVar7 + 1;
    } while (((uint)__x & 0x800000) == 0);
    uVar1 = -iVar7 - 0x7eU & 1;
    iVar7 = ((int)(-iVar7 - 0x7eU) >> 1) << 0x17;
  }
  else {
    uVar1 = 0;
    iVar7 = -0x1f800000;
  }
LAB_00074ab0:
  uVar5 = (uint)__x & 0x7fffff | 0x800000;
  uVar6 = 0;
  iVar8 = 0;
  iVar3 = 0x19;
  if (uVar1 != 0) {
    uVar5 = uVar5 << 1;
  }
  uVar1 = 0x1000000;
  iVar4 = uVar5 << 1;
  do {
    iVar2 = iVar8 + uVar1;
    if (iVar2 <= iVar4) {
      iVar4 = iVar4 - iVar2;
      iVar8 = iVar2 + uVar1;
      uVar6 = uVar6 + uVar1;
    }
    iVar3 = iVar3 + -1;
    iVar4 = iVar4 * 2;
    uVar1 = uVar1 >> 1;
  } while (iVar3 != 0);
  if (iVar4 != 0) {
    uVar6 = uVar6 + (uVar6 & 1);
  }
  return (float)(iVar7 + ((int)uVar6 >> 1) + 0x3f000000);
}

