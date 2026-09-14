/* 0006be3c | STG::UPreference_TimeOfDay_Auto::UPreference_TimeOfDay_Auto */

/* STG::UPreference_TimeOfDay_Auto::UPreference_TimeOfDay_Auto() */

UPreference_TimeOfDay_Auto * __thiscall
STG::UPreference_TimeOfDay_Auto::UPreference_TimeOfDay_Auto(UPreference_TimeOfDay_Auto *this)

{
  int iVar1;
  
  UPreferenceBase::UPreferenceBase((UPreferenceBase *)this);
  iVar1 = DAT_0006be74;
  *(undefined4 *)(this + 0x7c) = 0;
  iVar1 = *(int *)(iVar1 + 0x6be60);
  *(undefined4 *)(this + 0x80) = 0;
  *(undefined4 *)(this + 0x84) = 0;
  *(int *)this = iVar1 + 8;
  *(undefined4 *)(this + 0x88) = 0;
  return this;
}

