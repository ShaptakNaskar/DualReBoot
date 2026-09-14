/* 0003504c | STG::FFileManager_Android::~FFileManager_Android */

/* STG::FFileManager_Android::~FFileManager_Android() */

FFileManager_Android * __thiscall
STG::FFileManager_Android::~FFileManager_Android(FFileManager_Android *this)

{
  FFileManager_Android *pFVar1;
  int iVar2;
  
  pFVar1 = *(FFileManager_Android **)(this + 0x38);
  iVar2 = *(int *)(DAT_000350f4 + 0x3506c);
  *(int *)this = *(int *)(DAT_000350f0 + 0x35068) + 8;
  *(int *)(this + 0x20) = iVar2 + 8;
  if ((pFVar1 != this + 0x24) && (pFVar1 != (FFileManager_Android *)0x0)) {
    if ((uint)(*(int *)(this + 0x24) - (int)pFVar1) < 0x81) {
      std::__node_alloc::_M_deallocate(pFVar1,*(int *)(this + 0x24) - (int)pFVar1);
    }
    else {
      operator_delete(pFVar1);
    }
  }
  pFVar1 = *(FFileManager_Android **)(this + 0x1c);
  *(int *)(this + 4) = iVar2 + 8;
  if ((pFVar1 != this + 8) && (pFVar1 != (FFileManager_Android *)0x0)) {
    if ((uint)(*(int *)(this + 8) - (int)pFVar1) < 0x81) {
      std::__node_alloc::_M_deallocate(pFVar1,*(int *)(this + 8) - (int)pFVar1);
      return this;
    }
    operator_delete(pFVar1);
  }
  return this;
}

