/* 0005aa70 | STG::UPreference<STG::UStringBase<char,int>,true>::SetSelectedValue */

/* STG::UPreference<STG::UStringBase<char, int>, true>::SetSelectedValue(STG::UStringBase<char, int>
   const&) */

undefined4 __thiscall
STG::UPreference<STG::UStringBase<char,int>,true>::SetSelectedValue
          (UPreference<STG::UStringBase<char,int>,true> *this,UStringBase *param_1)

{
  int iVar1;
  void *__s1;
  undefined4 uVar2;
  int iVar3;
  size_t __n;
  int *piVar4;
  size_t sVar5;
  size_t sVar6;
  int local_28;
  
  FUN_0002e044();
  iVar1 = *(int *)(this + 0x80);
  uVar2 = 0;
  if (iVar1 != 0) {
    __s1 = *(void **)(param_1 + 0x18);
    sVar6 = *(int *)(param_1 + 0x14) - (int)__s1;
    local_28 = 0;
    piVar4 = (int *)(*(int *)(this + 0x7c) + 0x14);
    while( true ) {
      sVar5 = *piVar4 - piVar4[1];
      __n = sVar6;
      if ((int)sVar5 <= (int)sVar6) {
        __n = sVar5;
      }
      iVar3 = memcmp(__s1,(void *)piVar4[1],__n);
      if (((iVar3 == 0) && ((int)sVar5 <= (int)sVar6)) && ((int)sVar6 <= (int)sVar5)) break;
      local_28 = local_28 + 1;
      piVar4 = piVar4 + 7;
      if (local_28 == iVar1) {
        return 0;
      }
    }
    (**(code **)(*(int *)this + 0x24))(this,local_28);
    uVar2 = 1;
  }
  return uVar2;
}

