/* 000358c0 | STG::FLog::FLog */

/* STG::FLog::FLog(char const*) */

void __thiscall STG::FLog::FLog(FLog *this,char *param_1)

{
  int unaff_EBX;
  
  FUN_0002e044();
  FFileDisk::FFileDisk((FFileDisk *)this);
  *(int *)this = *(int *)(unaff_EBX + 0x66587) + 8;
  FFileBase::Open((FFileBase *)this,param_1,1);
  return;
}

