/* 00073a34 | FUN_00073a34 */

int * FUN_00073a34(int *param_1,int *param_2,int *param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  
  while( true ) {
    iVar1 = FUN_000747cc(param_2,param_4);
    if (iVar1 != 0) {
      if (param_3 == param_1) {
        return param_1;
      }
      return (int *)((uint)param_1 & -(uint)(param_3 == (int *)0x0));
    }
    iVar1 = (**(code **)(*param_2 + 0xc))(param_2);
    if (iVar1 != 1) break;
    param_2 = (int *)param_2[2];
  }
  if (iVar1 != 2) {
    if (iVar1 == 0) {
      return (int *)0x0;
    }
    __assert2(DAT_00073b10 + 0x73a86,0xad,DAT_00073b14 + 0x73a88,DAT_00073b18 + 0x73a8a);
    return (int *)0x0;
  }
  iVar1 = *param_1;
  uVar4 = param_2[3];
  if (uVar4 != 0) {
    uVar6 = 0;
    piVar7 = param_2;
    piVar8 = (int *)0x0;
    do {
      uVar5 = param_2[(uVar6 + 2) * 2 + 1];
      piVar9 = piVar8;
      if ((uVar5 & 2) != 0) {
        iVar2 = (int)uVar5 >> 8;
        if ((uVar5 & 1) != 0) {
          iVar2 = *(int *)(iVar1 + iVar2);
        }
        piVar3 = (int *)FUN_00073a34(iVar2 + (int)param_1,piVar7[4],param_3,param_4);
        if (piVar3 == (int *)0xffffffff) {
          return (int *)0xffffffff;
        }
        if (((piVar3 != (int *)0x0) && (piVar9 = piVar3, piVar8 != (int *)0x0)) &&
           (piVar9 = piVar8, piVar8 != piVar3)) {
          return (int *)0xffffffff;
        }
        uVar4 = param_2[3];
      }
      uVar6 = uVar6 + 1;
      piVar7 = piVar7 + 2;
      piVar8 = piVar9;
      if (uVar4 <= uVar6) {
        return piVar9;
      }
    } while( true );
  }
  return (int *)0x0;
}

