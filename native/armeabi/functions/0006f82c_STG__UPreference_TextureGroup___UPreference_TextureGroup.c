/* 0006f82c | STG::UPreference_TextureGroup::~UPreference_TextureGroup */

/* STG::UPreference_TextureGroup::~UPreference_TextureGroup() */

UPreference_TextureGroup * __thiscall
STG::UPreference_TextureGroup::~UPreference_TextureGroup(UPreference_TextureGroup *this)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  
  *(int *)this = *(int *)(DAT_0006f910 + 0x6f844) + 8;
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
  iVar2 = *(int *)(this + 0x7c);
  *(int *)this = *(int *)(DAT_0006f914 + 0x6f8a4) + 8;
  if (iVar2 != 0) {
    iVar3 = *(int *)(iVar2 + -4) * 0x1c + iVar2;
    if (iVar2 != iVar3) {
      do {
        puVar1 = (undefined4 *)(iVar3 + -0x1c);
        iVar3 = iVar3 + -0x1c;
        (**(code **)*puVar1)(iVar3);
        iVar2 = *(int *)(this + 0x7c);
      } while (iVar2 != iVar3);
    }
    operator_delete__((void *)(iVar2 + -8));
  }
  *(undefined4 *)(this + 0x7c) = 0;
  UPreferenceBase::~UPreferenceBase((UPreferenceBase *)this);
  return this;
}

