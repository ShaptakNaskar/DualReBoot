/* 00083d60 | FUN_00083d60 */

undefined4 FUN_00083d60(int *param_1,int *param_2,undefined4 param_3,uint param_4)

{
  char cVar1;
  undefined4 uVar2;
  int unaff_EBX;
  
  FUN_0002e044();
  cVar1 = FUN_00081700(param_1,param_2);
  if (cVar1 == '\0') {
    if (param_2 == (int *)0x0) {
      FUN_00083ea0();
      FUN_0002e044("_ZN3STG18FFileManagerScoped5CloseERPNS_9FFileBaseE" + unaff_EBX + 0x2a,0);
      uVar2 = FUN_0007fa60(4);
      FUN_00081730(uVar2);
                    /* WARNING: Subroutine does not return */
      FUN_0007fb60(uVar2,*(undefined4 *)(unaff_EBX + 0x30410),*(undefined4 *)(unaff_EBX + 0x3040c));
    }
    cVar1 = FUN_00081710(*(undefined4 *)(*param_1 + -4),*(undefined4 *)(*param_2 + -4));
    if (((cVar1 == '\0') && ((param_2[2] & ~param_1[2]) == 0)) &&
       ((param_4 == 1 || ((param_4 & 4) == 0)))) {
      uVar2 = FUN_00083c90();
      return uVar2;
    }
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}

