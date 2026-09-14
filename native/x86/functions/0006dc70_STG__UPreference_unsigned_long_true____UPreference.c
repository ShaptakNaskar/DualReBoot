/* 0006dc70 | STG::UPreference<unsigned_long,true>::~UPreference */

/* STG::UPreference<unsigned long, true>::~UPreference() */

void __thiscall
STG::UPreference<unsigned_long,true>::~UPreference(UPreference<unsigned_long,true> *this)

{
  int unaff_EBX;
  
  FUN_0002e044();
  *(int *)this = *(int *)(unaff_EBX + 0x2e2a7) + 8;
  if (*(void **)(this + 0x7c) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x7c));
  }
  *(undefined4 *)(this + 0x7c) = 0;
  UPreferenceBase::~UPreferenceBase((UPreferenceBase *)this);
  operator_delete(this);
  return;
}

