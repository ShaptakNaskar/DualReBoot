/* 0007a2b0 | STG::UPreference_TextureGroup::~UPreference_TextureGroup */

/* STG::UPreference_TextureGroup::~UPreference_TextureGroup() */

void __thiscall
STG::UPreference_TextureGroup::~UPreference_TextureGroup(UPreference_TextureGroup *this)

{
  undefined4 *puVar1;
  int unaff_EBX;
  undefined4 *puVar2;
  
  FUN_0002e044();
  *(int *)this = *(int *)("_ZN3STG10USerialize4LoadEPKNS_9FFileBaseERNS_17UPreference_ThemeE" +
                         unaff_EBX + 0x36) + 8;
  if (*(int *)(this + 0x94) != 0) {
    if (*(void **)(this + 0x90) != (void *)0x0) {
      operator_delete__(*(void **)(this + 0x90));
    }
    *(undefined4 *)(this + 0x90) = 0;
    *(undefined4 *)(this + 0x94) = 0;
  }
  if (*(int *)(this + 0x8c) != 0) {
    if (*(void **)(this + 0x88) != (void *)0x0) {
      operator_delete__(*(void **)(this + 0x88));
    }
    *(undefined4 *)(this + 0x88) = 0;
    *(undefined4 *)(this + 0x8c) = 0;
  }
  *(int *)this = *(int *)("_ZN3STG10USerialize4LoadEPKNS_9FFileBaseERNS_21UPreference_TimeOfDayE" +
                         unaff_EBX + 0x20) + 8;
  puVar1 = *(undefined4 **)(this + 0x7c);
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = puVar1 + puVar1[-1] * 7;
    if (puVar1 != puVar2) {
      do {
        puVar2 = puVar2 + -7;
        (**(code **)*puVar2)(puVar2);
        puVar1 = *(undefined4 **)(this + 0x7c);
      } while (puVar1 != puVar2);
    }
    operator_delete__(puVar1 + -1);
  }
  *(undefined4 *)(this + 0x7c) = 0;
  UPreferenceBase::~UPreferenceBase((UPreferenceBase *)this);
  return;
}

