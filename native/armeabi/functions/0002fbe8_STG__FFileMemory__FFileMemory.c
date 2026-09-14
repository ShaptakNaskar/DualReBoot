/* 0002fbe8 | STG::FFileMemory::FFileMemory */

/* STG::FFileMemory::FFileMemory() */

FFileMemory * __thiscall STG::FFileMemory::FFileMemory(FFileMemory *this)

{
  int iVar1;
  
  FFileBase::FFileBase((FFileBase *)this);
  iVar1 = DAT_0002fc1c;
  *(undefined4 *)(this + 0x30) = 0;
  *(int *)this = *(int *)(iVar1 + 0x2fc08) + 8;
  *(undefined4 *)(this + 0x34) = 0;
  *(undefined4 *)(this + 0x38) = 0;
  return this;
}

