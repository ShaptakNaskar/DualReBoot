/* 0002f93c | STG::FFileDisk::~FFileDisk */

/* STG::FFileDisk::~FFileDisk() */

FFileDisk * __thiscall STG::FFileDisk::~FFileDisk(FFileDisk *this)

{
  int iVar1;
  
  *(int *)this = *(int *)(DAT_0002f988 + 0x2f94c) + 8;
  iVar1 = _FGetIsOpen(this);
  if (iVar1 == 0) {
    FFileBase::~FFileBase((FFileBase *)this);
    return this;
  }
  FFileBase::Close((FFileBase *)this);
  FFileBase::~FFileBase((FFileBase *)this);
  return this;
}

