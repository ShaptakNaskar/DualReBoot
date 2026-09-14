/* 00083c90 | FUN_00083c90 */

uint FUN_00083c90(int *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  char cVar2;
  int *piVar3;
  uint uVar4;
  int unaff_EBX;
  byte local_1d [13];
  
  FUN_0002e044();
  cVar2 = (**(code **)(*param_1 + 0x10))(param_1,param_2,param_3,param_4,local_1d);
  if (cVar2 == '\0') {
    piVar1 = (int *)param_1[3];
    if ((piVar1 != (int *)0x0) &&
       (piVar3 = (int *)FUN_00080240(piVar1,*(undefined4 *)
                                             ("_ZTIN3STG20FFileManager_AndroidE" + unaff_EBX + 0x12)
                                     ,"_ZN3STG20FFileManager_Android15SetAssetManagerEP7_JNIEnvP8_jobject"
                                      + unaff_EBX + 10,0), piVar3 != (int *)0x0)) {
      uVar4 = (**(code **)(*piVar3 + 0xc))(piVar3,*(undefined4 *)(param_2 + 0xc),param_3,param_4);
      return uVar4;
    }
    uVar4 = (**(code **)(*piVar1 + 8))(piVar1,*(undefined4 *)(param_2 + 0xc),param_3);
  }
  else {
    uVar4 = (uint)local_1d[0];
  }
  return uVar4;
}

