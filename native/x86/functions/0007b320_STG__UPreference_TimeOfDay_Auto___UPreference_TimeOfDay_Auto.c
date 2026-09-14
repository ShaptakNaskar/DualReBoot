/* 0007b320 | STG::UPreference_TimeOfDay_Auto::~UPreference_TimeOfDay_Auto */

/* STG::UPreference_TimeOfDay_Auto::~UPreference_TimeOfDay_Auto() */

void __thiscall
STG::UPreference_TimeOfDay_Auto::~UPreference_TimeOfDay_Auto(UPreference_TimeOfDay_Auto *this)

{
  int unaff_EBX;
  
  FUN_0002e044();
  *(int *)this = *(int *)("_ZN3STG11UPreferenceINS_21UPreference_IAB_EntryELb1EED0Ev" +
                         unaff_EBX + 0x35) + 8;
  if (*(void **)(this + 0x7c) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x7c));
  }
  *(undefined4 *)(this + 0x7c) = 0;
  UPreferenceBase::~UPreferenceBase((UPreferenceBase *)this);
  return;
}

