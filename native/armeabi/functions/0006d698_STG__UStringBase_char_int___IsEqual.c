/* 0006d698 | STG::UStringBase<char,int>::IsEqual */

/* STG::UStringBase<char, int>::IsEqual(STG::UStringBase<char, int> const&) const */

bool __thiscall
STG::UStringBase<char,int>::IsEqual(UStringBase<char,int> *this,UStringBase *param_1)

{
  int iVar1;
  size_t __n;
  size_t sVar2;
  size_t sVar3;
  
  sVar3 = *(int *)(this + 0x14) - (int)*(void **)(this + 0x18);
  sVar2 = *(int *)(param_1 + 0x14) - (int)*(void **)(param_1 + 0x18);
  __n = sVar2;
  if ((int)sVar3 <= (int)sVar2) {
    __n = sVar3;
  }
  iVar1 = memcmp(*(void **)(this + 0x18),*(void **)(param_1 + 0x18),__n);
  if ((iVar1 == 0) && ((int)sVar2 <= (int)sVar3)) {
    return (int)sVar3 <= (int)sVar2;
  }
  return false;
}

