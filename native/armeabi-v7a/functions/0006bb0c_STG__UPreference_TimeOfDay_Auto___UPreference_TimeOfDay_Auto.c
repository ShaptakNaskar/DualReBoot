/* 0006bb0c | STG::UPreference_TimeOfDay_Auto::~UPreference_TimeOfDay_Auto */

/* STG::UPreference_TimeOfDay_Auto::~UPreference_TimeOfDay_Auto() */

UPreference_TimeOfDay_Auto * __thiscall
STG::UPreference_TimeOfDay_Auto::~UPreference_TimeOfDay_Auto(UPreference_TimeOfDay_Auto *this)

{
  *(int *)this = *(int *)(DAT_0006bb4c + 0x6bb28) + 8;
  if (*(void **)(this + 0x7c) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x7c));
  }
  *(undefined4 *)(this + 0x7c) = 0;
  UPreferenceBase::~UPreferenceBase((UPreferenceBase *)this);
  return this;
}

