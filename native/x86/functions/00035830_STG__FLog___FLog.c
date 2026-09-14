/* 00035830 | STG::FLog::~FLog */

/* STG::FLog::~FLog() */

void __thiscall STG::FLog::~FLog(FLog *this)

{
  int unaff_EBX;
  
  FUN_0002e044();
  *(int *)this = *(int *)(unaff_EBX + 0x66617) + 8;
  FFileBase::Flush((FFileBase *)this);
  FFileBase::Close((FFileBase *)this);
  FFileDisk::~FFileDisk((FFileDisk *)this);
  return;
}

