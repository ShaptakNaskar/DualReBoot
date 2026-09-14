/* 0006d8a0 | STG::UPreferenceBase::~UPreferenceBase */

/* STG::UPreferenceBase::~UPreferenceBase() */

void __thiscall STG::UPreferenceBase::~UPreferenceBase(UPreferenceBase *this)

{
  int iVar1;
  UPreferenceBase *pUVar2;
  int unaff_EBX;
  
  FUN_0002e044();
  iVar1 = *(int *)(FFileBase::GetFileSize + unaff_EBX + 4);
  *(int *)this = *(int *)(unaff_EBX + 0x2e678) + 8;
  *(int *)(this + 0x58) = iVar1 + 8;
  pUVar2 = *(UPreferenceBase **)(this + 0x70);
  if ((pUVar2 != this + 0x5c) && (pUVar2 != (UPreferenceBase *)0x0)) {
    if ((uint)(*(int *)(this + 0x5c) - (int)pUVar2) < 0x81) {
      std::__node_alloc::_M_deallocate(pUVar2,*(int *)(this + 0x5c) - (int)pUVar2);
    }
    else {
      operator_delete(pUVar2);
    }
  }
  *(int *)(this + 0x3c) = iVar1 + 8;
  pUVar2 = *(UPreferenceBase **)(this + 0x54);
  if ((pUVar2 != this + 0x40) && (pUVar2 != (UPreferenceBase *)0x0)) {
    if ((uint)(*(int *)(this + 0x40) - (int)pUVar2) < 0x81) {
      std::__node_alloc::_M_deallocate(pUVar2,*(int *)(this + 0x40) - (int)pUVar2);
    }
    else {
      operator_delete(pUVar2);
    }
  }
  *(int *)(this + 0x20) = iVar1 + 8;
  pUVar2 = *(UPreferenceBase **)(this + 0x38);
  if ((pUVar2 != this + 0x24) && (pUVar2 != (UPreferenceBase *)0x0)) {
    if ((uint)(*(int *)(this + 0x24) - (int)pUVar2) < 0x81) {
      std::__node_alloc::_M_deallocate(pUVar2,*(int *)(this + 0x24) - (int)pUVar2);
    }
    else {
      operator_delete(pUVar2);
    }
  }
  *(int *)(this + 4) = iVar1 + 8;
  pUVar2 = *(UPreferenceBase **)(this + 0x1c);
  if ((pUVar2 != this + 8) && (pUVar2 != (UPreferenceBase *)0x0)) {
    if (0x80 < (uint)(*(int *)(this + 8) - (int)pUVar2)) {
      operator_delete(pUVar2);
      return;
    }
    std::__node_alloc::_M_deallocate(pUVar2,*(int *)(this + 8) - (int)pUVar2);
  }
  return;
}

