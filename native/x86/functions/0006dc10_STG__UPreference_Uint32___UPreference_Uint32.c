/* 0006dc10 | STG::UPreference_Uint32::~UPreference_Uint32 */

/* STG::UPreference_Uint32::~UPreference_Uint32() */

void __thiscall STG::UPreference_Uint32::~UPreference_Uint32(UPreference_Uint32 *this)

{
  int unaff_EBX;
  
  FUN_0002e044();
  *(int *)this = *(int *)(unaff_EBX + 0x2e307) + 8;
  if (*(void **)(this + 0x7c) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x7c));
  }
  *(undefined4 *)(this + 0x7c) = 0;
  UPreferenceBase::~UPreferenceBase((UPreferenceBase *)this);
  operator_delete(this);
  return;
}

