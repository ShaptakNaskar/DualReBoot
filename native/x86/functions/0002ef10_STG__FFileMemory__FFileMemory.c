/* 0002ef10 | STG::FFileMemory::FFileMemory */

/* STG::FFileMemory::FFileMemory() */

void __thiscall STG::FFileMemory::FFileMemory(FFileMemory *this)

{
  int iVar1;
  int unaff_EBX;
  
  FUN_0002e044();
  FFileBase::FFileBase((FFileBase *)this);
  iVar1 = *(int *)(unaff_EBX + 0x6cf27);
  *(undefined4 *)(this + 0x30) = 0;
  *(int *)this = iVar1 + 8;
  *(undefined4 *)(this + 0x34) = 0;
  *(undefined4 *)(this + 0x38) = 0;
  return;
}

