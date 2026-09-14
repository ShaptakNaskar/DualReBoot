/* 00054a80 | STG::UPreference<STG::UStringBase<char,int>,true>::SetSelectedValue */

/* STG::UPreference<STG::UStringBase<char, int>, true>::SetSelectedValue(STG::UStringBase<char, int>
   const&) */

undefined4 __thiscall
STG::UPreference<STG::UStringBase<char,int>,true>::SetSelectedValue
          (UPreference<STG::UStringBase<char,int>,true> *this,UStringBase *param_1)

{
  int iVar1;
  size_t __n;
  undefined4 *puVar2;
  size_t sVar3;
  size_t sVar4;
  int iVar5;
  void *__s1;
  int iVar6;
  
  iVar6 = *(int *)(this + 0x80);
  if (iVar6 == 0) {
    return 0;
  }
  __s1 = *(void **)(param_1 + 0x18);
  iVar5 = 0;
  sVar4 = *(int *)(param_1 + 0x14) - (int)__s1;
  puVar2 = (undefined4 *)(*(int *)(this + 0x7c) + 0x18);
  while( true ) {
    sVar3 = puVar2[-1] - (int)*puVar2;
    __n = sVar3;
    if ((int)sVar4 <= (int)sVar3) {
      __n = sVar4;
    }
    iVar1 = memcmp(__s1,(void *)*puVar2,__n);
    if (((iVar1 == 0) && ((int)sVar3 <= (int)sVar4)) && ((int)sVar4 <= (int)sVar3)) break;
    iVar5 = iVar5 + 1;
    puVar2 = puVar2 + 7;
    if (iVar5 == iVar6) {
      return 0;
    }
  }
  (**(code **)(*(int *)this + 0x24))(this,iVar5);
  return 1;
}

