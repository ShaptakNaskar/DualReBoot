/* 00057328 | STG::UPreference<STG::UStringBase<char,int>,true>::Initialize */

/* STG::UPreference<STG::UStringBase<char, int>, true>::Initialize(STG::UStringBase<char, int>
   const&, STG::UStringBase<char, int> const&, STG::UStringBase<char, int> const&, unsigned long) */

void __thiscall
STG::UPreference<STG::UStringBase<char,int>,true>::Initialize
          (UPreference<STG::UStringBase<char,int>,true> *this,UStringBase *param_1,
          UStringBase *param_2,UStringBase *param_3,ulong param_4)

{
  undefined4 *puVar1;
  int iVar2;
  UStringBase<char,int> *this_00;
  
  *(ulong *)(this + 0x80) = param_4;
  UPreferenceBase::Initialize((UPreferenceBase *)this,param_1,param_2,param_3);
  iVar2 = *(int *)(this + 0x80);
  if (iVar2 != 0) {
    puVar1 = operator_new__(iVar2 * 0x1c + 8);
    *puVar1 = 0x1c;
    puVar1[1] = iVar2;
    this_00 = (UStringBase<char,int> *)(puVar1 + 2);
    while (iVar2 = iVar2 + -1, iVar2 != -1) {
      UStringBase<char,int>::UStringBase(this_00);
      this_00 = this_00 + 0x1c;
    }
    *(UStringBase<char,int> **)(this + 0x7c) = (UStringBase<char,int> *)(puVar1 + 2);
    return;
  }
  return;
}

