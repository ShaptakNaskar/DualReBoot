/* 000351d8 | STG::FFileManager_Android::SetAssetManager */

/* STG::FFileManager_Android::SetAssetManager(_JNIEnv*, _jobject*) */

void STG::FFileManager_Android::SetAssetManager(_JNIEnv *param_1,_jobject *param_2)

{
  int iVar1;
  undefined4 uVar2;
  int in_r2;
  
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  if (param_2 != (_jobject *)0x0 && in_r2 != 0) {
    iVar1 = (**(code **)(*(int *)param_2 + 0x54))(param_2);
    *(int *)(param_1 + 0x40) = iVar1;
    if (iVar1 != 0) {
      uVar2 = AAssetManager_fromJava(param_2,iVar1);
      *(undefined4 *)(param_1 + 0x3c) = uVar2;
      return;
    }
  }
  return;
}

