/* 0006ba4c | STG::UPreference_TimeOfDay::Initialize */

/* STG::UPreference_TimeOfDay::Initialize(STG::UStringBase<char, int> const&, STG::UStringBase<char,
   int> const&, STG::UStringBase<char, int> const&, unsigned long) */

void __thiscall
STG::UPreference_TimeOfDay::Initialize
          (UPreference_TimeOfDay *this,UStringBase *param_1,UStringBase *param_2,
          UStringBase *param_3,ulong param_4)

{
  void *pvVar1;
  
  *(ulong *)(this + 0x80) = param_4;
  UPreferenceBase::Initialize((UPreferenceBase *)this,param_1,param_2,param_3);
  if (*(int *)(this + 0x80) == 0) {
    return;
  }
  pvVar1 = operator_new__(*(int *)(this + 0x80) << 2);
  *(void **)(this + 0x7c) = pvVar1;
  return;
}

