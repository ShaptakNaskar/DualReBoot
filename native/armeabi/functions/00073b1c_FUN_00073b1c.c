/* 00073b1c | FUN_00073b1c */

void FUN_00073b1c(int *param_1,int *param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  int *piVar6;
  uint uVar7;
  
  uVar3 = param_3[4];
  iVar1 = FUN_000747cc(param_2,param_3[2]);
  if (iVar1 != 0) {
    param_3[4] = param_1;
  }
  if (((param_1 == (int *)*param_3) && (param_3[4] != 0)) &&
     (iVar1 = FUN_000747cc(param_2,param_3[1]), iVar1 != 0)) {
    if (param_3[5] == 0) {
      param_3[5] = param_3[4];
    }
    else if (param_3[5] != param_3[4]) {
      param_3[5] = 0xffffffff;
    }
    param_3[4] = uVar3;
  }
  else {
    iVar1 = (**(code **)(*param_2 + 0xc))(param_2);
    if (iVar1 == 1) {
      FUN_00073b1c(param_1,param_2[2],param_3);
    }
    else if (iVar1 == 2) {
      uVar4 = param_2[3];
      iVar1 = *param_1;
      if (uVar4 != 0) {
        uVar7 = 0;
        piVar6 = param_2;
        do {
          uVar5 = param_2[(uVar7 + 2) * 2 + 1];
          if ((uVar5 & 2) != 0) {
            iVar2 = (int)uVar5 >> 8;
            if ((uVar5 & 1) != 0) {
              iVar2 = *(int *)(iVar1 + iVar2);
            }
            FUN_00073b1c(iVar2 + (int)param_1,piVar6[4],param_3);
            if (param_3[5] == -1) break;
            uVar4 = param_2[3];
          }
          uVar7 = uVar7 + 1;
          piVar6 = piVar6 + 2;
        } while (uVar7 < uVar4);
      }
    }
    else if (iVar1 != 0) {
      __assert2(DAT_00073c0c + 0x73b68,DAT_00073c18,DAT_00073c10 + 0x73b6a,DAT_00073c14 + 0x73b6c);
    }
    param_3[4] = uVar3;
  }
  return;
}

