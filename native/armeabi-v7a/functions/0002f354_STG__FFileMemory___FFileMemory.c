/* 0002f354 | STG::FFileMemory::~FFileMemory */

/* STG::FFileMemory::~FFileMemory() */

FFileMemory * __thiscall STG::FFileMemory::~FFileMemory(FFileMemory *this)

{
  int iVar1;
  
  *(int *)this = *(int *)(DAT_0002f3a0 + 0x2f364) + 8;
  iVar1 = _FGetIsOpen(this);
  if (iVar1 == 0) {
    FFileBase::~FFileBase((FFileBase *)this);
    return this;
  }
  FFileBase::Close((FFileBase *)this);
  FFileBase::~FFileBase((FFileBase *)this);
  return this;
}

