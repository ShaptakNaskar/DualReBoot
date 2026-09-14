/* 00071a2c | FUN_00071a2c */

uint FUN_00071a2c(int *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  int *piVar4;
  byte *pbVar5;
  byte local_19;
  
  pbVar5 = &local_19;
  iVar1 = (**(code **)(*param_1 + 0x10))();
  uVar2 = (uint)local_19;
  if (iVar1 == 0) {
    piVar4 = (int *)param_1[3];
    if ((piVar4 == (int *)0x0) ||
       (piVar3 = (int *)FUN_0006f99c(piVar4,*(undefined4 *)(DAT_00071a88 + 0x71a5e),
                                     DAT_00071a8c + 0x71a62,0,pbVar5), piVar3 == (int *)0x0)) {
      uVar2 = (**(code **)(*piVar4 + 8))(piVar4,*(undefined4 *)(param_2 + 0xc),param_3);
    }
    else {
      uVar2 = (**(code **)(*piVar3 + 0xc))(piVar3,*(undefined4 *)(param_2 + 0xc),param_3,param_4);
    }
  }
  return uVar2;
}

