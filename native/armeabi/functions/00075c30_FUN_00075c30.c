/* 00075c30 | FUN_00075c30 */

undefined4 FUN_00075c30(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 extraout_r2;
  
  iVar1 = (**(code **)(*param_1 + 0xc))();
  uVar2 = 1;
  if (iVar1 == 0) {
    uVar2 = FUN_000747cc(param_2,*(undefined4 *)(DAT_00075c54 + 0x75c4c),extraout_r2,0,param_4);
  }
  return uVar2;
}

