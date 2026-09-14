/* 0005f870 | STG::UStringBase<char,int>::UStringBase */

/* STG::UStringBase<char, int>::UStringBase() */

void __thiscall STG::UStringBase<char,int>::UStringBase(UStringBase<char,int> *this)

{
  int extraout_ECX;
  
  FUN_0002e915();
  *(int *)this = *(int *)(extraout_ECX + 0x3c5c7) + 8;
  this[4] = (UStringBase<char,int>)0x0;
  *(UStringBase<char,int> **)(this + 0x14) = this + 4;
  *(UStringBase<char,int> **)(this + 0x18) = this + 4;
  return;
}

