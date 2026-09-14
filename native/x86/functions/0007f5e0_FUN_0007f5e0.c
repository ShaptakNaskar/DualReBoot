/* 0007f5e0 | FUN_0007f5e0 */

undefined4 FUN_0007f5e0(undefined4 param_1,int param_2,undefined4 *param_3)

{
  char cVar1;
  int *piVar2;
  int unaff_EBX;
  undefined4 uVar3;
  int local_30 [2];
  undefined4 local_28;
  
  FUN_0002e044();
  cVar1 = FUN_00081700(param_1,param_2);
  uVar3 = 1;
  if ((cVar1 == '\0') && (uVar3 = 0, param_2 != 0)) {
    piVar2 = (int *)FUN_00080240(param_2,*(undefined4 *)
                                          ("_ZN3STG7GEScene11SetLocationERKNS_9MLocationE" +
                                          unaff_EBX + 0x16),
                                 "_ZN3STG15GETimeOfDayAuto6UpdateERKNS_5UTime10TimeStructILNS1_10ETimeValueE0EEERKNS2_ILS3_1EEE"
                                 + unaff_EBX + 2,0);
    if (piVar2 != (int *)0x0) {
      FUN_0007f560(local_30,param_1);
      (**(code **)(*piVar2 + 0x10))(piVar2,param_1,param_3,local_30);
      if (local_30[0] == 1) {
        uVar3 = 1;
        *param_3 = local_28;
      }
    }
  }
  return uVar3;
}

