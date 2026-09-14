/* 00067a14 | STG::UPreference_FileChooser::UPreference_FileChooser */

/* STG::UPreference_FileChooser::UPreference_FileChooser() */

UPreference_FileChooser * __thiscall
STG::UPreference_FileChooser::UPreference_FileChooser(UPreference_FileChooser *this)

{
  int iVar1;
  
  UPreferenceBase::UPreferenceBase((UPreferenceBase *)this);
  iVar1 = DAT_00067a48;
  *(undefined4 *)(this + 0x7c) = 0;
  iVar1 = *(int *)(iVar1 + 0x67a34);
  *(undefined4 *)(this + 0x80) = 0;
  *(undefined4 *)(this + 0x84) = 0;
  *(int *)this = iVar1 + 8;
  return this;
}

