/* 0006f7e4 | FUN_0006f7e4 */

int * FUN_0006f7e4(int *param_1,int *param_2,int *param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  int *piVar8;
  undefined4 uVar9;
  
  uVar9 = param_4;
  while( true ) {
    iVar1 = FUN_00070508(param_2,param_4);
    if (iVar1 != 0) {
      uVar4 = 1 - (int)param_3;
      if ((int *)0x1 < param_3) {
        uVar4 = 0;
      }
      if (param_3 == param_1) {
        uVar4 = uVar4 | 1;
      }
      if (uVar4 == 0) {
        param_1 = (int *)0x0;
      }
      return param_1;
    }
    iVar1 = (**(code **)(*param_2 + 0xc))(param_2);
    if (iVar1 != 1) break;
    param_2 = (int *)param_2[2];
  }
  if (iVar1 != 2) {
    if (iVar1 == 0) {
      return (int *)0x0;
    }
    __assert2(DAT_0006f8b4 + 0x6f826,0xad,DAT_0006f8b8 + 0x6f828,DAT_0006f8bc + 0x6f82a);
    return (int *)0x0;
  }
  uVar4 = param_2[3];
  iVar1 = *param_1;
  if (uVar4 == 0) {
    return (int *)0x0;
  }
  uVar6 = 0;
  piVar7 = param_2;
  piVar8 = (int *)0x0;
  do {
    iVar5 = param_2[uVar6 * 2 + 5];
    piVar3 = piVar8;
    if (iVar5 << 0x1e < 0) {
      iVar2 = iVar5 >> 8;
      if (iVar5 << 0x1f < 0) {
        iVar2 = *(int *)(iVar1 + iVar2);
      }
      piVar3 = (int *)FUN_0006f7e4((int)param_1 + iVar2,piVar7[4],param_3,param_4,uVar9);
      if (piVar3 == (int *)0xffffffff) {
        return (int *)0xffffffff;
      }
      if (piVar3 != (int *)0x0) {
        if (piVar8 == (int *)0x0) {
          uVar4 = param_2[3];
          goto LAB_0006f872;
        }
        if (piVar8 != piVar3) {
          return (int *)0xffffffff;
        }
      }
      uVar4 = param_2[3];
      piVar3 = piVar8;
    }
LAB_0006f872:
    uVar6 = uVar6 + 1;
    piVar7 = piVar7 + 2;
    piVar8 = piVar3;
    if (uVar4 <= uVar6) {
      return piVar3;
    }
  } while( true );
}

