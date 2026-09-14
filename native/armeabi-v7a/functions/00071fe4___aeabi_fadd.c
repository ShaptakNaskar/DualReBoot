/* 00071fe4 | __aeabi_fadd */

uint __aeabi_fadd(uint param_1,uint param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  bool bVar9;
  
  uVar4 = param_1 << 1;
  bVar9 = uVar4 == 0;
  if (!bVar9) {
    param_4 = param_2 << 1;
    bVar9 = param_4 == 0;
  }
  if (!bVar9) {
    bVar9 = uVar4 == param_4;
  }
  iVar1 = (int)uVar4 >> 0x18;
  if (!bVar9) {
    bVar9 = iVar1 == -1;
  }
  if (!bVar9) {
    bVar9 = (int)param_4 >> 0x18 == -1;
  }
  if (bVar9) {
    iVar2 = (int)(param_2 << 1) >> 0x18;
    if (iVar1 == -1 || iVar2 == -1) {
      uVar4 = param_2;
      if (iVar1 == -1) {
        uVar4 = param_1;
      }
      if (iVar1 != -1 || iVar2 != -1) {
        param_2 = uVar4;
      }
      if (((uVar4 & 0x7fffff) != 0 || (param_2 & 0x7fffff) != 0) || uVar4 != param_2) {
        uVar4 = uVar4 | 0x400000;
      }
      return uVar4;
    }
    if (uVar4 != param_2 << 1) {
      if (uVar4 == 0) {
        param_1 = param_2;
      }
      return param_1;
    }
    if (param_1 != param_2) {
      return 0;
    }
    if ((uVar4 & 0xff000000) == 0) {
      uVar4 = param_1 << 1;
      if (SUB41(param_1 >> 0x1f,0)) {
        uVar4 = uVar4 | 0x80000000;
      }
      return uVar4;
    }
    if (uVar4 < 0xfe000000) {
      return param_1 + 0x800000;
    }
    param_1 = param_1 & 0x80000000;
LAB_00072144:
    return param_1 | 0x7f800000;
  }
  uVar4 = (param_1 & 0x7fffffff) >> 0x17;
  param_4 = param_4 >> 0x18;
  uVar8 = param_4 - uVar4;
  uVar5 = param_2;
  uVar7 = uVar4;
  if (uVar8 != 0 && uVar4 <= param_4) {
    uVar7 = uVar4 + uVar8;
    uVar5 = param_1;
    param_1 = param_2;
  }
  if (param_4 < uVar4) {
    uVar8 = -uVar8;
  }
  if (0x19 < uVar8) {
    return param_1;
  }
  uVar4 = param_1 & 0xffffff | 0x800000;
  if ((param_1 & 0x80000000) != 0) {
    uVar4 = -uVar4;
  }
  uVar6 = uVar5 & 0xffffff | 0x800000;
  if ((uVar5 & 0x80000000) != 0) {
    uVar6 = -uVar6;
  }
  if (uVar7 == uVar8) {
    uVar6 = uVar6 ^ 0x800000;
    if (uVar7 == 0) {
      uVar4 = uVar4 ^ 0x800000;
      uVar7 = 1;
    }
    else {
      uVar8 = uVar8 - 1;
    }
  }
  uVar4 = uVar4 + ((int)uVar6 >> (uVar8 & 0xff));
  uVar6 = uVar6 << (0x20 - uVar8 & 0xff);
  param_1 = uVar4 & 0x80000000;
  if ((int)uVar4 < 0) {
    bVar9 = uVar6 != 0;
    uVar6 = -uVar6;
    uVar4 = -(uVar4 + bVar9);
  }
  if (uVar4 < 0x800000) {
    iVar1 = (int)uVar6 >> 0x1f;
    uVar6 = uVar6 << 1;
    uVar4 = uVar4 * 2 - iVar1;
    uVar8 = uVar7 - 2;
    if ((uVar4 & 0x800000) == 0) {
      uVar7 = LZCOUNT(uVar4) - 8;
      uVar4 = uVar4 << (uVar7 & 0xff);
      if ((int)uVar8 < (int)uVar7) {
        uVar4 = uVar4 >> (-(uVar8 - uVar7) & 0xff);
      }
      else {
        uVar4 = uVar4 + (uVar8 - uVar7) * 0x800000;
      }
      return uVar4 | param_1;
    }
  }
  else {
    uVar8 = uVar7 - 1;
    if (0xffffff < uVar4) {
      bVar3 = (byte)uVar4;
      uVar4 = uVar4 >> 1;
      uVar6 = (uint)(bVar3 & 1) << 0x1f | uVar6 >> 1;
      uVar8 = uVar7;
      if (0xfd < uVar7) goto LAB_00072144;
    }
  }
  uVar4 = uVar4 + uVar8 * 0x800000 + (uint)(0x7fffffff < uVar6);
  if (uVar6 == 0x80000000) {
    uVar4 = uVar4 & 0xfffffffe;
  }
  return uVar4 | param_1;
}

