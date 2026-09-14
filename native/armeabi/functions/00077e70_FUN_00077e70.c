/* 00077e70 | FUN_00077e70 */

undefined4 FUN_00077e70(undefined4 *param_1,undefined4 param_2)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  
  pcVar1 = DAT_00077ea4;
  do {
    uVar3 = *param_1;
    iVar2 = (*pcVar1)(uVar3,param_2,param_1);
  } while (iVar2 != 0);
  return uVar3;
}

