/* 0002f3d0 | STG::FFileBase::~FFileBase */

/* STG::FFileBase::~FFileBase() */

FFileBase * __thiscall STG::FFileBase::~FFileBase(FFileBase *this)

{
  FFileBase *pFVar1;
  int iVar2;
  
  pFVar1 = *(FFileBase **)(this + 0x28);
  iVar2 = *(int *)(DAT_0002f43c + 0x2f3f0);
  *(int *)this = *(int *)(DAT_0002f438 + 0x2f3ec) + 8;
  *(int *)(this + 0x10) = iVar2 + 8;
  if ((pFVar1 != this + 0x14) && (pFVar1 != (FFileBase *)0x0)) {
    if ((uint)(*(int *)(this + 0x14) - (int)pFVar1) < 0x81) {
      std::__node_alloc::_M_deallocate(pFVar1,*(int *)(this + 0x14) - (int)pFVar1);
      return this;
    }
    operator_delete(pFVar1);
  }
  return this;
}

