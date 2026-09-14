/* 0002f3c0 | STG::FFileMemory::FFileMemory */

/* STG::FFileMemory::FFileMemory() */

FFileMemory * __thiscall STG::FFileMemory::FFileMemory(FFileMemory *this)

{
  int iVar1;
  
  FFileBase::FFileBase((FFileBase *)this);
  iVar1 = DAT_0002f3f4;
  *(undefined4 *)(this + 0x30) = 0;
  iVar1 = *(int *)(iVar1 + 0x2f3e4);
  *(undefined4 *)(this + 0x34) = 0;
  *(undefined4 *)(this + 0x38) = 0;
  *(int *)this = iVar1 + 8;
  return this;
}

