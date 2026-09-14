/* 00070480 | STG::UPreference_TimeOfDay::~UPreference_TimeOfDay */

/* STG::UPreference_TimeOfDay::~UPreference_TimeOfDay() */

UPreference_TimeOfDay * __thiscall
STG::UPreference_TimeOfDay::~UPreference_TimeOfDay(UPreference_TimeOfDay *this)

{
  *(int *)this = *(int *)(DAT_000704c0 + 0x70498) + 8;
  if (*(void **)(this + 0x7c) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x7c));
  }
  *(undefined4 *)(this + 0x7c) = 0;
  UPreferenceBase::~UPreferenceBase((UPreferenceBase *)this);
  return this;
}

