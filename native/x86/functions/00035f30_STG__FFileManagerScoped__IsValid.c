/* 00035f30 | STG::FFileManagerScoped::IsValid */

/* STG::FFileManagerScoped::IsValid() const */

void STG::FFileManagerScoped::IsValid(void)

{
  char *pcVar1;
  FFileManager_Android *this;
  int iVar2;
  int unaff_EBX;
  
  FUN_0002e044();
  pcVar1 = *(char **)(&DAT_00065f1b + unaff_EBX);
  this = *(FFileManager_Android **)(&DAT_00065f1f + unaff_EBX);
  if (*pcVar1 == '\0') {
    iVar2 = FUN_00080eb0(pcVar1);
    if (iVar2 != 0) {
      iVar2 = *(int *)(unaff_EBX + 0x65efb) + 8;
      *(FFileManager_Android **)(this + 0x18) = this + 8;
      *(int *)(this + 4) = iVar2;
      *(int *)(this + 0x20) = iVar2;
      *(FFileManager_Android **)(this + 0x34) = this + 0x24;
      *(FFileManager_Android **)(this + 0x38) = this + 0x24;
      iVar2 = *(int *)(USerialize::Save + unaff_EBX + 3);
      *(FFileManager_Android **)(this + 0x1c) = this + 8;
      *(int *)this = iVar2 + 8;
      this[8] = (FFileManager_Android)0x0;
      this[0x24] = (FFileManager_Android)0x0;
      *(undefined4 *)(this + 0x3c) = 0;
      *(undefined4 *)(this + 0x40) = 0;
      FUN_00080f40(pcVar1);
      __cxa_atexit(*(undefined4 *)(unaff_EBX + 0x65f2b),this,*(undefined4 *)(unaff_EBX + 0x65f27));
    }
  }
  FFileManager_Android::HasAssetManager(this);
  return;
}

