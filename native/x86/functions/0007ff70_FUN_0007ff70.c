/* 0007ff70 | FUN_0007ff70 */

int __regparm2 FUN_0007ff70(int param_1,int *param_2,int param_3,undefined4 param_4)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int unaff_EBX;
  int iVar4;
  uint uVar5;
  
  FUN_0002e044();
  while( true ) {
    cVar1 = FUN_00081700(param_2,param_4);
    if (cVar1 != '\0') {
      if ((param_3 != param_1) && (param_3 != 0)) {
        param_1 = 0;
      }
      return param_1;
    }
    iVar2 = (**(code **)(*param_2 + 0xc))(param_2);
    if (iVar2 != 1) break;
    param_2 = (int *)param_2[2];
  }
  if (iVar2 == 2) {
    if (param_2[3] == 0) {
      return 0;
    }
    uVar5 = 0;
    iVar2 = 0;
    while ((iVar4 = iVar2, (param_2[uVar5 * 2 + 5] & 2U) == 0 ||
           ((iVar3 = FUN_0007ff70(param_3,param_4), iVar3 != -1 &&
            (((iVar3 == 0 || (iVar4 = iVar3, iVar2 == 0)) || (iVar4 = iVar2, iVar2 == iVar3))))))) {
      uVar5 = uVar5 + 1;
      iVar2 = iVar4;
      if ((uint)param_2[3] <= uVar5) {
        return iVar4;
      }
    }
    return -1;
  }
  if (iVar2 == 0) {
    return 0;
  }
  __assert2(unaff_EBX + 0x7cf3,0xad,unaff_EBX + 0x8d23,unaff_EBX + 0x75e5);
  return 0;
}

