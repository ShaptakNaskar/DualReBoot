/* 0007f560 | FUN_0007f560 */

void FUN_0007f560(undefined4 *param_1)

{
  int iVar1;
  int unaff_EBX;
  
  iVar1 = FUN_0002e044();
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 4) = 1;
  if (iVar1 != 0) {
    iVar1 = FUN_00080240(iVar1,"_ZN3STG11GETimeOfDayaSERKS0_" + unaff_EBX + 0x1c,
                         *(undefined4 *)("_ZN3STG17UPreference_SceneC1Ev" + unaff_EBX + 2),0);
    if (iVar1 != 0) {
      param_1[3] = *(undefined4 *)(iVar1 + 8);
    }
  }
  return;
}

