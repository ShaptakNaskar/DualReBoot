/* 00072d30 | STG::UPreference_ModelToggle::UPreference_ModelToggle */

/* STG::UPreference_ModelToggle::UPreference_ModelToggle() */

void __thiscall STG::UPreference_ModelToggle::UPreference_ModelToggle(UPreference_ModelToggle *this)

{
  int iVar1;
  int unaff_EBX;
  
  FUN_0002e044();
  UPreferenceBase::UPreferenceBase((UPreferenceBase *)this);
  iVar1 = *(int *)((int)DWORD_ARRAY_00028b54 + unaff_EBX + 0x6ab);
  *(undefined4 *)(this + 0x7c) = 0;
  *(undefined4 *)(this + 0x80) = 0;
  *(undefined4 *)(this + 0x84) = 0;
  *(int *)this = iVar1 + 8;
  *(undefined4 *)(this + 0x88) = 0;
  *(undefined4 *)(this + 0x8c) = 0;
  return;
}

