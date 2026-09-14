/* 0005a46c | STG::UPreference<STG::UPreference_IAB_Entry,true>::~UPreference */

/* STG::UPreference<STG::UPreference_IAB_Entry, true>::~UPreference() */

UPreference<STG::UPreference_IAB_Entry,true> * __thiscall
STG::UPreference<STG::UPreference_IAB_Entry,true>::~UPreference
          (UPreference<STG::UPreference_IAB_Entry,true> *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = *(int *)(this + 0x7c);
  *(int *)this = *(int *)(DAT_0005a508 + 0x5a484) + 8;
  if (iVar1 != 0) {
    iVar4 = *(int *)(iVar1 + -4) * 0x38 + iVar1;
    if (iVar1 != iVar4) {
      iVar3 = *(int *)(DAT_0005a50c + 0x5a4b8) + 8;
      iVar2 = iVar4;
      do {
        *(int *)((iVar2 - iVar4) + iVar4 + -0x1c) = iVar3;
        std::priv::_String_base<char,std::allocator<char>>::_M_deallocate_block
                  ((_String_base<char,std::allocator<char>> *)(iVar2 + -0x18));
        *(int *)((iVar2 - iVar4) + iVar4 + -0x38) = iVar3;
        std::priv::_String_base<char,std::allocator<char>>::_M_deallocate_block
                  ((_String_base<char,std::allocator<char>> *)(iVar2 + -0x34));
        iVar1 = *(int *)(this + 0x7c);
        iVar2 = iVar2 + -0x38;
      } while (iVar1 != iVar2);
    }
    operator_delete__((void *)(iVar1 + -8));
  }
  *(undefined4 *)(this + 0x7c) = 0;
  UPreferenceBase::~UPreferenceBase((UPreferenceBase *)this);
  return this;
}

