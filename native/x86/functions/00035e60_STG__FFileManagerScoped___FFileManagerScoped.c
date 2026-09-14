/* 00035e60 | STG::FFileManagerScoped::~FFileManagerScoped */

/* STG::FFileManagerScoped::~FFileManagerScoped() */

void __thiscall STG::FFileManagerScoped::~FFileManagerScoped(FFileManagerScoped *this)

{
  char *pcVar1;
  FFileManager_Android *this_00;
  int iVar2;
  int unaff_EBX;
  
  FUN_0002e044();
  pcVar1 = *(char **)(unaff_EBX + 0x65feb);
  this_00 = *(FFileManager_Android **)(unaff_EBX + 0x65fef);
  if (*pcVar1 == '\0') {
    iVar2 = FUN_00080eb0(pcVar1);
    if (iVar2 != 0) {
      iVar2 = *(int *)(unaff_EBX + 0x65fcb) + 8;
      *(FFileManager_Android **)(this_00 + 0x18) = this_00 + 8;
      *(int *)(this_00 + 4) = iVar2;
      *(int *)(this_00 + 0x20) = iVar2;
      *(FFileManager_Android **)(this_00 + 0x34) = this_00 + 0x24;
      *(FFileManager_Android **)(this_00 + 0x38) = this_00 + 0x24;
      iVar2 = *(int *)(unaff_EBX + 0x65ff3);
      *(FFileManager_Android **)(this_00 + 0x1c) = this_00 + 8;
      *(int *)this_00 = iVar2 + 8;
      this_00[8] = (FFileManager_Android)0x0;
      this_00[0x24] = (FFileManager_Android)0x0;
      *(undefined4 *)(this_00 + 0x3c) = 0;
      *(undefined4 *)(this_00 + 0x40) = 0;
      FUN_00080f40(pcVar1);
      __cxa_atexit(*(undefined4 *)(unaff_EBX + 0x65ffb),this_00,*(undefined4 *)(unaff_EBX + 0x65ff7)
                  );
    }
  }
  FFileManager_Android::ClearAssetManager(this_00,*(_JNIEnv **)this);
  FFileManager::ClearBasePath((FFileManager *)this_00);
  return;
}

