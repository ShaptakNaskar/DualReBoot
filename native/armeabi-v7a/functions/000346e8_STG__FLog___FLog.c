/* 000346e8 | STG::FLog::~FLog */

/* STG::FLog::~FLog() */

FLog * __thiscall STG::FLog::~FLog(FLog *this)

{
  *(int *)this = *(int *)(DAT_0003471c + 0x346f8) + 8;
  FFileBase::Flush((FFileBase *)this);
  FFileBase::Close((FFileBase *)this);
  FFileDisk::~FFileDisk((FFileDisk *)this);
  return this;
}

