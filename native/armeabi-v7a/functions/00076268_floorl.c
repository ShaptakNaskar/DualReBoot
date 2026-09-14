/* 00076268 | floorl */

double floorl(double __x)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  uVar4 = (uint)((ulonglong)__x >> 0x20);
  uVar6 = SUB84(__x,0);
  uVar2 = (uVar4 & 0x7fffffff) >> 0x14;
  uVar3 = uVar2 - 0x3ff;
  if ((int)uVar3 < 0x14) {
    if ((int)uVar3 < 0) {
      if (__x + DAT_000763b8 <= 0.0) {
        return __x;
      }
      if ((longlong)__x < 0) {
        if (((ulonglong)__x & 0x7fffffff00000000) == 0 && uVar6 == 0) {
          return __x;
        }
        return -1.0;
      }
      return 0.0;
    }
    uVar2 = 0xfffff >> (uVar3 & 0xff);
    if ((uVar2 & uVar4) == 0 && uVar6 == 0) {
      return __x;
    }
    if (__x + DAT_000763b8 <= 0.0) {
      return __x;
    }
    if ((longlong)__x < 0) {
      uVar4 = uVar4 + (0x100000 >> (uVar3 & 0xff));
    }
    return (double)((ulonglong)(uVar4 & ~uVar2) << 0x20);
  }
  if (0x33 < (int)uVar3) {
    if (uVar3 != 0x400) {
      return __x;
    }
    return __x + __x;
  }
  uVar1 = 0xffffffff >> (uVar2 - 0x413 & 0xff);
  if ((uVar1 & uVar6) == 0) {
    return __x;
  }
  if (__x + DAT_000763b8 <= 0.0) {
    return __x;
  }
  if ((longlong)__x < 0) {
    uVar5 = uVar6;
    if (uVar3 != 0x14) {
      uVar5 = uVar6 + (1 << (0x433 - uVar2 & 0xff));
      __x = (double)CONCAT44(uVar4,uVar5);
      if (uVar6 <= uVar5) goto LAB_00076334;
    }
    __x = (double)CONCAT44(uVar4 + 1,uVar5);
  }
LAB_00076334:
  return (double)CONCAT44((int)((ulonglong)__x >> 0x20),SUB84(__x,0) & ~uVar1);
}

