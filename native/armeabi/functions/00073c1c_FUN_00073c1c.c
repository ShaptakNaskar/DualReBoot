/* 00073c1c | FUN_00073c1c */

uint FUN_00073c1c(int *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  int *piVar4;
  int *local_38;
  undefined4 local_34;
  undefined4 local_30;
  int local_2c;
  undefined4 local_28;
  uint local_24;
  
  piVar4 = (int *)((int)param_1 + *(int *)(*param_1 + -8));
  uVar3 = *(undefined4 *)(*piVar4 + -4);
  uVar1 = FUN_00073a34(piVar4,uVar3,0,param_3);
  if (uVar1 == 0) {
    return 0;
  }
  if (param_4 != -2) {
    if ((uVar1 != 0xffffffff) && (-1 < param_4)) {
      return (int)param_1 - param_4;
    }
    local_28 = 0;
    local_24 = 0;
    local_38 = param_1;
    local_34 = param_2;
    local_30 = param_3;
    local_2c = param_4;
    if (uVar1 != 0xffffffff) {
      FUN_00073b1c(uVar1,param_3,&local_38);
    }
    else {
      FUN_00073b1c(piVar4,uVar3,&local_38);
    }
    if (local_24 - 1 < 0xfffffffe) {
      return local_24;
    }
  }
  uVar2 = 0;
  if (uVar1 != 0xffffffff) {
    piVar4 = (int *)FUN_00073a34(piVar4,uVar3,param_1,param_2);
    uVar2 = -(uint)(param_1 == piVar4) & uVar1;
  }
  return uVar2;
}

