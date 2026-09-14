/* 00034a24 | STG::FFileManager_Android::ClearAssetManager */

/* STG::FFileManager_Android::ClearAssetManager(_JNIEnv*) */

void __thiscall
STG::FFileManager_Android::ClearAssetManager(FFileManager_Android *this,_JNIEnv *param_1)

{
  if ((param_1 != (_JNIEnv *)0x0) && (*(int *)(this + 0x40) != 0)) {
    (**(code **)(*(int *)param_1 + 0x58))(param_1);
  }
  *(undefined4 *)(this + 0x3c) = 0;
  *(undefined4 *)(this + 0x40) = 0;
  return;
}

