/* 00061e44 | STG::UPreference_Bool::Initialize */

/* STG::UPreference_Bool::Initialize(STG::UStringBase<char, int> const&, STG::UStringBase<char, int>
   const&, STG::UStringBase<char, int> const&, bool) */

void __thiscall
STG::UPreference_Bool::Initialize
          (UPreference_Bool *this,UStringBase *param_1,UStringBase *param_2,UStringBase *param_3,
          bool param_4)

{
  void *pvVar1;
  
  *(undefined4 *)(this + 0x80) = 2;
  UPreferenceBase::Initialize((UPreferenceBase *)this,param_1,param_2,param_3);
  if (*(uint *)(this + 0x80) == 0) {
    pvVar1 = *(void **)(this + 0x7c);
  }
  else {
    pvVar1 = operator_new__(*(uint *)(this + 0x80));
    *(void **)(this + 0x7c) = pvVar1;
  }
  *(bool *)pvVar1 = param_4;
  *(bool *)((int)pvVar1 + 1) = !param_4;
  return;
}

