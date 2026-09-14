/* 00034ef0 | STG::FLog::~FLog */

/* STG::FLog::~FLog() */

FLog * __thiscall STG::FLog::~FLog(FLog *this)

{
  *(int *)this = *(int *)(DAT_00034f24 + 0x34f00) + 8;
  FFileBase::Flush((FFileBase *)this);
  FFileBase::Close((FFileBase *)this);
  FFileDisk::~FFileDisk((FFileDisk *)this);
  return this;
}

