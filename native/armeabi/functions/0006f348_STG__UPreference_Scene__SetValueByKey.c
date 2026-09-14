/* 0006f348 | STG::UPreference_Scene::SetValueByKey */

/* STG::UPreference_Scene::SetValueByKey(STG::UPreference_Scene::EPreferenceType,
   STG::UStringBase<char, int> const&, STG::UStringBase<unsigned short, unsigned short> const&) */

undefined4 __thiscall
STG::UPreference_Scene::SetValueByKey
          (UPreference_Scene *this,int param_2,int param_3,UStringBase *param_4)

{
  int iVar1;
  undefined4 uVar2;
  size_t __n;
  UPreference_TextureFont *pUVar3;
  size_t sVar4;
  UPreference_TextureFont *this_00;
  size_t sVar5;
  void *__s1;
  UPreference_TextureFont *pUVar6;
  
  if (param_2 == 5) {
    this_00 = *(UPreference_TextureFont **)(this + 0x24);
    pUVar6 = this_00 + *(int *)(this + 0x28) * 0x90;
    if (this_00 < pUVar6) {
      __s1 = *(void **)(param_3 + 0x18);
      pUVar3 = this_00 + 0x1c;
      sVar5 = *(int *)(param_3 + 0x14) - (int)__s1;
      while( true ) {
        sVar4 = *(int *)(pUVar3 + -4) - (int)*(void **)pUVar3;
        __n = sVar4;
        if ((int)sVar5 <= (int)sVar4) {
          __n = sVar5;
        }
        iVar1 = memcmp(__s1,*(void **)pUVar3,__n);
        if (((iVar1 == 0) && ((int)sVar4 <= (int)sVar5)) && ((int)sVar5 <= (int)sVar4)) break;
        this_00 = this_00 + 0x90;
        pUVar3 = pUVar3 + 0x90;
        if (pUVar6 <= this_00) {
          return 0;
        }
      }
      if (this_00 != (UPreference_TextureFont *)0x0) {
        uVar2 = UPreference_TextureFont::SetUserMessage(this_00,param_4);
        return uVar2;
      }
      return 0;
    }
  }
  return 0;
}

