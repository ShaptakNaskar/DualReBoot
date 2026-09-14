/* 00085e2d | FUN_00085e2d */

void __regparm2 FUN_00085e2d(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  uVar5 = *(uint *)(param_3 + 4);
  iVar1 = param_3 + 8;
  uVar4 = uVar5 >> 1;
  iVar3 = iVar1;
  while (uVar4 = uVar4 - 1, -1 < (int)uVar4) {
    iVar3 = FUN_00085da1(iVar1,uVar4,uVar5,iVar3,uVar5,param_2,param_1);
  }
  while (uVar5 = uVar5 - 1, 0 < (int)uVar5) {
    uVar2 = *(undefined4 *)(param_3 + 8);
    *(undefined4 *)(param_3 + 8) = *(undefined4 *)(param_3 + 8 + uVar5 * 4);
    *(undefined4 *)(param_3 + 8 + uVar5 * 4) = uVar2;
    FUN_00085da1(iVar1,0,uVar5,uVar2);
  }
  return;
}

