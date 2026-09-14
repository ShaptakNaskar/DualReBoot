/* 000645e0 | STG::UPreference<unsigned_long,true>::~UPreference */

/* STG::UPreference<unsigned long, true>::~UPreference() */

UPreference<unsigned_long,true> * __thiscall
STG::UPreference<unsigned_long,true>::~UPreference(UPreference<unsigned_long,true> *this)

{
  *(int *)this = *(int *)(DAT_00064620 + 0x645f8) + 8;
  if (*(void **)(this + 0x7c) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x7c));
  }
  *(undefined4 *)(this + 0x7c) = 0;
  UPreferenceBase::~UPreferenceBase((UPreferenceBase *)this);
  return this;
}

