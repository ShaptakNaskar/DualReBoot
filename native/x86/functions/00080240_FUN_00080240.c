/* 00080240 | FUN_00080240 */

int FUN_00080240(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int local_24;
  undefined4 local_20;
  undefined4 local_1c;
  int local_18;
  undefined4 local_14;
  int local_10;
  
  iVar1 = FUN_0007ff70(0,param_3);
  if (iVar1 == 0) {
    return 0;
  }
  if (param_4 != -2) {
    if ((iVar1 != -1) && (-1 < param_4)) {
      return param_1 - param_4;
    }
    local_20 = param_2;
    local_1c = param_3;
    local_24 = param_1;
    local_18 = param_4;
    local_14 = 0;
    local_10 = 0;
    if (iVar1 != -1) {
      FUN_000800c0(&local_24);
    }
    else {
      FUN_000800c0(&local_24);
    }
    if (local_10 - 1U < 0xfffffffe) {
      return local_10;
    }
  }
  iVar3 = 0;
  if (iVar1 != -1) {
    iVar2 = FUN_0007ff70(param_1,param_2);
    iVar3 = 0;
    if (param_1 == iVar2) {
      iVar3 = iVar1;
    }
  }
  return iVar3;
}

