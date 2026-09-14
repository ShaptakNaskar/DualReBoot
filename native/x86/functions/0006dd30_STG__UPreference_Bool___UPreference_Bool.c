/* 0006dd30 | STG::UPreference_Bool::~UPreference_Bool */

/* STG::UPreference_Bool::~UPreference_Bool() */

void __thiscall STG::UPreference_Bool::~UPreference_Bool(UPreference_Bool *this)

{
  int unaff_EBX;
  
  FUN_0002e044();
  *(int *)this = *(int *)(unaff_EBX + 0x2e1e3) + 8;
  if (*(void **)(this + 0x7c) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x7c));
  }
  *(undefined4 *)(this + 0x7c) = 0;
  UPreferenceBase::~UPreferenceBase((UPreferenceBase *)this);
  return;
}

