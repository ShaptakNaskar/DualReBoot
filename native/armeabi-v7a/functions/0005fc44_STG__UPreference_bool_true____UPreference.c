/* 0005fc44 | STG::UPreference<bool,true>::~UPreference */

/* STG::UPreference<bool, true>::~UPreference() */

UPreference<bool,true> * __thiscall
STG::UPreference<bool,true>::~UPreference(UPreference<bool,true> *this)

{
  *(int *)this = *(int *)(DAT_0005fc8c + 0x5fc60) + 8;
  if (*(void **)(this + 0x7c) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x7c));
  }
  *(undefined4 *)(this + 0x7c) = 0;
  UPreferenceBase::~UPreferenceBase((UPreferenceBase *)this);
  operator_delete(this);
  return this;
}

