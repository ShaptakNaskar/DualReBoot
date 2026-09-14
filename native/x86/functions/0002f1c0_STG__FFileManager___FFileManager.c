/* 0002f1c0 | STG::FFileManager::~FFileManager */

/* STG::FFileManager::~FFileManager() */

void __thiscall STG::FFileManager::~FFileManager(FFileManager *this)

{
  int iVar1;
  FFileManager *pFVar2;
  int unaff_EBX;
  
  FUN_0002e044();
  iVar1 = *(int *)(unaff_EBX + 0x6cc6b);
  *(int *)this = *(int *)(unaff_EBX + 0x6cc7b) + 8;
  *(int *)(this + 0x20) = iVar1 + 8;
  pFVar2 = *(FFileManager **)(this + 0x38);
  if ((pFVar2 != this + 0x24) && (pFVar2 != (FFileManager *)0x0)) {
    if ((uint)(*(int *)(this + 0x24) - (int)pFVar2) < 0x81) {
      std::__node_alloc::_M_deallocate(pFVar2,*(int *)(this + 0x24) - (int)pFVar2);
    }
    else {
      operator_delete(pFVar2);
    }
  }
  *(int *)(this + 4) = iVar1 + 8;
  pFVar2 = *(FFileManager **)(this + 0x1c);
  if ((pFVar2 != this + 8) && (pFVar2 != (FFileManager *)0x0)) {
    if ((uint)(*(int *)(this + 8) - (int)pFVar2) < 0x81) {
      std::__node_alloc::_M_deallocate(pFVar2,*(int *)(this + 8) - (int)pFVar2);
    }
    else {
      operator_delete(pFVar2);
    }
  }
  return;
}

