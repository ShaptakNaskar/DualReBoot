/* 0007b260 | STG::UPreference_TimeOfDay::~UPreference_TimeOfDay */

/* STG::UPreference_TimeOfDay::~UPreference_TimeOfDay() */

void __thiscall STG::UPreference_TimeOfDay::~UPreference_TimeOfDay(UPreference_TimeOfDay *this)

{
  int unaff_EBX;
  
  FUN_0002e044();
  *(int *)this = *(int *)(
                         "_ZN3STG11UPreferenceINS_23UPreference_Theme_EntryELb1EE16SetSelectedValueERKS1_"
                         + unaff_EBX + 0x43) + 8;
  if (*(void **)(this + 0x7c) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x7c));
  }
  *(undefined4 *)(this + 0x7c) = 0;
  UPreferenceBase::~UPreferenceBase((UPreferenceBase *)this);
  return;
}

