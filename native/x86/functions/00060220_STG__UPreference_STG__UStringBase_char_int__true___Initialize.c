/* 00060220 | STG::UPreference<STG::UStringBase<char,int>,true>::Initialize */

/* STG::UPreference<STG::UStringBase<char, int>, true>::Initialize(STG::UStringBase<char, int>
   const&, STG::UStringBase<char, int> const&, STG::UStringBase<char, int> const&, unsigned long) */

void __thiscall
STG::UPreference<STG::UStringBase<char,int>,true>::Initialize
          (UPreference<STG::UStringBase<char,int>,true> *this,UStringBase *param_1,
          UStringBase *param_2,UStringBase *param_3,ulong param_4)

{
  int iVar1;
  int *piVar2;
  UStringBase<char,int> *this_00;
  
  FUN_0002e044();
  *(ulong *)(this + 0x80) = param_4;
  UPreferenceBase::Initialize((UPreferenceBase *)this,param_1,param_2,param_3);
  iVar1 = *(int *)(this + 0x80);
  if (iVar1 != 0) {
    piVar2 = operator_new__(iVar1 * 0x1c + 4);
    *piVar2 = iVar1;
    this_00 = (UStringBase<char,int> *)(piVar2 + 1);
    while (iVar1 = iVar1 + -1, iVar1 != -1) {
      UStringBase<char,int>::UStringBase(this_00);
      this_00 = this_00 + 0x1c;
    }
    *(UStringBase<char,int> **)(this + 0x7c) = (UStringBase<char,int> *)(piVar2 + 1);
  }
  return;
}

