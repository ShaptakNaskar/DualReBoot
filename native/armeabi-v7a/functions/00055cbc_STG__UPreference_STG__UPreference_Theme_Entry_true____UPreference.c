/* 00055cbc | STG::UPreference<STG::UPreference_Theme_Entry,true>::~UPreference */

/* STG::UPreference<STG::UPreference_Theme_Entry, true>::~UPreference() */

UPreference<STG::UPreference_Theme_Entry,true> * __thiscall
STG::UPreference<STG::UPreference_Theme_Entry,true>::~UPreference
          (UPreference<STG::UPreference_Theme_Entry,true> *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar1 = *(int *)(this + 0x7c);
  *(int *)this = *(int *)(DAT_00055d5c + 0x55cd8) + 8;
  if (iVar1 != 0) {
    iVar5 = iVar1 + *(int *)(iVar1 + -4) * 0x38;
    if (iVar1 != iVar5) {
      iVar3 = *(int *)(DAT_00055d60 + 0x55d0c) + 8;
      iVar2 = iVar5;
      do {
        iVar4 = iVar2 + -0x38;
        *(int *)((iVar2 - iVar5) + iVar5 + -0x1c) = iVar3;
        std::priv::_String_base<char,std::allocator<char>>::_M_deallocate_block
                  ((_String_base<char,std::allocator<char>> *)(iVar2 + -0x18));
        *(int *)((iVar2 - iVar5) + iVar5 + -0x38) = iVar3;
        std::priv::_String_base<char,std::allocator<char>>::_M_deallocate_block
                  ((_String_base<char,std::allocator<char>> *)(iVar2 + -0x34));
        iVar1 = *(int *)(this + 0x7c);
        iVar2 = iVar4;
      } while (iVar1 != iVar4);
    }
    operator_delete__((void *)(iVar1 + -8));
  }
  *(undefined4 *)(this + 0x7c) = 0;
  UPreferenceBase::~UPreferenceBase((UPreferenceBase *)this);
  return this;
}

