/* 00034c34 | STG::FFileManagerScoped::~FFileManagerScoped */

/* STG::FFileManagerScoped::~FFileManagerScoped() */

FFileManagerScoped * __thiscall
STG::FFileManagerScoped::~FFileManagerScoped(FFileManagerScoped *this)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  FFileManager_Android *this_00;
  int iVar4;
  
  iVar4 = DAT_00034d04 + 0x34c4c;
  puVar3 = *(uint **)(iVar4 + DAT_00034d08);
  if (((*puVar3 & 1) == 0) && (iVar1 = thunk_FUN_0007004c(puVar3), iVar1 != 0)) {
    this_00 = *(FFileManager_Android **)(iVar4 + DAT_00034d0c);
    iVar2 = *(int *)(iVar4 + DAT_00034d10);
    *(FFileManager_Android **)(this_00 + 0x34) = this_00 + 0x24;
    *(FFileManager_Android **)(this_00 + 0x38) = this_00 + 0x24;
    iVar1 = DAT_00034d14;
    iVar2 = iVar2 + 8;
    *(FFileManager_Android **)(this_00 + 0x18) = this_00 + 8;
    *(int *)(this_00 + 4) = iVar2;
    *(FFileManager_Android **)(this_00 + 0x1c) = this_00 + 8;
    *(int *)(this_00 + 0x20) = iVar2;
    this_00[8] = (FFileManager_Android)0x0;
    this_00[0x24] = (FFileManager_Android)0x0;
    iVar1 = *(int *)(iVar4 + iVar1);
    *(int *)(this_00 + 0x3c) = 0;
    *(int *)(this_00 + 0x40) = 0;
    *(int *)this_00 = iVar1 + 8;
    thunk_FUN_000700b0(puVar3);
    __aeabi_atexit(this_00,*(undefined4 *)(iVar4 + DAT_00034d18),
                   *(undefined4 *)(iVar4 + DAT_00034d1c));
  }
  else {
    this_00 = *(FFileManager_Android **)(iVar4 + DAT_00034d0c);
  }
  FFileManager_Android::ClearAssetManager(this_00,*(_JNIEnv **)this);
  FFileManager::ClearBasePath((FFileManager *)this_00);
  return this;
}

