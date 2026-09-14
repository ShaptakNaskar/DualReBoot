/* 0005fc90 | STG::UPreference_Bool::~UPreference_Bool */

/* STG::UPreference_Bool::~UPreference_Bool() */

UPreference_Bool * __thiscall STG::UPreference_Bool::~UPreference_Bool(UPreference_Bool *this)

{
  *(int *)this = *(int *)(DAT_0005fcd0 + 0x5fcac) + 8;
  if (*(void **)(this + 0x7c) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x7c));
  }
  *(undefined4 *)(this + 0x7c) = 0;
  UPreferenceBase::~UPreferenceBase((UPreferenceBase *)this);
  return this;
}

