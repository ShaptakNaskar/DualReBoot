/* 0002f364 | STG::UStringBase<char,int>::~UStringBase */

/* STG::UStringBase<char, int>::~UStringBase() */

UStringBase<char,int> * __thiscall
STG::UStringBase<char,int>::~UStringBase(UStringBase<char,int> *this)

{
  UStringBase<char,int> *pUVar1;
  
  pUVar1 = *(UStringBase<char,int> **)(this + 0x18);
  *(int *)this = *(int *)(DAT_0002f3cc + 0x2f380) + 8;
  if ((pUVar1 != this + 4) && (pUVar1 != (UStringBase<char,int> *)0x0)) {
    if ((uint)(*(int *)(this + 4) - (int)pUVar1) < 0x81) {
      std::__node_alloc::_M_deallocate(pUVar1,*(int *)(this + 4) - (int)pUVar1);
      operator_delete(this);
      return this;
    }
    operator_delete(pUVar1);
  }
  operator_delete(this);
  return this;
}

