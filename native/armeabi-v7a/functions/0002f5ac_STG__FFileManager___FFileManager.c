/* 0002f5ac | STG::FFileManager::~FFileManager */

/* STG::FFileManager::~FFileManager() */

FFileManager * __thiscall STG::FFileManager::~FFileManager(FFileManager *this)

{
  FFileManager *pFVar1;
  int iVar2;
  
  pFVar1 = *(FFileManager **)(this + 0x38);
  iVar2 = *(int *)(DAT_0002f654 + 0x2f5d4);
  *(int *)this = *(int *)(DAT_0002f650 + 0x2f5d0) + 8;
  *(int *)(this + 0x20) = iVar2 + 8;
  if ((pFVar1 != this + 0x24) && (pFVar1 != (FFileManager *)0x0)) {
    if ((uint)(*(int *)(this + 0x24) - (int)pFVar1) < 0x81) {
      std::__node_alloc::_M_deallocate(pFVar1,*(int *)(this + 0x24) - (int)pFVar1);
    }
    else {
      operator_delete(pFVar1);
    }
  }
  pFVar1 = *(FFileManager **)(this + 0x1c);
  *(int *)(this + 4) = iVar2 + 8;
  if ((pFVar1 != this + 8) && (pFVar1 != (FFileManager *)0x0)) {
    if (0x80 < (uint)(*(int *)(this + 8) - (int)pFVar1)) {
      operator_delete(pFVar1);
      return this;
    }
    std::__node_alloc::_M_deallocate(pFVar1,*(int *)(this + 8) - (int)pFVar1);
  }
  return this;
}

