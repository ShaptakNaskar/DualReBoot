/* 00075c58 | FUN_00075c58 */

uint FUN_00075c58(int *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  int *piVar4;
  byte local_19 [5];
  
  iVar1 = (**(code **)(*param_1 + 0x10))(param_1,param_2,param_3,param_4,local_19);
  if (iVar1 == 0) {
    piVar4 = (int *)param_1[3];
    if ((piVar4 == (int *)0x0) ||
       (piVar2 = (int *)FUN_00073c1c(piVar4,*(undefined4 *)(DAT_00075cbc + 0x75c88),
                                     DAT_00075cc0 + 0x75c8c,0), piVar2 == (int *)0x0)) {
      uVar3 = (**(code **)(*piVar4 + 8))(piVar4,*(undefined4 *)(param_2 + 0xc),param_3);
    }
    else {
      uVar3 = (**(code **)(*piVar2 + 0xc))(piVar2,*(undefined4 *)(param_2 + 0xc),param_3,param_4);
    }
  }
  else {
    uVar3 = (uint)local_19[0];
  }
  return uVar3;
}

