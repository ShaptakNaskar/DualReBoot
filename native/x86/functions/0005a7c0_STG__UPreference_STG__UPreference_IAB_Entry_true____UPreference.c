/* 0005a7c0 | STG::UPreference<STG::UPreference_IAB_Entry,true>::~UPreference */

/* STG::UPreference<STG::UPreference_IAB_Entry, true>::~UPreference() */

void __thiscall
STG::UPreference<STG::UPreference_IAB_Entry,true>::~UPreference
          (UPreference<STG::UPreference_IAB_Entry,true> *this)

{
  UStringBase<char,int> *this_00;
  UStringBase<char,int> *pUVar1;
  UStringBase<char,int> *pUVar2;
  int unaff_EBX;
  
  FUN_0002e044();
  pUVar2 = *(UStringBase<char,int> **)(this + 0x7c);
  *(int *)this = *(int *)(unaff_EBX + 0x41730) + 8;
  if (pUVar2 != (UStringBase<char,int> *)0x0) {
    pUVar1 = pUVar2 + *(int *)(pUVar2 + -4) * 0x38;
    if (pUVar2 != pUVar2 + *(int *)(pUVar2 + -4) * 0x38) {
      do {
        this_00 = pUVar1 + -0x38;
        UStringBase<char,int>::~UStringBase(pUVar1 + -0x1c);
        UStringBase<char,int>::~UStringBase(this_00);
        pUVar2 = *(UStringBase<char,int> **)(this + 0x7c);
        pUVar1 = this_00;
      } while (pUVar2 != this_00);
    }
    operator_delete__(pUVar2 + -4);
  }
  *(undefined4 *)(this + 0x7c) = 0;
  UPreferenceBase::~UPreferenceBase((UPreferenceBase *)this);
  return;
}

