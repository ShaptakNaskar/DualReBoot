/* 00074880 | sqrtl */

double sqrtl(double __x)

{
  double dVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  bool bVar13;
  
  uVar4 = (uint)((ulonglong)__x >> 0x20);
  if ((uVar4 & 0x7ff00000) == 0x7ff00000) {
    return __x + __x * __x;
  }
  if ((longlong)__x < 0x100000000) {
    if (((ulonglong)__x & 0x7fffffff00000000) == 0 && SUB84(__x,0) == 0) {
      return __x;
    }
    dVar1 = __x;
    if (uVar4 != 0) {
      return (__x - __x) / (__x - __x);
    }
    do {
      uVar4 = SUB84(dVar1,0) >> 0xb;
      iVar5 = (int)((ulonglong)dVar1 >> 0x20) + -0x15;
      iVar2 = SUB84(dVar1,0) << 0x15;
      __x = (double)CONCAT44(uVar4,iVar2);
      dVar1 = (double)CONCAT44(iVar5,iVar2);
    } while (uVar4 == 0);
LAB_00074a1c:
    uVar9 = (uint)((ulonglong)__x >> 0x20);
    uVar3 = uVar9 & 0x100000;
    if (((ulonglong)__x & 0x10000000000000) == 0) {
      do {
        uVar9 = uVar9 << 1;
        uVar3 = uVar3 + 1;
      } while ((uVar9 & 0x100000) == 0);
      iVar2 = 1 - uVar3;
      uVar10 = 0x20 - uVar3;
    }
    else {
      uVar10 = 0x20;
      iVar2 = 1;
      uVar3 = 0;
    }
    uVar4 = iVar5 + iVar2;
    __x = (double)CONCAT44(uVar9 | SUB84(__x,0) >> (uVar10 & 0xff),SUB84(__x,0) << (uVar3 & 0xff));
  }
  else {
    uVar4 = (int)uVar4 >> 0x14;
    iVar5 = 0;
    if (uVar4 == 0) goto LAB_00074a1c;
  }
  iVar2 = SUB84(__x,0);
  uVar9 = (uint)((ulonglong)__x >> 0x20) & 0xfffff | 0x100000;
  if ((uVar4 & 1) == 0) {
    iVar5 = iVar2 >> 0x1f;
    iVar2 = iVar2 << 1;
    uVar9 = uVar9 * 2 - iVar5;
  }
  uVar3 = iVar2 << 1;
  iVar5 = uVar9 * 2 - (iVar2 >> 0x1f);
  uVar10 = 0;
  iVar11 = 0x16;
  iVar2 = 0;
  uVar9 = 0x200000;
  do {
    iVar6 = iVar2 + uVar9;
    iVar8 = (int)uVar3 >> 0x1f;
    uVar3 = uVar3 << 1;
    if (iVar6 <= iVar5) {
      iVar5 = iVar5 - iVar6;
      iVar2 = iVar6 + uVar9;
      uVar10 = uVar10 + uVar9;
    }
    iVar11 = iVar11 + -1;
    iVar5 = iVar5 * 2 - iVar8;
    uVar9 = uVar9 >> 1;
  } while (iVar11 != 0);
  iVar8 = 0x20;
  uVar9 = 0x80000000;
  iVar11 = 0;
  uVar12 = 0;
  do {
    uVar7 = uVar9 + iVar11;
    iVar6 = iVar2;
    if (iVar2 < iVar5) {
LAB_00074988:
      iVar11 = uVar7 + uVar9;
      if (((uVar7 & 0x80000000) == 0x80000000) && (-1 < iVar11)) {
        iVar6 = iVar2 + 1;
      }
      iVar5 = iVar5 - iVar2;
      if (uVar3 < uVar7) {
        iVar5 = iVar5 + -1;
      }
      uVar3 = uVar3 - uVar7;
      uVar12 = uVar12 + uVar9;
    }
    else {
      bVar13 = uVar7 == uVar3;
      if (uVar7 <= uVar3) {
        bVar13 = iVar5 == iVar2;
      }
      if (bVar13) goto LAB_00074988;
    }
    iVar8 = iVar8 + -1;
    uVar9 = uVar9 >> 1;
    iVar5 = iVar5 * 2 - ((int)uVar3 >> 0x1f);
    uVar3 = uVar3 << 1;
    iVar2 = iVar6;
  } while (iVar8 != 0);
  if (uVar3 != 0 || iVar5 != 0) {
    if (uVar12 == 0xffffffff) {
      uVar10 = uVar10 + 1;
      uVar12 = 0;
      goto LAB_000749c8;
    }
    uVar12 = (uVar12 & 1) + uVar12;
  }
  uVar12 = uVar12 >> 1;
LAB_000749c8:
  if ((uVar10 & 1) != 0) {
    uVar12 = uVar12 | 0x80000000;
  }
  return (double)CONCAT44(((int)uVar10 >> 1) + 0x3fe00000 + ((int)(uVar4 - 0x3ff) >> 1) * 0x100000,
                          uVar12);
}

