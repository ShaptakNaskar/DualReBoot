/* 00061cf4 | STG::UPreference<bool,true>::Initialize */

/* STG::UPreference<bool, true>::Initialize(STG::UStringBase<char, int> const&,
   STG::UStringBase<char, int> const&, STG::UStringBase<char, int> const&, unsigned long) */

void __thiscall
STG::UPreference<bool,true>::Initialize
          (UPreference<bool,true> *this,UStringBase *param_1,UStringBase *param_2,
          UStringBase *param_3,ulong param_4)

{
  void *pvVar1;
  
  *(ulong *)(this + 0x80) = param_4;
  UPreferenceBase::Initialize((UPreferenceBase *)this,param_1,param_2,param_3);
  if (*(uint *)(this + 0x80) == 0) {
    return;
  }
  pvVar1 = operator_new__(*(uint *)(this + 0x80));
  *(void **)(this + 0x7c) = pvVar1;
  return;
}

