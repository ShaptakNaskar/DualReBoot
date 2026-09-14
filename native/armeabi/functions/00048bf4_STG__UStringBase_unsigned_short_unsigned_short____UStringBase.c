/* 00048bf4 | STG::UStringBase<unsigned_short,unsigned_short>::~UStringBase */

/* STG::UStringBase<unsigned short, unsigned short>::~UStringBase() */

UStringBase<unsigned_short,unsigned_short> * __thiscall
STG::UStringBase<unsigned_short,unsigned_short>::~UStringBase
          (UStringBase<unsigned_short,unsigned_short> *this)

{
  UStringBase<unsigned_short,unsigned_short> *pUVar1;
  uint uVar2;
  
  pUVar1 = *(UStringBase<unsigned_short,unsigned_short> **)(this + 0x28);
  *(int *)this = *(int *)(DAT_00048c60 + 0x48c10) + 8;
  if ((pUVar1 != this + 4) && (pUVar1 != (UStringBase<unsigned_short,unsigned_short> *)0x0)) {
    uVar2 = *(int *)(this + 4) - (int)pUVar1 & 0xfffffffe;
    if (uVar2 < 0x81) {
      std::__node_alloc::_M_deallocate(pUVar1,uVar2);
      operator_delete(this);
      return this;
    }
    operator_delete(pUVar1);
  }
  operator_delete(this);
  return this;
}

