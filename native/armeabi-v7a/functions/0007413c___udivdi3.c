/* 0007413c | __udivdi3 */

undefined8 __udivdi3(uint param_1,uint param_2,uint param_3,uint param_4)

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
  
  if (param_4 == 0) {
    if (param_3 <= param_2) {
      if (param_3 == 0) {
        param_3 = __udivsi3(1,0);
      }
      iVar3 = LZCOUNT(param_3);
      if (iVar3 == 0) {
        iVar3 = param_2 - param_3;
        uVar6 = 1;
      }
      else {
        param_3 = param_3 << iVar3;
        uVar5 = param_2 >> (0x20U - iVar3 & 0xff);
        uVar7 = param_3 >> 0x10;
        uVar6 = param_1 >> (0x20U - iVar3 & 0xff) | param_2 << iVar3;
        param_1 = param_1 << iVar3;
        __aeabi_uidivmod(uVar5,uVar7);
        iVar3 = __udivsi3(uVar5,uVar7);
        uVar4 = uVar6 >> 0x10 | extraout_r1_01 << 0x10;
        uVar5 = (param_3 & 0xffff) * iVar3;
        iVar1 = iVar3;
        if (uVar4 < uVar5) {
          bVar11 = CARRY4(uVar4,param_3);
          uVar4 = uVar4 + param_3;
          iVar1 = iVar3 + -1;
          if ((!bVar11) && (uVar4 < uVar5)) {
            uVar4 = uVar4 + param_3;
            iVar1 = iVar3 + -2;
          }
        }
        __aeabi_uidivmod(uVar4 - uVar5,uVar7);
        uVar7 = __udivsi3(uVar4 - uVar5,uVar7);
        uVar4 = uVar6 & 0xffff | extraout_r1_02 << 0x10;
        uVar5 = (param_3 & 0xffff) * uVar7;
        uVar6 = uVar7;
        if (uVar4 < uVar5) {
          bVar11 = CARRY4(uVar4,param_3);
          uVar4 = uVar4 + param_3;
          uVar6 = uVar7 - 1;
          if ((!bVar11) && (uVar4 < uVar5)) {
            uVar4 = uVar4 + param_3;
            uVar6 = uVar7 - 2;
          }
        }
        iVar3 = uVar4 - uVar5;
        uVar6 = uVar6 | iVar1 << 0x10;
      }
      uVar7 = param_3 >> 0x10;
      __aeabi_uidivmod(iVar3,uVar7);
      iVar1 = __udivsi3(iVar3,uVar7);
      uVar4 = param_1 >> 0x10 | extraout_r1_03 << 0x10;
      uVar5 = (param_3 & 0xffff) * iVar1;
      iVar3 = iVar1;
      if (uVar4 < uVar5) {
        bVar11 = CARRY4(uVar4,param_3);
        uVar4 = uVar4 + param_3;
        iVar3 = iVar1 + -1;
        if ((!bVar11) && (uVar4 < uVar5)) {
          uVar4 = uVar4 + param_3;
          iVar3 = iVar1 + -2;
        }
      }
      __aeabi_uidivmod(uVar4 - uVar5,uVar7);
      uVar5 = __udivsi3(uVar4 - uVar5,uVar7);
      uVar8 = param_1 & 0xffff | extraout_r1_04 << 0x10;
      uVar4 = (param_3 & 0xffff) * uVar5;
      uVar7 = uVar5;
      if (uVar8 < uVar4) {
        uVar7 = uVar5 - 1;
        if ((!CARRY4(uVar8,param_3)) && (uVar8 + param_3 < uVar4)) {
          uVar7 = uVar5 - 2;
        }
      }
      uVar7 = uVar7 | iVar3 << 0x10;
      goto LAB_00074538;
    }
    iVar3 = LZCOUNT(param_3);
    uVar6 = param_2;
    uVar7 = param_1;
    uVar4 = param_3;
    uVar5 = param_3;
    if (iVar3 != 0) {
      uVar5 = param_3 << iVar3;
      uVar4 = param_1 >> (0x20U - iVar3 & 0xff);
      uVar7 = param_1 << iVar3;
      uVar6 = uVar4 | param_2 << iVar3;
    }
    uVar8 = uVar5 >> 0x10;
    __aeabi_uidivmod(uVar6,uVar8,uVar4,iVar3,param_1,param_2,param_3);
    iVar1 = __udivsi3(uVar6,uVar8);
    uVar6 = uVar7 >> 0x10 | extraout_r1 << 0x10;
    uVar4 = (uVar5 & 0xffff) * iVar1;
    iVar3 = iVar1;
    if (uVar6 < uVar4) {
      bVar11 = CARRY4(uVar6,uVar5);
      uVar6 = uVar6 + uVar5;
      iVar3 = iVar1 + -1;
      if ((!bVar11) && (uVar6 < uVar4)) {
        uVar6 = uVar6 + uVar5;
        iVar3 = iVar1 + -2;
      }
    }
    __aeabi_uidivmod(uVar6 - uVar4,uVar8);
    uVar4 = __udivsi3(uVar6 - uVar4,uVar8);
    uVar8 = uVar7 & 0xffff | extraout_r1_00 << 0x10;
    uVar6 = (uVar5 & 0xffff) * uVar4;
    uVar7 = uVar4;
    if (uVar8 < uVar6) {
      uVar7 = uVar4 - 1;
      if ((!CARRY4(uVar8,uVar5)) && (uVar8 + uVar5 < uVar6)) {
        uVar7 = uVar4 - 2;
      }
    }
    uVar7 = uVar7 | iVar3 << 0x10;
LAB_00074520:
    uVar6 = 0;
  }
  else {
    if (param_4 <= param_2) {
      iVar3 = LZCOUNT(param_4);
      if (iVar3 != 0) {
        uVar7 = 0x20 - iVar3;
        uVar4 = param_2 >> (uVar7 & 0xff);
        uVar6 = param_3 >> (uVar7 & 0xff) | param_4 << iVar3;
        uVar8 = param_1 >> (uVar7 & 0xff) | param_2 << iVar3;
        uVar7 = uVar6 >> 0x10;
        uVar5 = param_3 << iVar3;
        __aeabi_uidivmod(uVar4,uVar7,uVar5,param_4,param_1,uVar5,param_3);
        iVar2 = __udivsi3(uVar4,uVar7);
        uVar9 = uVar8 >> 0x10 | extraout_r1_05 << 0x10;
        uVar4 = (uVar6 & 0xffff) * iVar2;
        iVar1 = iVar2;
        if (uVar9 < uVar4) {
          bVar11 = CARRY4(uVar9,uVar6);
          uVar9 = uVar9 + uVar6;
          iVar1 = iVar2 + -1;
          if ((!bVar11) && (uVar9 < uVar4)) {
            uVar9 = uVar9 + uVar6;
            iVar1 = iVar2 + -2;
          }
        }
        __aeabi_uidivmod(uVar9 - uVar4,uVar7);
        iVar2 = extraout_r1_06;
        uVar4 = __udivsi3(uVar9 - uVar4,uVar7);
        uVar8 = uVar8 & 0xffff | iVar2 << 0x10;
        uVar9 = (uVar6 & 0xffff) * uVar4;
        uVar7 = uVar4;
        if (uVar8 < uVar9) {
          bVar11 = CARRY4(uVar8,uVar6);
          uVar8 = uVar8 + uVar6;
          uVar7 = uVar4 - 1;
          if ((!bVar11) && (uVar8 < uVar9)) {
            uVar8 = uVar8 + uVar6;
            uVar7 = uVar4 - 2;
          }
        }
        uVar8 = uVar8 - uVar9;
        uVar7 = uVar7 | iVar1 << 0x10;
        uVar4 = uVar7 >> 0x10;
        uVar6 = uVar5 >> 0x10;
        uVar10 = uVar7 & ~(uVar4 << 0x10);
        uVar5 = uVar5 & ~(uVar6 << 0x10);
        uVar9 = uVar10 * uVar5;
        uVar5 = uVar4 * uVar5;
        uVar10 = uVar6 * uVar10;
        iVar1 = uVar4 * uVar6;
        uVar4 = uVar5 + uVar10;
        if (CARRY4(uVar5,uVar10)) {
          iVar1 = iVar1 + 0x10000;
        }
        uVar5 = uVar4 * 0x10000;
        uVar4 = iVar1 + (uVar4 >> 0x10) + (uint)CARRY4(uVar9,uVar5);
        if ((uVar4 < uVar8 || uVar4 == uVar8) &&
           (uVar6 = 0, uVar9 + uVar5 <= param_1 << iVar3 || uVar4 != uVar8)) goto LAB_00074538;
        uVar7 = uVar7 - 1;
        goto LAB_00074520;
      }
      bVar11 = param_4 <= param_2;
      if (param_2 <= param_4) {
        bVar11 = param_3 <= param_1;
      }
      if (bVar11) {
        uVar6 = 0;
        uVar7 = 1;
        goto LAB_00074538;
      }
    }
    uVar6 = 0;
    uVar7 = uVar6;
  }
LAB_00074538:
  return CONCAT44(uVar6,uVar7);
}

