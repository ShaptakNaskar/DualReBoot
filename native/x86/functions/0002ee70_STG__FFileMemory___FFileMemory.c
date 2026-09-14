/* 0002ee70 | STG::FFileMemory::~FFileMemory */

/* STG::FFileMemory::~FFileMemory() */

void __thiscall STG::FFileMemory::~FFileMemory(FFileMemory *this)

{
  char cVar1;
  int unaff_EBX;
  
  FUN_0002e044();
  *(int *)this = *(int *)(unaff_EBX + 0x6cfc7) + 8;
  cVar1 = _FGetIsOpen(this);
  if (cVar1 != '\0') {
    FFileBase::Close((FFileBase *)this);
  }
  FFileBase::~FFileBase((FFileBase *)this);
  return;
}

