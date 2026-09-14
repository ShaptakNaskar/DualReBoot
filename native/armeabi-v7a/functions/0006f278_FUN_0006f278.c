/* 0006f278 | FUN_0006f278 */

undefined4 FUN_0006f278(undefined4 param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int local_2c [2];
  undefined4 local_24;
  
  iVar1 = FUN_00070508();
  uVar2 = 1;
  if (((iVar1 == 0) && (uVar2 = 0, param_2 != 0)) &&
     (piVar3 = (int *)FUN_0006f99c(param_2,*(undefined4 *)(DAT_0006f2d8 + 0x6f29e),
                                   DAT_0006f2dc + 0x6f2a2,0), uVar2 = 0, piVar3 != (int *)0x0)) {
    FUN_0006f240(local_2c,param_1);
    (**(code **)(*piVar3 + 0x10))(piVar3,param_1,param_3,local_2c);
    if (local_2c[0] == 1) {
      *param_3 = local_24;
      uVar2 = 1;
    }
    else {
      uVar2 = 0;
    }
  }
  return uVar2;
}

