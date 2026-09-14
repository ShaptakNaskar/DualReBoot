/* 00035444 | STG::FFileManagerScoped::~FFileManagerScoped */

/* STG::FFileManagerScoped::~FFileManagerScoped() */

FFileManagerScoped * __thiscall
STG::FFileManagerScoped::~FFileManagerScoped(FFileManagerScoped *this)

{
  int iVar1;
  int iVar2;
  FFileManager_Android *this_00;
  int iVar3;
  uint *puVar4;
  
  iVar3 = DAT_00035514 + 0x3545c;
  puVar4 = *(uint **)(iVar3 + DAT_00035518);
  if ((*puVar4 & 1) == 0) {
    iVar1 = thunk_FUN_00074338(puVar4);
    this_00 = *(FFileManager_Android **)(iVar3 + DAT_0003551c);
    if (iVar1 != 0) {
      iVar2 = *(int *)(iVar3 + DAT_00035520);
      *(FFileManager_Android **)(this_00 + 0x34) = this_00 + 0x24;
      *(FFileManager_Android **)(this_00 + 0x38) = this_00 + 0x24;
      iVar1 = DAT_00035524;
      iVar2 = iVar2 + 8;
      *(int *)(this_00 + 4) = iVar2;
      *(FFileManager_Android **)(this_00 + 0x18) = this_00 + 8;
      *(FFileManager_Android **)(this_00 + 0x1c) = this_00 + 8;
      *(int *)(this_00 + 0x20) = iVar2;
      this_00[8] = (FFileManager_Android)0x0;
      this_00[0x24] = (FFileManager_Android)0x0;
      iVar1 = *(int *)(iVar3 + iVar1);
      *(int *)(this_00 + 0x3c) = 0;
      *(int *)(this_00 + 0x40) = 0;
      *(int *)this_00 = iVar1 + 8;
      thunk_FUN_000743a0(puVar4);
      __aeabi_atexit(this_00,*(undefined4 *)(iVar3 + DAT_00035528),
                     *(undefined4 *)(iVar3 + DAT_0003552c));
    }
  }
  else {
    this_00 = *(FFileManager_Android **)(iVar3 + DAT_0003551c);
  }
  FFileManager_Android::ClearAssetManager(this_00,*(_JNIEnv **)this);
  FFileManager::ClearBasePath((FFileManager *)this_00);
  return this;
}

