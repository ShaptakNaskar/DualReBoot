/* 0002ebf0 | STG::FFileDisk::FFileDisk */

/* STG::FFileDisk::FFileDisk() */

void __thiscall STG::FFileDisk::FFileDisk(FFileDisk *this)

{
  int iVar1;
  int unaff_EBX;
  
  FUN_0002e044();
  FFileBase::FFileBase((FFileBase *)this);
  iVar1 = *(int *)(unaff_EBX + 0x6d243);
  *(undefined4 *)(this + 0x30) = 0;
  *(int *)this = iVar1 + 8;
  return;
}

