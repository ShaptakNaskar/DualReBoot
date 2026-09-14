/* 00079cc0 | STG::UPreference_Scene::SetValueByKey */

/* STG::UPreference_Scene::SetValueByKey(STG::UPreference_Scene::EPreferenceType,
   STG::UStringBase<char, int> const&, STG::UStringBase<unsigned short, unsigned short> const&) */

undefined4 __thiscall
STG::UPreference_Scene::SetValueByKey
          (UPreference_Scene *this,int param_2,int param_3,UStringBase *param_4)

{
  void *__s1;
  UPreference_TextureFont *pUVar1;
  int iVar2;
  undefined4 uVar3;
  size_t __n;
  size_t sVar4;
  size_t sVar5;
  UPreference_TextureFont *this_00;
  
  FUN_0002e044();
  if (param_2 == 5) {
    this_00 = *(UPreference_TextureFont **)(this + 0x24);
    pUVar1 = this_00 + *(int *)(this + 0x28) * 0x90;
    if (this_00 < pUVar1) {
      __s1 = *(void **)(param_3 + 0x18);
      sVar4 = *(int *)(param_3 + 0x14) - (int)__s1;
      do {
        sVar5 = *(int *)(this_00 + 0x18) - (int)*(void **)(this_00 + 0x1c);
        __n = sVar4;
        if ((int)sVar5 <= (int)sVar4) {
          __n = sVar5;
        }
        iVar2 = memcmp(__s1,*(void **)(this_00 + 0x1c),__n);
        if (((iVar2 == 0) && ((int)sVar5 <= (int)sVar4)) && ((int)sVar4 <= (int)sVar5)) {
          if (this_00 == (UPreference_TextureFont *)0x0) {
            return 0;
          }
          uVar3 = UPreference_TextureFont::SetUserMessage(this_00,param_4);
          return uVar3;
        }
        this_00 = this_00 + 0x90;
      } while (this_00 < pUVar1);
    }
  }
  return 0;
}

