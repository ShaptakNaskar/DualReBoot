/* 0002f10c | STG::FFileDisk::~FFileDisk */

/* STG::FFileDisk::~FFileDisk() */

FFileDisk * __thiscall STG::FFileDisk::~FFileDisk(FFileDisk *this)

{
  int iVar1;
  
  *(int *)this = *(int *)(DAT_0002f158 + 0x2f11c) + 8;
  iVar1 = _FGetIsOpen(this);
  if (iVar1 == 0) {
    FFileBase::~FFileBase((FFileBase *)this);
    return this;
  }
  FFileBase::Close((FFileBase *)this);
  FFileBase::~FFileBase((FFileBase *)this);
  return this;
}

