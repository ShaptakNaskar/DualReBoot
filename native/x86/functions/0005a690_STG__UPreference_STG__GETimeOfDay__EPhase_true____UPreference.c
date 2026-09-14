/* 0005a690 | STG::UPreference<STG::GETimeOfDay::EPhase,true>::~UPreference */

/* STG::UPreference<STG::GETimeOfDay::EPhase, true>::~UPreference() */

void __thiscall
STG::UPreference<STG::GETimeOfDay::EPhase,true>::~UPreference
          (UPreference<STG::GETimeOfDay::EPhase,true> *this)

{
  int unaff_EBX;
  
  FUN_0002e044();
  *(int *)this = *(int *)(unaff_EBX + 0x41853) + 8;
  if (*(void **)(this + 0x7c) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x7c));
  }
  *(undefined4 *)(this + 0x7c) = 0;
  UPreferenceBase::~UPreferenceBase((UPreferenceBase *)this);
  return;
}

