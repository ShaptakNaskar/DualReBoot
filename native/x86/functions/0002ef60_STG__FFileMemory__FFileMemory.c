/* 0002ef60 | STG::FFileMemory::FFileMemory */

/* STG::FFileMemory::FFileMemory(unsigned char const*, unsigned long) */

void __thiscall STG::FFileMemory::FFileMemory(FFileMemory *this,uchar *param_1,ulong param_2)

{
  int iVar1;
  int unaff_EBX;
  
  FUN_0002e044();
  FFileBase::FFileBase((FFileBase *)this);
  iVar1 = *(int *)(unaff_EBX + 0x6ced7);
  *(undefined4 *)(this + 0x30) = 0;
  *(int *)this = iVar1 + 8;
  *(undefined4 *)(this + 0x34) = 0;
  *(undefined4 *)(this + 0x38) = 0;
  FFileBase::Open((FFileBase *)this,param_1,param_2);
  return;
}

