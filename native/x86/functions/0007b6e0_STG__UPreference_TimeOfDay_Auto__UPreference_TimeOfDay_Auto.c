/* 0007b6e0 | STG::UPreference_TimeOfDay_Auto::UPreference_TimeOfDay_Auto */

/* STG::UPreference_TimeOfDay_Auto::UPreference_TimeOfDay_Auto() */

void __thiscall
STG::UPreference_TimeOfDay_Auto::UPreference_TimeOfDay_Auto(UPreference_TimeOfDay_Auto *this)

{
  int iVar1;
  int unaff_EBX;
  
  FUN_0002e044();
  UPreferenceBase::UPreferenceBase((UPreferenceBase *)this);
  iVar1 = *(int *)("_ZNK3STG11UPreferenceINS_11UStringBaseIciEELb1EE22GetSelectedValueByNameERS2_" +
                  unaff_EBX + 0x16);
  *(undefined4 *)(this + 0x7c) = 0;
  *(undefined4 *)(this + 0x80) = 0;
  *(undefined4 *)(this + 0x84) = 0;
  *(int *)this = iVar1 + 8;
  *(undefined4 *)(this + 0x88) = 0;
  return;
}

