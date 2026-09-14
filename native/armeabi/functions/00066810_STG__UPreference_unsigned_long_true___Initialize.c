/* 00066810 | STG::UPreference<unsigned_long,true>::Initialize */

/* STG::UPreference<unsigned long, true>::Initialize(STG::UStringBase<char, int> const&,
   STG::UStringBase<char, int> const&, STG::UStringBase<char, int> const&, unsigned long) */

void __thiscall
STG::UPreference<unsigned_long,true>::Initialize
          (UPreference<unsigned_long,true> *this,UStringBase *param_1,UStringBase *param_2,
          UStringBase *param_3,ulong param_4)

{
  void *pvVar1;
  
  *(ulong *)(this + 0x80) = param_4;
  UPreferenceBase::Initialize((UPreferenceBase *)this,param_1,param_2,param_3);
  if (*(int *)(this + 0x80) != 0) {
    pvVar1 = operator_new__(*(int *)(this + 0x80) << 2);
    *(void **)(this + 0x7c) = pvVar1;
  }
  return;
}

