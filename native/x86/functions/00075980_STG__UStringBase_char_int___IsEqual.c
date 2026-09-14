/* 00075980 | STG::UStringBase<char,int>::IsEqual */

/* STG::UStringBase<char, int>::IsEqual(STG::UStringBase<char, int> const&) const */

bool STG::UStringBase<char,int>::IsEqual(UStringBase *param_1)

{
  int iVar1;
  int extraout_ECX;
  size_t __n;
  bool bVar2;
  size_t sVar3;
  size_t sVar4;
  
  FUN_0002e044();
  sVar4 = *(int *)(param_1 + 0x14) - (int)*(void **)(param_1 + 0x18);
  sVar3 = *(int *)(extraout_ECX + 0x14) - (int)*(void **)(extraout_ECX + 0x18);
  __n = sVar4;
  if ((int)sVar3 <= (int)sVar4) {
    __n = sVar3;
  }
  iVar1 = memcmp(*(void **)(param_1 + 0x18),*(void **)(extraout_ECX + 0x18),__n);
  bVar2 = false;
  if ((iVar1 == 0) && ((int)sVar3 <= (int)sVar4)) {
    bVar2 = (int)sVar4 <= (int)sVar3;
  }
  return bVar2;
}

