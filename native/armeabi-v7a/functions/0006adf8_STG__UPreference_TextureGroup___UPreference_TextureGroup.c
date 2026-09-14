/* 0006adf8 | STG::UPreference_TextureGroup::~UPreference_TextureGroup */

/* STG::UPreference_TextureGroup::~UPreference_TextureGroup() */

UPreference_TextureGroup * __thiscall
STG::UPreference_TextureGroup::~UPreference_TextureGroup(UPreference_TextureGroup *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  *(int *)this = *(int *)(DAT_0006aedc + 0x6ae14) + 8;
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
  iVar1 = *(int *)(this + 0x7c);
  *(int *)this = *(int *)(DAT_0006aee0 + 0x6ae74) + 8;
  if (iVar1 != 0) {
    iVar3 = iVar1 + *(int *)(iVar1 + -4) * 0x1c;
    if (iVar1 != iVar3) {
      do {
        iVar2 = iVar3 + -0x1c;
        (*(code *)**(undefined4 **)(iVar3 + -0x1c))(iVar2);
        iVar1 = *(int *)(this + 0x7c);
        iVar3 = iVar2;
      } while (iVar1 != iVar2);
    }
    operator_delete__((void *)(iVar1 + -8));
  }
  *(undefined4 *)(this + 0x7c) = 0;
  UPreferenceBase::~UPreferenceBase((UPreferenceBase *)this);
  return this;
}

