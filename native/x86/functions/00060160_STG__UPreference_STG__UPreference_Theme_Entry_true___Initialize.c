/* 00060160 | STG::UPreference<STG::UPreference_Theme_Entry,true>::Initialize */

/* STG::UPreference<STG::UPreference_Theme_Entry, true>::Initialize(STG::UStringBase<char, int>
   const&, STG::UStringBase<char, int> const&, STG::UStringBase<char, int> const&, unsigned long) */

void __thiscall
STG::UPreference<STG::UPreference_Theme_Entry,true>::Initialize
          (UPreference<STG::UPreference_Theme_Entry,true> *this,UStringBase *param_1,
          UStringBase *param_2,UStringBase *param_3,ulong param_4)

{
  UStringBase<char,int> *this_00;
  int iVar1;
  int *piVar2;
  UStringBase<char,int> *this_01;
  
  FUN_0002e044();
  *(ulong *)(this + 0x80) = param_4;
  UPreferenceBase::Initialize((UPreferenceBase *)this,param_1,param_2,param_3);
  iVar1 = *(int *)(this + 0x80);
  if (iVar1 != 0) {
    piVar2 = operator_new__(iVar1 * 0x38 + 4);
    *piVar2 = iVar1;
    this_01 = (UStringBase<char,int> *)(piVar2 + 1);
    while (iVar1 = iVar1 + -1, iVar1 != -1) {
      UStringBase<char,int>::UStringBase(this_01);
      this_00 = this_01 + 0x1c;
      this_01 = this_01 + 0x38;
      UStringBase<char,int>::UStringBase(this_00);
    }
    *(UStringBase<char,int> **)(this + 0x7c) = (UStringBase<char,int> *)(piVar2 + 1);
  }
  return;
}

