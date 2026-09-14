/* 000501fc | STG::UPreference<STG::GETimeOfDay::EPhase,true>::~UPreference */

/* STG::UPreference<STG::GETimeOfDay::EPhase, true>::~UPreference() */

UPreference<STG::GETimeOfDay::EPhase,true> * __thiscall
STG::UPreference<STG::GETimeOfDay::EPhase,true>::~UPreference
          (UPreference<STG::GETimeOfDay::EPhase,true> *this)

{
  *(int *)this = *(int *)(DAT_00050244 + 0x50218) + 8;
  if (*(void **)(this + 0x7c) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x7c));
  }
  *(undefined4 *)(this + 0x7c) = 0;
  UPreferenceBase::~UPreferenceBase((UPreferenceBase *)this);
  operator_delete(this);
  return this;
}

