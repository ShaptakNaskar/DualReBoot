/* 00063e1c | STG::UPreference_ModelToggle::UPreference_ModelToggle */

/* STG::UPreference_ModelToggle::UPreference_ModelToggle() */

UPreference_ModelToggle * __thiscall
STG::UPreference_ModelToggle::UPreference_ModelToggle(UPreference_ModelToggle *this)

{
  int iVar1;
  
  UPreferenceBase::UPreferenceBase((UPreferenceBase *)this);
  iVar1 = DAT_00063e58;
  *(undefined4 *)(this + 0x7c) = 0;
  iVar1 = *(int *)(iVar1 + 0x63e40);
  *(undefined4 *)(this + 0x80) = 0;
  *(undefined4 *)(this + 0x84) = 0;
  *(int *)this = iVar1 + 8;
  *(undefined4 *)(this + 0x88) = 0;
  *(undefined4 *)(this + 0x8c) = 0;
  return this;
}

