/* 0007945c | __divdi3 */

undefined8 __divdi3(uint param_1,uint param_2,uint param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  int extraout_r1;
  int extraout_r1_00;
  int extraout_r1_01;
  int extraout_r1_02;
  int extraout_r1_03;
  int extraout_r1_04;
  int extraout_r1_05;
  int extraout_r1_06;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  bool bVar11;
  uint local_2c;
  
  if ((int)param_2 < 0) {
    bVar11 = param_1 != 0;
    param_1 = -param_1;
    param_2 = -(param_2 + bVar11);
    local_2c = 0xffffffff;
  }
  else {
    local_2c = 0;
  }
  if ((int)param_4 < 0) {
    local_2c = ~local_2c;
    bVar11 = param_3 != 0;
    param_3 = -param_3;
    param_4 = -(param_4 + bVar11);
  }
  if (param_4 == 0) {
    if (param_3 <= param_2) {
      if (param_3 == 0) {
        param_3 = __udivsi3(1,0);
      }
      iVar3 = LZCOUNT(param_3);
      if (iVar3 == 0) {
        iVar3 = param_2 - param_3;
        uVar7 = 1;
      }
      else {
        param_3 = param_3 << iVar3;
        uVar4 = param_2 >> (0x20U - iVar3 & 0xff);
        uVar5 = param_3 >> 0x10;
        uVar6 = param_1 >> (0x20U - iVar3 & 0xff) | param_2 << iVar3;
        param_1 = param_1 << iVar3;
        __aeabi_uidivmod(uVar4,uVar5);
        iVar3 = __udivsi3(uVar4,uVar5);
        uVar8 = uVar6 >> 0x10 | extraout_r1_01 << 0x10;
        uVar4 = (param_3 & 0xffff) * iVar3;
        iVar1 = iVar3;
        if (uVar8 < uVar4) {
          bVar11 = CARRY4(uVar8,param_3);
          uVar8 = uVar8 + param_3;
          iVar1 = iVar3 + -1;
          if ((!bVar11) && (uVar8 < uVar4)) {
            uVar8 = uVar8 + param_3;
            iVar1 = iVar3 + -2;
          }
        }
        __aeabi_uidivmod(uVar8 - uVar4,uVar5);
        uVar5 = __udivsi3(uVar8 - uVar4,uVar5);
        uVar6 = uVar6 & 0xffff | extraout_r1_02 << 0x10;
        uVar4 = (param_3 & 0xffff) * uVar5;
        uVar7 = uVar5;
        if (uVar6 < uVar4) {
          bVar11 = CARRY4(uVar6,param_3);
          uVar6 = uVar6 + param_3;
          uVar7 = uVar5 - 1;
          if ((!bVar11) && (uVar6 < uVar4)) {
            uVar6 = uVar6 + param_3;
            uVar7 = uVar5 - 2;
          }
        }
        iVar3 = uVar6 - uVar4;
        uVar7 = uVar7 | iVar1 << 0x10;
      }
      uVar5 = param_3 >> 0x10;
      __aeabi_uidivmod(iVar3,uVar5);
      iVar1 = __udivsi3(iVar3,uVar5);
      uVar6 = param_1 >> 0x10 | extraout_r1_03 << 0x10;
      uVar4 = (param_3 & 0xffff) * iVar1;
      iVar3 = iVar1;
      if (uVar6 < uVar4) {
        bVar11 = CARRY4(uVar6,param_3);
        uVar6 = uVar6 + param_3;
        iVar3 = iVar1 + -1;
        if ((!bVar11) && (uVar6 < uVar4)) {
          uVar6 = uVar6 + param_3;
          iVar3 = iVar1 + -2;
        }
      }
      __aeabi_uidivmod(uVar6 - uVar4,uVar5);
      uVar4 = __udivsi3(uVar6 - uVar4,uVar5);
      uVar8 = param_1 & 0xffff | extraout_r1_04 << 0x10;
      uVar6 = uVar4 * (param_3 & 0xffff);
      uVar5 = uVar4;
      if (uVar8 < uVar6) {
        uVar5 = uVar4 - 1;
        if ((!CARRY4(uVar8,param_3)) && (uVar8 + param_3 < uVar6)) {
          uVar5 = uVar4 - 2;
        }
      }
      uVar5 = uVar5 | iVar3 << 0x10;
      goto LAB_000798bc;
    }
    iVar3 = LZCOUNT(param_3);
    if (iVar3 != 0) {
      param_3 = param_3 << iVar3;
      param_2 = param_1 >> (0x20U - iVar3 & 0xff) | param_2 << iVar3;
      param_1 = param_1 << iVar3;
    }
    uVar5 = param_3 >> 0x10;
    __aeabi_uidivmod(param_2,uVar5);
    iVar1 = __udivsi3(param_2,uVar5);
    uVar6 = param_1 >> 0x10 | extraout_r1 << 0x10;
    uVar4 = (param_3 & 0xffff) * iVar1;
    iVar3 = iVar1;
    if (uVar6 < uVar4) {
      bVar11 = CARRY4(uVar6,param_3);
      uVar6 = uVar6 + param_3;
      iVar3 = iVar1 + -1;
      if ((!bVar11) && (uVar6 < uVar4)) {
        uVar6 = uVar6 + param_3;
        iVar3 = iVar1 + -2;
      }
    }
    __aeabi_uidivmod(uVar6 - uVar4,uVar5);
    uVar4 = __udivsi3(uVar6 - uVar4,uVar5);
    uVar6 = param_1 & 0xffff | extraout_r1_00 << 0x10;
    uVar8 = uVar4 * (param_3 & 0xffff);
    uVar5 = uVar4;
    if (uVar6 < uVar8) {
      uVar5 = uVar4 - 1;
      if ((!CARRY4(uVar6,param_3)) && (uVar6 + param_3 < uVar8)) {
        uVar5 = uVar4 - 2;
      }
    }
    uVar5 = uVar5 | iVar3 << 0x10;
LAB_000798ac:
    uVar7 = 0;
  }
  else {
    if (param_4 <= param_2) {
      iVar3 = LZCOUNT(param_4);
      if (iVar3 != 0) {
        uVar6 = 0x20 - iVar3;
        uVar8 = param_3 >> (uVar6 & 0xff) | param_4 << iVar3;
        uVar4 = param_2 >> (uVar6 & 0xff);
        uVar5 = uVar8 >> 0x10;
        uVar6 = param_1 >> (uVar6 & 0xff) | param_2 << iVar3;
        __aeabi_uidivmod(uVar4,uVar5);
        iVar2 = __udivsi3(uVar4,uVar5);
        uVar9 = uVar6 >> 0x10 | extraout_r1_05 << 0x10;
        uVar4 = (uVar8 & 0xffff) * iVar2;
        iVar1 = iVar2;
        if (uVar9 < uVar4) {
          bVar11 = CARRY4(uVar9,uVar8);
          uVar9 = uVar9 + uVar8;
          iVar1 = iVar2 + -1;
          if ((!bVar11) && (uVar9 < uVar4)) {
            uVar9 = uVar9 + uVar8;
            iVar1 = iVar2 + -2;
          }
        }
        __aeabi_uidivmod(uVar9 - uVar4,uVar5);
        uVar4 = __udivsi3(uVar9 - uVar4,uVar5);
        uVar6 = uVar6 & 0xffff | extraout_r1_06 << 0x10;
        uVar9 = uVar4 * (uVar8 & 0xffff);
        uVar5 = uVar4;
        if (uVar6 < uVar9) {
          bVar11 = CARRY4(uVar6,uVar8);
          uVar6 = uVar6 + uVar8;
          uVar5 = uVar4 - 1;
          if ((!bVar11) && (uVar6 < uVar9)) {
            uVar6 = uVar6 + uVar8;
            uVar5 = uVar4 - 2;
          }
        }
        uVar6 = uVar6 - uVar9;
        uVar5 = uVar5 | iVar1 << 0x10;
        uVar4 = uVar5 >> 0x10;
        uVar8 = (param_3 << iVar3) >> 0x10;
        uVar10 = uVar5 & ~(uVar4 << 0x10);
        uVar7 = param_3 << iVar3 & ~(uVar8 << 0x10);
        uVar9 = uVar10 * uVar7;
        uVar7 = uVar4 * uVar7;
        uVar10 = uVar8 * uVar10;
        iVar1 = uVar4 * uVar8;
        uVar4 = uVar7 + uVar10;
        if (CARRY4(uVar7,uVar10)) {
          iVar1 = iVar1 + 0x10000;
        }
        uVar8 = uVar4 * 0x10000;
        uVar4 = iVar1 + (uVar4 >> 0x10) + (uint)CARRY4(uVar9,uVar8);
        if ((uVar4 < uVar6 || uVar4 == uVar6) &&
           (uVar7 = 0, uVar9 + uVar8 <= param_1 << iVar3 || uVar4 != uVar6)) goto LAB_000798bc;
        uVar5 = uVar5 - 1;
        goto LAB_000798ac;
      }
      bVar11 = param_4 <= param_2;
      if (param_2 <= param_4) {
        bVar11 = param_3 <= param_1;
      }
      if (bVar11) {
        uVar5 = 1;
        uVar7 = 0;
        goto LAB_000798bc;
      }
    }
    uVar5 = 0;
    uVar7 = uVar5;
  }
LAB_000798bc:
  if (local_2c != 0) {
    bVar11 = uVar5 != 0;
    uVar5 = -uVar5;
    uVar7 = -(uVar7 + bVar11);
  }
  return CONCAT44(uVar7,uVar5);
}

