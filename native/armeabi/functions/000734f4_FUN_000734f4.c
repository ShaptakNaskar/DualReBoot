/* 000734f4 | FUN_000734f4 */

undefined4 FUN_000734f4(undefined4 param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int local_2c [2];
  undefined4 local_24;
  
  iVar1 = FUN_000747cc();
  uVar3 = 1;
  if (((iVar1 == 0) && (uVar3 = 0, param_2 != 0)) &&
     (piVar2 = (int *)FUN_00073c1c(param_2,*(undefined4 *)(DAT_00073550 + 0x73516),
                                   DAT_00073554 + 0x7351c,0), piVar2 != (int *)0x0)) {
    FUN_000734b4(local_2c,param_1);
    (**(code **)(*piVar2 + 0x10))(piVar2,param_1,param_3,local_2c);
    if (local_2c[0] == 1) {
      *param_3 = local_24;
      uVar3 = 1;
    }
  }
  return uVar3;
}

