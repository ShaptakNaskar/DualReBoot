/* 0006f8c0 | FUN_0006f8c0 */

void FUN_0006f8c0(int *param_1,int *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  
  iVar5 = param_3[4];
  iVar1 = FUN_00070508(param_2,param_3[2]);
  if (iVar1 != 0) {
    param_3[4] = (int)param_1;
  }
  if (((param_1 == (int *)*param_3) && (param_3[4] != 0)) &&
     (iVar1 = FUN_00070508(param_2,param_3[1]), iVar1 != 0)) {
    if (param_3[5] != 0) {
      iVar1 = param_3[4];
      param_3[4] = iVar5;
      if (param_3[5] != iVar1) {
        param_3[5] = -1;
      }
      return;
    }
    iVar1 = param_3[4];
    param_3[4] = iVar5;
    param_3[5] = iVar1;
    return;
  }
  iVar1 = (**(code **)(*param_2 + 0xc))(param_2);
  if (iVar1 == 1) {
    FUN_0006f8c0(param_1,param_2[2],param_3);
  }
  else if (iVar1 == 2) {
    uVar3 = param_2[3];
    iVar1 = *param_1;
    if (uVar3 != 0) {
      uVar4 = 0;
      piVar7 = param_2;
      do {
        uVar6 = uVar4 + 1;
        uVar4 = param_2[uVar4 * 2 + 5];
        iVar2 = (int)uVar4 >> 8;
        if ((uVar4 & 2) != 0) {
          if ((int)(uVar4 << 0x1f) < 0) {
            iVar2 = *(int *)(iVar1 + iVar2);
          }
          FUN_0006f8c0(iVar2 + (int)param_1,piVar7[4],param_3);
          if (param_3[5] == -1) break;
          uVar3 = param_2[3];
        }
        piVar7 = piVar7 + 2;
        uVar4 = uVar6;
      } while (uVar6 < uVar3);
    }
  }
  else if (iVar1 != 0) {
    __assert2(DAT_0006f990 + 0x6f900,0x105,DAT_0006f994 + 0x6f902,DAT_0006f998 + 0x6f904);
  }
  param_3[4] = iVar5;
  return;
}

