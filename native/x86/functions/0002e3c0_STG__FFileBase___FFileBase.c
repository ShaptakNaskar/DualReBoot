/* 0002e3c0 | STG::FFileBase::~FFileBase */

/* STG::FFileBase::~FFileBase() */

void __thiscall STG::FFileBase::~FFileBase(FFileBase *this)

{
  FFileBase *pFVar1;
  int unaff_EBX;
  
  FUN_0002e044();
  *(int *)this = *(int *)(unaff_EBX + 0x6da7a) + 8;
  *(int *)(this + 0x10) = *(int *)(unaff_EBX + 0x6da76) + 8;
  pFVar1 = *(FFileBase **)(this + 0x28);
  if ((pFVar1 != this + 0x14) && (pFVar1 != (FFileBase *)0x0)) {
    if (0x80 < (uint)(*(int *)(this + 0x14) - (int)pFVar1)) {
      operator_delete(pFVar1);
      return;
    }
    std::__node_alloc::_M_deallocate(pFVar1,*(int *)(this + 0x14) - (int)pFVar1);
  }
  return;
}

