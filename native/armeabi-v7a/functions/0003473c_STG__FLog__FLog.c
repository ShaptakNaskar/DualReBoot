/* 0003473c | STG::FLog::FLog */

/* STG::FLog::FLog(char const*) */

FLog * __thiscall STG::FLog::FLog(FLog *this,char *param_1)

{
  FFileDisk::FFileDisk((FFileDisk *)this);
  *(int *)this = *(int *)(DAT_00034774 + 0x34764) + 8;
  FFileBase::Open((FFileBase *)this,param_1,1);
  return this;
}

