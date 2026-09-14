/* 0005f918 | STG::UPreferenceBase::~UPreferenceBase */

/* STG::UPreferenceBase::~UPreferenceBase() */

UPreferenceBase * __thiscall STG::UPreferenceBase::~UPreferenceBase(UPreferenceBase *this)

{
  UPreferenceBase *pUVar1;
  int iVar2;
  
  pUVar1 = *(UPreferenceBase **)(this + 0x70);
  iVar2 = *(int *)(DAT_0005fa38 + 0x5f940);
  *(int *)this = *(int *)(DAT_0005fa34 + 0x5f93c) + 8;
  *(int *)(this + 0x58) = iVar2 + 8;
  if ((pUVar1 != this + 0x5c) && (pUVar1 != (UPreferenceBase *)0x0)) {
    if ((uint)(*(int *)(this + 0x5c) - (int)pUVar1) < 0x81) {
      std::__node_alloc::_M_deallocate(pUVar1,*(int *)(this + 0x5c) - (int)pUVar1);
    }
    else {
      operator_delete(pUVar1);
    }
  }
  pUVar1 = *(UPreferenceBase **)(this + 0x54);
  *(int *)(this + 0x3c) = iVar2 + 8;
  if ((pUVar1 != this + 0x40) && (pUVar1 != (UPreferenceBase *)0x0)) {
    if ((uint)(*(int *)(this + 0x40) - (int)pUVar1) < 0x81) {
      std::__node_alloc::_M_deallocate(pUVar1,*(int *)(this + 0x40) - (int)pUVar1);
    }
    else {
      operator_delete(pUVar1);
    }
  }
  pUVar1 = *(UPreferenceBase **)(this + 0x38);
  *(int *)(this + 0x20) = iVar2 + 8;
  if ((pUVar1 != this + 0x24) && (pUVar1 != (UPreferenceBase *)0x0)) {
    if ((uint)(*(int *)(this + 0x24) - (int)pUVar1) < 0x81) {
      std::__node_alloc::_M_deallocate(pUVar1,*(int *)(this + 0x24) - (int)pUVar1);
    }
    else {
      operator_delete(pUVar1);
    }
  }
  pUVar1 = *(UPreferenceBase **)(this + 0x1c);
  *(int *)(this + 4) = iVar2 + 8;
  if ((pUVar1 != this + 8) && (pUVar1 != (UPreferenceBase *)0x0)) {
    if (0x80 < (uint)(*(int *)(this + 8) - (int)pUVar1)) {
      operator_delete(pUVar1);
      return this;
    }
    std::__node_alloc::_M_deallocate(pUVar1,*(int *)(this + 8) - (int)pUVar1);
  }
  return this;
}

