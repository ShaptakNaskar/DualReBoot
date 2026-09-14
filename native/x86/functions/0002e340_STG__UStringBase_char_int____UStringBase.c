/* 0002e340 | STG::UStringBase<char,int>::~UStringBase */

/* STG::UStringBase<char, int>::~UStringBase() */

void __thiscall STG::UStringBase<char,int>::~UStringBase(UStringBase<char,int> *this)

{
  UStringBase<char,int> *pUVar1;
  int unaff_EBX;
  
  FUN_0002e044();
  *(int *)this = *(int *)(unaff_EBX + 0x6daeb) + 8;
  pUVar1 = *(UStringBase<char,int> **)(this + 0x18);
  if ((pUVar1 != this + 4) && (pUVar1 != (UStringBase<char,int> *)0x0)) {
    if ((uint)(*(int *)(this + 4) - (int)pUVar1) < 0x81) {
      std::__node_alloc::_M_deallocate(pUVar1,*(int *)(this + 4) - (int)pUVar1);
    }
    else {
      operator_delete(pUVar1);
    }
  }
  operator_delete(this);
  return;
}

