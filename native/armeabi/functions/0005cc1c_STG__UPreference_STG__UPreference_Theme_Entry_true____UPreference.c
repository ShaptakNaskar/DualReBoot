/* 0005cc1c | STG::UPreference<STG::UPreference_Theme_Entry,true>::~UPreference */

/* STG::UPreference<STG::UPreference_Theme_Entry, true>::~UPreference() */

UPreference<STG::UPreference_Theme_Entry,true> * __thiscall
STG::UPreference<STG::UPreference_Theme_Entry,true>::~UPreference
          (UPreference<STG::UPreference_Theme_Entry,true> *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = *(int *)(this + 0x7c);
  *(int *)this = *(int *)(DAT_0005ccc0 + 0x5cc34) + 8;
  if (iVar1 != 0) {
    iVar4 = *(int *)(iVar1 + -4) * 0x38 + iVar1;
    if (iVar1 != iVar4) {
      iVar3 = *(int *)(DAT_0005ccc4 + 0x5cc68) + 8;
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
  operator_delete(this);
  return this;
}

