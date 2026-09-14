/* 0002eb50 | STG::FFileDisk::~FFileDisk */

/* STG::FFileDisk::~FFileDisk() */

void __thiscall STG::FFileDisk::~FFileDisk(FFileDisk *this)

{
  char cVar1;
  int unaff_EBX;
  
  FUN_0002e044();
  *(int *)this = *(int *)(unaff_EBX + 0x6d2e3) + 8;
  cVar1 = _FGetIsOpen(this);
  if (cVar1 != '\0') {
    FFileBase::Close((FFileBase *)this);
  }
  FFileBase::~FFileBase((FFileBase *)this);
  return;
}

