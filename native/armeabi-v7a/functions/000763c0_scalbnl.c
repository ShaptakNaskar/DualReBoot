/* 000763c0 | scalbnl */

double scalbnl(double __x,int __n)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  double dVar4;
  
  uVar2 = (uint)((ulonglong)__x >> 0x20);
  uVar1 = (uVar2 & 0x7fffffff) >> 0x14;
  if (uVar1 == 0) {
    if (((ulonglong)__x & 0x7fffffff00000000) == 0 && SUB84(__x,0) == 0) {
      return __x;
    }
    __x = __x * DAT_000764d8;
    uVar2 = (uint)((ulonglong)__x >> 0x20);
    if (__n < -50000) {
      return __x * DAT_000764f0;
    }
    uVar1 = ((uVar2 & 0x7fffffff) >> 0x14) - 0x36;
  }
  else if (uVar1 == 0x7ff) {
    return __x + __x;
  }
  iVar3 = uVar1 + __n;
  if (iVar3 < 0x7ff) {
    if (0 < iVar3) {
      return (double)(((ulonglong)(uVar2 & 0x800fffff | iVar3 * 0x100000) << 0x20) +
                     ((ulonglong)__x & 0xffffffff));
    }
    if (-0x36 < iVar3) {
      return (double)(((ulonglong)(uVar2 & 0x800fffff | (iVar3 + 0x36) * 0x100000) << 0x20) +
                     ((ulonglong)__x & 0xffffffff)) * DAT_000764f8;
    }
    if (__n < 0xc351) {
      dVar4 = DAT_000764f0;
      if ((longlong)__x < 0) {
        dVar4 = DAT_00076500;
      }
      return dVar4 * DAT_000764f0;
    }
  }
  dVar4 = DAT_000764e0;
  if ((longlong)__x < 0) {
    dVar4 = DAT_000764e8;
  }
  return dVar4 * DAT_000764e0;
}

