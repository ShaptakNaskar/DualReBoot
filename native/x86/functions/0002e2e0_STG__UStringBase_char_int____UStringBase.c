/* 0002e2e0 | STG::UStringBase<char,int>::~UStringBase */

/* STG::UStringBase<char, int>::~UStringBase() */

void __thiscall STG::UStringBase<char,int>::~UStringBase(UStringBase<char,int> *this)

{
  UStringBase<char,int> *pUVar1;
  int unaff_EBX;
  
  FUN_0002e044();
  *(int *)this = *(int *)(UPreference_Uint32::~UPreference_Uint32 + unaff_EBX + 6) + 8;
  pUVar1 = *(UStringBase<char,int> **)(this + 0x18);
  if ((pUVar1 != this + 4) && (pUVar1 != (UStringBase<char,int> *)0x0)) {
    if (0x80 < (uint)(*(int *)(this + 4) - (int)pUVar1)) {
      operator_delete(pUVar1);
      return;
    }
    std::__node_alloc::_M_deallocate(pUVar1,*(int *)(this + 4) - (int)pUVar1);
  }
  return;
}

