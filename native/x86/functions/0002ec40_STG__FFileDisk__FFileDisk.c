/* 0002ec40 | STG::FFileDisk::FFileDisk */

/* STG::FFileDisk::FFileDisk(char const*, STG::FFileBase::EAccess) */

void __thiscall STG::FFileDisk::FFileDisk(FFileDisk *this,undefined4 param_1,undefined4 param_3)

{
  int iVar1;
  int unaff_EBX;
  
  FUN_0002e044();
  FFileBase::FFileBase((FFileBase *)this);
  iVar1 = *(int *)(unaff_EBX + 0x6d1f3);
  *(undefined4 *)(this + 0x30) = 0;
  *(int *)this = iVar1 + 8;
  FFileBase::Open((FFileBase *)this,param_1,param_3);
  return;
}

