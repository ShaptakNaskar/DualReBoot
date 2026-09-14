/* 00071a90 | STG::UPreference_FileChooser::UPreference_FileChooser */

/* STG::UPreference_FileChooser::UPreference_FileChooser() */

void __thiscall STG::UPreference_FileChooser::UPreference_FileChooser(UPreference_FileChooser *this)

{
  int iVar1;
  int unaff_EBX;
  
  FUN_0002e044();
  UPreferenceBase::UPreferenceBase((UPreferenceBase *)this);
  iVar1 = *(int *)((int)DWORD_ARRAY_00028b54 + unaff_EBX + 0x1943);
  *(undefined4 *)(this + 0x7c) = 0;
  *(undefined4 *)(this + 0x80) = 0;
  *(undefined4 *)(this + 0x84) = 0;
  *(int *)this = iVar1 + 8;
  return;
}

