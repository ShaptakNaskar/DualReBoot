/* 0006f99c | FUN_0006f99c */

uint FUN_0006f99c(int *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  uint uVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  int *local_38;
  undefined4 uStack_34;
  undefined4 local_30;
  int local_2c;
  uint local_28;
  uint local_24;
  
  iVar4 = (int)param_1 + *(int *)(*param_1 + -8);
  uVar5 = *(undefined4 *)(*(int *)((int)param_1 + *(int *)(*param_1 + -8)) + -4);
  uVar1 = FUN_0006f7e4(iVar4,uVar5,0,param_3);
  if (uVar1 == 0) {
    return 0;
  }
  if (param_4 != -2) {
    local_28 = (uint)(uVar1 != 0xffffffff);
    if (param_4 < 0) {
      local_28 = 0;
    }
    if (local_28 != 0) {
      return (int)param_1 - param_4;
    }
    local_38 = param_1;
    uStack_34 = param_2;
    local_30 = param_3;
    local_2c = param_4;
    local_24 = local_28;
    if ((uVar1 != 0xffffffff) == 0) {
      FUN_0006f8c0(iVar4,uVar5,&local_38);
    }
    else {
      FUN_0006f8c0(uVar1,param_3,&local_38);
    }
    if (local_24 - 1 < 0xfffffffe) {
      return local_24;
    }
  }
  uVar3 = 0;
  if ((uVar1 != 0xffffffff) &&
     (piVar2 = (int *)FUN_0006f7e4(iVar4,uVar5,param_1,param_2), uVar3 = uVar1, param_1 != piVar2))
  {
    uVar3 = 0;
  }
  return uVar3;
}

