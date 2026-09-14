/* 00050100 | STG::UPreference<STG::UStringBase<char,int>,true>::~UPreference */

/* STG::UPreference<STG::UStringBase<char, int>, true>::~UPreference() */

UPreference<STG::UStringBase<char,int>,true> * __thiscall
STG::UPreference<STG::UStringBase<char,int>,true>::~UPreference
          (UPreference<STG::UStringBase<char,int>,true> *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *(int *)(this + 0x7c);
  *(int *)this = *(int *)(DAT_00050184 + 0x5011c) + 8;
  if (iVar1 != 0) {
    iVar3 = iVar1 + *(int *)(iVar1 + -4) * 0x1c;
    if (iVar1 != iVar3) {
      do {
        iVar2 = iVar3 + -0x1c;
        (*(code *)**(undefined4 **)(iVar3 + -0x1c))(iVar2);
        iVar1 = *(int *)(this + 0x7c);
        iVar3 = iVar2;
      } while (iVar1 != iVar2);
    }
    operator_delete__((void *)(iVar1 + -8));
  }
  *(undefined4 *)(this + 0x7c) = 0;
  UPreferenceBase::~UPreferenceBase((UPreferenceBase *)this);
  return this;
}

