/* 0005720c | STG::UStringBase<char,int>::UStringBase */

/* STG::UStringBase<char, int>::UStringBase() */

void __thiscall STG::UStringBase<char,int>::UStringBase(UStringBase<char,int> *this)

{
  *(int *)this = *(int *)(DAT_00057234 + 0x5721c) + 8;
  *(UStringBase<char,int> **)(this + 0x14) = this + 4;
  *(UStringBase<char,int> **)(this + 0x18) = this + 4;
  this[4] = (UStringBase<char,int>)0x0;
  return;
}

