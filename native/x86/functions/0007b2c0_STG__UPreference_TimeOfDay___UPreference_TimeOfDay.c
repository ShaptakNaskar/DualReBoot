/* 0007b2c0 | STG::UPreference_TimeOfDay::~UPreference_TimeOfDay */

/* STG::UPreference_TimeOfDay::~UPreference_TimeOfDay() */

void __thiscall STG::UPreference_TimeOfDay::~UPreference_TimeOfDay(UPreference_TimeOfDay *this)

{
  int unaff_EBX;
  
  FUN_0002e044();
  *(int *)this = *(int *)("_ZN3STG11UPreferenceINS_11UStringBaseIciEELb1EE16SetSelectedValueERKS2_"
                         + unaff_EBX + 0x2b) + 8;
  if (*(void **)(this + 0x7c) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x7c));
  }
  *(undefined4 *)(this + 0x7c) = 0;
  UPreferenceBase::~UPreferenceBase((UPreferenceBase *)this);
  operator_delete(this);
  return;
}

