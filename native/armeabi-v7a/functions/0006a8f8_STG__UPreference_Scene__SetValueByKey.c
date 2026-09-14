/* 0006a8f8 | STG::UPreference_Scene::SetValueByKey */

/* STG::UPreference_Scene::SetValueByKey(STG::UPreference_Scene::EPreferenceType,
   STG::UStringBase<char, int> const&, STG::UStringBase<unsigned short, unsigned short> const&) */

undefined4 __thiscall
STG::UPreference_Scene::SetValueByKey
          (UPreference_Scene *this,int param_2,int param_3,UStringBase *param_4)

{
  UPreference_TextureFont *pUVar1;
  int iVar2;
  undefined4 uVar3;
  void *__s2;
  size_t __n;
  UPreference_TextureFont *pUVar4;
  size_t sVar5;
  UPreference_TextureFont *this_00;
  size_t sVar6;
  void *__s1;
  UPreference_TextureFont *pUVar7;
  
  if (param_2 == 5) {
    this_00 = *(UPreference_TextureFont **)(this + 0x24);
    pUVar7 = this_00 + *(int *)(this + 0x28) * 0x90;
    if (this_00 < pUVar7) {
      __s1 = *(void **)(param_3 + 0x18);
      pUVar4 = this_00 + 0x1c;
      sVar6 = *(int *)(param_3 + 0x14) - (int)__s1;
      while( true ) {
        __s2 = *(void **)pUVar4;
        pUVar1 = pUVar4 + -4;
        pUVar4 = pUVar4 + 0x90;
        sVar5 = *(int *)pUVar1 - (int)__s2;
        __n = sVar5;
        if ((int)sVar6 <= (int)sVar5) {
          __n = sVar6;
        }
        iVar2 = memcmp(__s1,__s2,__n);
        if (((iVar2 == 0) && ((int)sVar5 <= (int)sVar6)) && ((int)sVar6 <= (int)sVar5)) break;
        this_00 = this_00 + 0x90;
        if (pUVar7 <= this_00) {
          return 0;
        }
      }
      if (this_00 != (UPreference_TextureFont *)0x0) {
        uVar3 = UPreference_TextureFont::SetUserMessage(this_00,param_4);
        return uVar3;
      }
      return 0;
    }
  }
  return 0;
}

