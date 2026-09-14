/* 000502d8 | STG::UPreference<STG::UStringBase<char,int>,true>::SetSelectedValue */

/* STG::UPreference<STG::UStringBase<char, int>, true>::SetSelectedValue(STG::UStringBase<char, int>
   const&) */

undefined4 __thiscall
STG::UPreference<STG::UStringBase<char,int>,true>::SetSelectedValue
          (UPreference<STG::UStringBase<char,int>,true> *this,UStringBase *param_1)

{
  int *piVar1;
  int iVar2;
  void *__s2;
  size_t __n;
  undefined4 *puVar3;
  size_t sVar4;
  size_t sVar5;
  int iVar6;
  void *__s1;
  int iVar7;
  
  iVar7 = *(int *)(this + 0x80);
  if (iVar7 == 0) {
    return 0;
  }
  __s1 = *(void **)(param_1 + 0x18);
  iVar6 = 0;
  sVar5 = *(int *)(param_1 + 0x14) - (int)__s1;
  puVar3 = (undefined4 *)(*(int *)(this + 0x7c) + 0x18);
  while( true ) {
    __s2 = (void *)*puVar3;
    piVar1 = puVar3 + -1;
    puVar3 = puVar3 + 7;
    sVar4 = *piVar1 - (int)__s2;
    __n = sVar4;
    if ((int)sVar5 <= (int)sVar4) {
      __n = sVar5;
    }
    iVar2 = memcmp(__s1,__s2,__n);
    if (((iVar2 == 0) && ((int)sVar4 <= (int)sVar5)) && ((int)sVar5 <= (int)sVar4)) break;
    iVar6 = iVar6 + 1;
    if (iVar6 == iVar7) {
      return 0;
    }
  }
  (**(code **)(*(int *)this + 0x24))(this,iVar6);
  return 1;
}

