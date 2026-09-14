/* 0004e430 | STG::UStringBase<unsigned_short,unsigned_short>::~UStringBase */

/* STG::UStringBase<unsigned short, unsigned short>::~UStringBase() */

void __thiscall
STG::UStringBase<unsigned_short,unsigned_short>::~UStringBase
          (UStringBase<unsigned_short,unsigned_short> *this)

{
  UStringBase<unsigned_short,unsigned_short> *pUVar1;
  uint uVar2;
  int unaff_EBX;
  
  FUN_0002e044();
  *(int *)this = *(int *)(unaff_EBX + 0x4da7f) + 8;
  pUVar1 = *(UStringBase<unsigned_short,unsigned_short> **)(this + 0x28);
  if ((pUVar1 != this + 4) && (pUVar1 != (UStringBase<unsigned_short,unsigned_short> *)0x0)) {
    uVar2 = *(int *)(this + 4) - (int)pUVar1 & 0xfffffffe;
    if (uVar2 < 0x81) {
      std::__node_alloc::_M_deallocate(pUVar1,uVar2);
    }
    else {
      operator_delete(pUVar1);
    }
  }
  operator_delete(this);
  return;
}

