/* 000704c4 | STG::UPreference_TimeOfDay::~UPreference_TimeOfDay */

/* STG::UPreference_TimeOfDay::~UPreference_TimeOfDay() */

UPreference_TimeOfDay * __thiscall
STG::UPreference_TimeOfDay::~UPreference_TimeOfDay(UPreference_TimeOfDay *this)

{
  *(int *)this = *(int *)(DAT_0007050c + 0x704dc) + 8;
  if (*(void **)(this + 0x7c) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x7c));
  }
  *(undefined4 *)(this + 0x7c) = 0;
  UPreferenceBase::~UPreferenceBase((UPreferenceBase *)this);
  operator_delete(this);
  return this;
}

