/* 0002f178 | STG::FFileDisk::FFileDisk */

/* STG::FFileDisk::FFileDisk() */

FFileDisk * __thiscall STG::FFileDisk::FFileDisk(FFileDisk *this)

{
  int iVar1;
  
  FFileBase::FFileBase((FFileBase *)this);
  iVar1 = DAT_0002f1a4;
  *(undefined4 *)(this + 0x30) = 0;
  *(int *)this = *(int *)(iVar1 + 0x2f19c) + 8;
  return this;
}

