/* 00035530 | STG::FFileManagerScoped::IsValid */

/* STG::FFileManagerScoped::IsValid() const */

void STG::FFileManagerScoped::IsValid(void)

{
  int iVar1;
  int iVar2;
  FFileManager_Android *this;
  int iVar3;
  uint *puVar4;
  
  iVar3 = DAT_000355ec + 0x35544;
  puVar4 = *(uint **)(iVar3 + DAT_000355f0);
  if ((*puVar4 & 1) == 0) {
    iVar1 = thunk_FUN_00074338(puVar4);
    this = *(FFileManager_Android **)(iVar3 + DAT_000355f4);
    if (iVar1 != 0) {
      iVar2 = *(int *)(iVar3 + DAT_000355f8);
      *(FFileManager_Android **)(this + 0x34) = this + 0x24;
      *(FFileManager_Android **)(this + 0x38) = this + 0x24;
      iVar1 = DAT_000355fc;
      iVar2 = iVar2 + 8;
      *(int *)(this + 4) = iVar2;
      *(FFileManager_Android **)(this + 0x18) = this + 8;
      *(FFileManager_Android **)(this + 0x1c) = this + 8;
      *(int *)(this + 0x20) = iVar2;
      this[8] = (FFileManager_Android)0x0;
      this[0x24] = (FFileManager_Android)0x0;
      iVar1 = *(int *)(iVar3 + iVar1);
      *(int *)(this + 0x3c) = 0;
      *(int *)(this + 0x40) = 0;
      *(int *)this = iVar1 + 8;
      thunk_FUN_000743a0(puVar4);
      __aeabi_atexit(this,*(undefined4 *)(iVar3 + DAT_00035600),
                     *(undefined4 *)(iVar3 + DAT_00035604));
    }
  }
  else {
    this = *(FFileManager_Android **)(iVar3 + DAT_000355f4);
  }
  FFileManager_Android::HasAssetManager(this);
  return;
}

