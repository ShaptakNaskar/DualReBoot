/* 000714c0 | __cxa_type_match */

undefined4 __cxa_type_match(int param_1,int *param_2,undefined4 param_3,int *param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  int local_1c [2];
  
  uVar3 = *(uint *)(param_1 + -0x34);
  local_1c[0] = param_1 + 0x58;
  if ((uVar3 == 0) ||
     (iVar1 = FUN_0006f99c(uVar3,*(undefined4 *)(DAT_0007152c + 0x714e4),
                           *(undefined4 *)(DAT_00071530 + 0x714e8),0), iVar1 == 0)) {
    uVar4 = 1;
  }
  else {
    local_1c[0] = *(int *)(param_1 + 0x58);
    uVar4 = 2;
  }
  uVar2 = 1 - uVar3;
  if (1 < uVar3) {
    uVar2 = 0;
  }
  if (param_2 == (int *)0x0) {
    uVar2 = uVar2 | 1;
  }
  if (uVar2 == 0) {
    iVar1 = (**(code **)(*param_2 + 8))(param_2,uVar3,local_1c);
    if (iVar1 == 0) {
      uVar4 = 0;
    }
    else {
      *param_4 = local_1c[0];
    }
  }
  else {
    uVar4 = 0;
  }
  return uVar4;
}

