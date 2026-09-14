/* 000757cc | __cxa_type_match */

undefined4 __cxa_type_match(int param_1,int *param_2,undefined4 param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int local_1c;
  
  local_1c = param_1 + 0x58;
  iVar2 = *(int *)(param_1 + -0x34);
  uVar3 = 1;
  if ((iVar2 != 0) &&
     (iVar1 = FUN_00073c1c(iVar2,*(undefined4 *)(DAT_00075834 + 0x757f2),
                           *(undefined4 *)(DAT_00075838 + 0x757f4),0), iVar1 != 0)) {
    local_1c = *(int *)(param_1 + 0x58);
    uVar3 = 2;
  }
  if (((param_2 == (int *)0x0) || (iVar2 == 0)) ||
     (iVar2 = (**(code **)(*param_2 + 8))(param_2,iVar2,&local_1c), iVar2 == 0)) {
    uVar3 = 0;
  }
  else {
    *param_4 = local_1c;
  }
  return uVar3;
}

