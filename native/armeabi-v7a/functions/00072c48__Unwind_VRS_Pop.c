/* 00072c48 | _Unwind_VRS_Pop */

undefined4 _Unwind_VRS_Pop(uint *param_1,undefined4 param_2,uint param_3,int param_4)

{
  uint uVar1;
  undefined4 *puVar2;
  uint *puVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  uint uVar7;
  int iVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  undefined4 auStack_228 [28];
  undefined4 local_1b8 [4];
  undefined1 auStack_1a8 [128];
  undefined4 auStack_128 [32];
  undefined4 auStack_a8 [35];
  
  switch(param_2) {
  case 0:
    if (param_4 != 0) {
      return 2;
    }
    puVar3 = (uint *)param_1[0xe];
    uVar7 = 0;
    do {
      if ((param_3 & 0xffff & 1 << (uVar7 & 0xff)) != 0) {
        param_1[uVar7 + 1] = *puVar3;
        puVar3 = puVar3 + 1;
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 != 0x10);
    if ((param_3 & 0x2000) != 0) {
      return 0;
    }
    param_1[0xe] = (uint)puVar3;
    return 0;
  case 1:
    if (param_4 != 1 && param_4 != 5) {
      return 2;
    }
    uVar7 = param_3 >> 0x10;
    param_3 = param_3 & 0xffff;
    uVar4 = param_3 + uVar7;
    if (param_4 == 1) {
      uVar1 = 0x10;
    }
    else {
      uVar1 = 0x20;
    }
    if (uVar1 < uVar4) {
      return 2;
    }
    bVar10 = param_4 == 1;
    if (uVar7 >= 0x10 && bVar10) {
      return 2;
    }
    uVar1 = param_3;
    if ((uVar7 < 0x10) && (uVar1 = 0, 0x10 < uVar4)) {
      uVar1 = uVar4 - 0x10;
    }
    bVar9 = uVar1 != 0;
    if (bVar9 && param_4 != 5) {
      return 2;
    }
    if ((uVar7 < 0x10) && (uVar4 = *param_1, (uVar4 & 1) != 0)) {
      *param_1 = uVar4 & 0xfffffffe;
      if (param_4 == 5) {
        *param_1 = uVar4 & 0xfffffffe | 2;
        __gnu_Unwind_Save_VFP_D();
      }
      else {
        *param_1 = uVar4 & 0xfffffffc;
        __gnu_Unwind_Save_VFP(param_1 + 0x12);
      }
    }
    if ((bVar9) && ((*param_1 & 4) != 0)) {
      *param_1 = *param_1 & 0xfffffffb;
      __gnu_Unwind_Save_VFP_D_16_to_31(param_1 + 0x34);
    }
    if (bVar10) {
      __gnu_Unwind_Save_VFP(auStack_a8);
      if (!bVar9) goto LAB_00072de0;
    }
    else {
      if (uVar7 < 0x10) {
        __gnu_Unwind_Save_VFP_D(auStack_a8);
      }
      if (!bVar9) goto LAB_00072de0;
      __gnu_Unwind_Save_VFP_D_16_to_31(auStack_1a8);
    }
    param_3 = 0x10 - uVar7;
LAB_00072de0:
    puVar5 = (undefined4 *)param_1[0xe];
    if (0 < (int)param_3) {
      iVar8 = param_3 * 2;
      puVar2 = auStack_a8 + uVar7 * 2;
      puVar6 = puVar5;
      while (bVar11 = iVar8 != 0, iVar8 = iVar8 + -1, bVar11) {
        *puVar2 = *puVar6;
        puVar2 = puVar2 + 1;
        puVar6 = puVar6 + 1;
      }
      puVar5 = puVar5 + param_3 * 2;
    }
    if (bVar9) {
      uVar4 = uVar7;
      if (uVar7 < 0x10) {
        uVar4 = 0x10;
      }
      iVar8 = uVar1 * 2;
      puVar2 = auStack_228 + uVar4 * 2;
      puVar6 = puVar5;
      while (bVar11 = iVar8 != 0, iVar8 = iVar8 + -1, bVar11) {
        *puVar2 = *puVar6;
        puVar2 = puVar2 + 1;
        puVar6 = puVar6 + 1;
      }
      puVar5 = puVar5 + uVar1 * 2;
    }
    if (bVar10) {
      puVar5 = puVar5 + 1;
    }
    param_1[0xe] = (uint)puVar5;
    if (bVar10) {
      __gnu_Unwind_Restore_VFP(auStack_a8);
    }
    else {
      if (uVar7 < 0x10) {
        __gnu_Unwind_Restore_VFP_D(auStack_a8);
      }
      if (!bVar9) {
        return 0;
      }
      __gnu_Unwind_Restore_VFP_D_16_to_31(auStack_1a8);
    }
    return 0;
  case 2:
    return 1;
  case 3:
    if (param_4 == 3) {
      uVar7 = param_3 & 0xffff;
      if (uVar7 + (param_3 >> 0x10) < 0x11) {
        if ((*param_1 & 8) != 0) {
          *param_1 = *param_1 & 0xfffffff7;
          __gnu_Unwind_Save_WMMXD(param_1 + 0x6c);
        }
        __gnu_Unwind_Save_WMMXD(auStack_128);
        puVar6 = (undefined4 *)param_1[0xe];
        puVar5 = puVar6;
        puVar2 = auStack_128 + (param_3 >> 0x10) * 2;
        for (iVar8 = uVar7 * 2; iVar8 != 0; iVar8 = iVar8 + -1) {
          *puVar2 = *puVar5;
          puVar5 = puVar5 + 1;
          puVar2 = puVar2 + 1;
        }
        param_1[0xe] = (uint)(puVar6 + uVar7 * 2);
        __gnu_Unwind_Restore_WMMXD(auStack_128);
        return 0;
      }
    }
    break;
  case 4:
    bVar10 = param_3 == 0x10;
    if (param_3 < 0x11) {
      bVar10 = param_4 == 0;
    }
    if (bVar10) {
      if ((*param_1 & 0x10) != 0) {
        *param_1 = *param_1 & 0xffffffef;
        __gnu_Unwind_Save_WMMXC(param_1 + 0x8c);
      }
      __gnu_Unwind_Save_WMMXC(local_1b8);
      puVar5 = (undefined4 *)param_1[0xe];
      uVar7 = 0;
      do {
        if ((param_3 & 1 << (uVar7 & 0xff)) != 0) {
          local_1b8[uVar7] = *puVar5;
          puVar5 = puVar5 + 1;
        }
        uVar7 = uVar7 + 1;
      } while (uVar7 != 4);
      param_1[0xe] = (uint)puVar5;
      __gnu_Unwind_Restore_WMMXC(local_1b8);
      return 0;
    }
  }
  return 2;
}

