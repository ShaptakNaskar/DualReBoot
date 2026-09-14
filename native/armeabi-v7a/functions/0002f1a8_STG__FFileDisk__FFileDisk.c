/* 0002f1a8 | STG::FFileDisk::FFileDisk */

/* STG::FFileDisk::FFileDisk(char const*, STG::FFileBase::EAccess) */

FFileDisk * __thiscall
STG::FFileDisk::FFileDisk(FFileDisk *this,undefined4 param_1,undefined4 param_3)

{
  int iVar1;
  
  FFileBase::FFileBase((FFileBase *)this);
  iVar1 = *(int *)(DAT_0002f1ec + 0x2f1d0);
  *(undefined4 *)(this + 0x30) = 0;
  *(int *)this = iVar1 + 8;
  FFileBase::Open((FFileBase *)this,param_1,param_3);
  return this;
}

