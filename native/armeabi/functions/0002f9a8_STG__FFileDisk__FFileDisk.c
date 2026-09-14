/* 0002f9a8 | STG::FFileDisk::FFileDisk */

/* STG::FFileDisk::FFileDisk() */

FFileDisk * __thiscall STG::FFileDisk::FFileDisk(FFileDisk *this)

{
  int iVar1;
  
  FFileBase::FFileBase((FFileBase *)this);
  iVar1 = DAT_0002f9d4;
  *(undefined4 *)(this + 0x30) = 0;
  *(int *)this = *(int *)(iVar1 + 0x2f9c8) + 8;
  return this;
}

