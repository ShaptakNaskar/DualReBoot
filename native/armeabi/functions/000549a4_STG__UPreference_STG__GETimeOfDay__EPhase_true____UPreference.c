/* 000549a4 | STG::UPreference<STG::GETimeOfDay::EPhase,true>::~UPreference */

/* STG::UPreference<STG::GETimeOfDay::EPhase, true>::~UPreference() */

UPreference<STG::GETimeOfDay::EPhase,true> * __thiscall
STG::UPreference<STG::GETimeOfDay::EPhase,true>::~UPreference
          (UPreference<STG::GETimeOfDay::EPhase,true> *this)

{
  *(int *)this = *(int *)(DAT_000549ec + 0x549bc) + 8;
  if (*(void **)(this + 0x7c) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x7c));
  }
  *(undefined4 *)(this + 0x7c) = 0;
  UPreferenceBase::~UPreferenceBase((UPreferenceBase *)this);
  operator_delete(this);
  return this;
}

