/* 00035ad0 | STG::FFileManager_Android::~FFileManager_Android */

/* STG::FFileManager_Android::~FFileManager_Android() */

void __thiscall STG::FFileManager_Android::~FFileManager_Android(FFileManager_Android *this)

{
  int iVar1;
  FFileManager_Android *pFVar2;
  int unaff_EBX;
  
  FUN_0002e044();
  iVar1 = *(int *)(unaff_EBX + 0x6635b);
  *(int *)this = *(int *)(unaff_EBX + 0x6636b) + 8;
  *(int *)(this + 0x20) = iVar1 + 8;
  pFVar2 = *(FFileManager_Android **)(this + 0x38);
  if ((pFVar2 != this + 0x24) && (pFVar2 != (FFileManager_Android *)0x0)) {
    if ((uint)(*(int *)(this + 0x24) - (int)pFVar2) < 0x81) {
      std::__node_alloc::_M_deallocate(pFVar2,*(int *)(this + 0x24) - (int)pFVar2);
    }
    else {
      operator_delete(pFVar2);
    }
  }
  *(int *)(this + 4) = iVar1 + 8;
  pFVar2 = *(FFileManager_Android **)(this + 0x1c);
  if ((pFVar2 != this + 8) && (pFVar2 != (FFileManager_Android *)0x0)) {
    if ((uint)(*(int *)(this + 8) - (int)pFVar2) < 0x81) {
      std::__node_alloc::_M_deallocate(pFVar2,*(int *)(this + 8) - (int)pFVar2);
    }
    else {
      operator_delete(pFVar2);
    }
  }
  operator_delete(this);
  return;
}

