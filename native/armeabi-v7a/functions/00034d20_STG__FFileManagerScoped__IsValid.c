/* 00034d20 | STG::FFileManagerScoped::IsValid */

/* STG::FFileManagerScoped::IsValid() const */

void STG::FFileManagerScoped::IsValid(void)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  FFileManager_Android *this;
  int iVar4;
  
  iVar4 = DAT_00034ddc + 0x34d34;
  puVar3 = *(uint **)(iVar4 + DAT_00034de0);
  if (((*puVar3 & 1) == 0) && (iVar1 = thunk_FUN_0007004c(puVar3), iVar1 != 0)) {
    this = *(FFileManager_Android **)(iVar4 + DAT_00034de4);
    iVar2 = *(int *)(iVar4 + DAT_00034de8);
    *(FFileManager_Android **)(this + 0x34) = this + 0x24;
    *(FFileManager_Android **)(this + 0x38) = this + 0x24;
    iVar1 = DAT_00034dec;
    iVar2 = iVar2 + 8;
    *(FFileManager_Android **)(this + 0x18) = this + 8;
    *(int *)(this + 4) = iVar2;
    *(FFileManager_Android **)(this + 0x1c) = this + 8;
    *(int *)(this + 0x20) = iVar2;
    this[8] = (FFileManager_Android)0x0;
    this[0x24] = (FFileManager_Android)0x0;
    iVar1 = *(int *)(iVar4 + iVar1);
    *(int *)(this + 0x3c) = 0;
    *(int *)(this + 0x40) = 0;
    *(int *)this = iVar1 + 8;
    thunk_FUN_000700b0(puVar3);
    __aeabi_atexit(this,*(undefined4 *)(iVar4 + DAT_00034df0),*(undefined4 *)(iVar4 + DAT_00034df4))
    ;
  }
  else {
    this = *(FFileManager_Android **)(iVar4 + DAT_00034de4);
  }
  FFileManager_Android::HasAssetManager(this);
  return;
}

