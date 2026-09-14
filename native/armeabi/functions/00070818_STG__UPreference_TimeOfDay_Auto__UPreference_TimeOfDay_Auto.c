/* 00070818 | STG::UPreference_TimeOfDay_Auto::UPreference_TimeOfDay_Auto */

/* STG::UPreference_TimeOfDay_Auto::UPreference_TimeOfDay_Auto() */

UPreference_TimeOfDay_Auto * __thiscall
STG::UPreference_TimeOfDay_Auto::UPreference_TimeOfDay_Auto(UPreference_TimeOfDay_Auto *this)

{
  int iVar1;
  
  UPreferenceBase::UPreferenceBase((UPreferenceBase *)this);
  iVar1 = DAT_00070850;
  *(undefined4 *)(this + 0x7c) = 0;
  iVar1 = *(int *)(iVar1 + 0x70838);
  *(undefined4 *)(this + 0x80) = 0;
  *(undefined4 *)(this + 0x84) = 0;
  *(int *)this = iVar1 + 8;
  *(undefined4 *)(this + 0x88) = 0;
  return this;
}

