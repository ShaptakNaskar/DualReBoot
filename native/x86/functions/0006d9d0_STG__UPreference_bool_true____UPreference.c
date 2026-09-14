/* 0006d9d0 | STG::UPreference<bool,true>::~UPreference */

/* STG::UPreference<bool, true>::~UPreference() */

void __thiscall STG::UPreference<bool,true>::~UPreference(UPreference<bool,true> *this)

{
  int unaff_EBX;
  
  FUN_0002e044();
  *(int *)this = *(int *)(unaff_EBX + 0x2e543) + 8;
  if (*(void **)(this + 0x7c) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x7c));
  }
  *(undefined4 *)(this + 0x7c) = 0;
  UPreferenceBase::~UPreferenceBase((UPreferenceBase *)this);
  return;
}

