/* 0006459c | STG::UPreference<bool,true>::~UPreference */

/* STG::UPreference<bool, true>::~UPreference() */

UPreference<bool,true> * __thiscall
STG::UPreference<bool,true>::~UPreference(UPreference<bool,true> *this)

{
  *(int *)this = *(int *)(DAT_000645dc + 0x645b4) + 8;
  if (*(void **)(this + 0x7c) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x7c));
  }
  *(undefined4 *)(this + 0x7c) = 0;
  UPreferenceBase::~UPreferenceBase((UPreferenceBase *)this);
  return this;
}

