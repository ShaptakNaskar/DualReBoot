/* 000529d0 | STG::UStringBase<char,int>::UStringBase */

/* STG::UStringBase<char, int>::UStringBase() */

void __thiscall STG::UStringBase<char,int>::UStringBase(UStringBase<char,int> *this)

{
  *(int *)this = *(int *)(DAT_000529f8 + 0x529e0) + 8;
  *(UStringBase<char,int> **)(this + 0x14) = this + 4;
  this[4] = (UStringBase<char,int>)0x0;
  *(UStringBase<char,int> **)(this + 0x18) = this + 4;
  return;
}

