/* 0006fbac | STG::UPreference_TextureGroup::UPreference_TextureGroup */

/* STG::UPreference_TextureGroup::UPreference_TextureGroup() */

UPreference_TextureGroup * __thiscall
STG::UPreference_TextureGroup::UPreference_TextureGroup(UPreference_TextureGroup *this)

{
  int iVar1;
  
  UPreferenceBase::UPreferenceBase((UPreferenceBase *)this);
  iVar1 = DAT_0006fbf0;
  *(undefined4 *)(this + 0x7c) = 0;
  iVar1 = *(int *)(iVar1 + 0x6fbcc);
  *(undefined4 *)(this + 0x80) = 0;
  *(undefined4 *)(this + 0x84) = 0;
  *(int *)this = iVar1 + 8;
  *(undefined4 *)(this + 0x88) = 0;
  *(undefined4 *)(this + 0x8c) = 0;
  *(undefined4 *)(this + 0x90) = 0;
  *(undefined4 *)(this + 0x94) = 0;
  return this;
}

