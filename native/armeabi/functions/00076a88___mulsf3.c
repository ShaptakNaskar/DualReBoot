/* 00076a88 | __mulsf3 */

uint __mulsf3(uint param_1,uint param_2,undefined4 param_3,uint param_4)

{
  uint uVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  bool bVar10;
  bool bVar11;
  
  uVar4 = param_1 >> 0x17 & 0xff;
  bVar10 = uVar4 == 0;
  if (!bVar10) {
    param_4 = param_2 >> 0x17 & 0xff;
    bVar10 = param_4 == 0;
  }
  if (!bVar10) {
    bVar10 = uVar4 == 0xff;
  }
  if (!bVar10) {
    bVar10 = param_4 == 0xff;
  }
  if (bVar10) {
    param_4 = param_2 >> 0x17 & 0xff;
    if (uVar4 == 0xff || param_4 == 0xff) {
      uVar3 = param_2;
      if (param_1 != 0 && param_1 != 0x80000000) {
        uVar3 = param_1;
      }
      uVar6 = uVar3;
      if (((((param_1 == 0 || param_1 == 0x80000000) || param_2 == 0) || param_2 == 0x80000000) ||
          ((uVar4 == 0xff && ((uVar3 & 0x7fffff) != 0)))) ||
         ((param_4 == 0xff && (uVar6 = param_2, (param_2 & 0x7fffff) != 0)))) {
        return uVar6 | 0x7fc00000;
      }
      uVar3 = uVar3 ^ param_2;
      goto LAB_00076c04;
    }
    if ((param_1 & 0x7fffffff) == 0 || (param_2 & 0x7fffffff) == 0) {
      return (param_1 ^ param_2) & 0x80000000;
    }
    bVar10 = uVar4 == 0;
    uVar3 = param_1 & 0x80000000;
    while( true ) {
      if (bVar10) {
        param_1 = param_1 << 1;
        bVar10 = (param_1 & 0x800000) == 0;
      }
      if (!bVar10) break;
      uVar4 = uVar4 - 1;
    }
    param_1 = param_1 | uVar3;
    bVar10 = param_4 == 0;
    uVar3 = param_2 & 0x80000000;
    while( true ) {
      if (bVar10) {
        param_2 = param_2 << 1;
        bVar10 = (param_2 & 0x800000) == 0;
      }
      if (!bVar10) break;
      param_4 = param_4 - 1;
    }
    param_2 = param_2 | uVar3;
  }
  iVar5 = uVar4 + param_4;
  uVar4 = param_1 ^ param_2;
  bVar10 = param_1 << 9 == 0;
  if (!bVar10) {
    param_2 = param_2 << 9;
    bVar10 = param_2 == 0;
  }
  if (bVar10) {
    if (param_1 << 9 == 0) {
      param_2 = param_2 << 9;
    }
    uVar3 = uVar4 & 0x80000000 | param_1 & 0x7fffff | param_2 >> 9;
    bVar11 = SBORROW4(iVar5,0x7f);
    iVar7 = iVar5 + -0x7f;
    bVar10 = iVar7 == 0;
    iVar8 = iVar7;
    if (!bVar10 && 0x7e < iVar5) {
      bVar11 = SBORROW4(0xff,iVar7);
      iVar8 = -iVar7 + 0xff;
      bVar10 = -iVar7 == -0xff;
    }
    if (!bVar10 && iVar8 < 0 == bVar11) {
      return uVar3 | iVar7 * 0x800000;
    }
    uVar3 = uVar3 | 0x800000;
    uVar9 = 0;
    bVar11 = SBORROW4(iVar7,1);
    uVar6 = iVar5 - 0x80;
    bVar10 = uVar6 == 0;
    uVar4 = uVar6;
  }
  else {
    lVar2 = (ulonglong)(param_2 >> 5 | 0x8000000) *
            (ulonglong)((param_1 & 0x7fffff) << 4 | 0x8000000);
    bVar10 = (uint)((ulonglong)lVar2 >> 0x20) < 0x800000;
    if (bVar10) {
      lVar2 = lVar2 * 2;
    }
    uVar9 = (uint)lVar2;
    uVar3 = uVar4 & 0x80000000 | (uint)((ulonglong)lVar2 >> 0x20);
    uVar6 = iVar5 - (bVar10 + 0x7f);
    bVar11 = SBORROW4(uVar6,0xfd);
    bVar10 = uVar6 == 0xfd;
    uVar4 = uVar6 - 0xfd;
    if (uVar6 < 0xfe) {
      uVar4 = uVar3 + uVar6 * 0x800000 + (uint)(0x7fffffff < uVar9);
      if (uVar9 == 0x80000000) {
        uVar4 = uVar4 & 0xfffffffe;
      }
      return uVar4;
    }
  }
  if (bVar10 || (int)uVar4 < 0 != bVar11) {
    if (-0x19 < (int)uVar6) {
      uVar1 = (uVar3 << 1) >> (-uVar6 & 0xff);
      uVar4 = uVar3 << (uVar6 + 0x20 & 0xff);
      uVar3 = (uVar3 & 0x80000000 | uVar1 >> 1) + (uint)((byte)uVar1 & 1);
      if (uVar9 == 0 && (uVar4 & 0x7fffffff) == 0) {
        uVar3 = uVar3 & ~(uVar4 >> 0x1f);
      }
      return uVar3;
    }
    return uVar3 & 0x80000000;
  }
LAB_00076c04:
  return uVar3 & 0x80000000 | 0x7f800000;
}

