/* 00057580 | STG::USerialize::Load */

/* STG::USerialize::Load(STG::FFileBase const*, STG::UPreference_FileChooser_Texture&) */

void STG::USerialize::Load(FFileBase *param_1,UPreference_FileChooser_Texture *param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 local_8c;
  undefined4 local_88;
  int local_84;
  int local_80;
  int iStack_7c;
  int local_78;
  _String_base<char,std::allocator<char>> a_Stack_74 [24];
  int local_5c;
  _String_base<char,std::allocator<char>> a_Stack_58 [24];
  int local_40;
  _String_base<char,std::allocator<char>> a_Stack_3c [24];
  int local_24;
  
  piVar2 = *(int **)(DAT_000576e0 + 0x575a0);
  local_24 = *piVar2;
  FFileBase::Peek((uchar *)param_1,(ulong)&local_80);
  if (iStack_7c == 0x58544346 && local_80 == 0x46455250) {
    FFileBase::Read(param_1,(uchar *)&local_80,8);
    FFileBase::Read(param_1,(uchar *)&local_84,4);
    UStringBase<char,int>::UStringBase((UStringBase<char,int> *)&local_78);
    if (local_84 != 0) {
      Load<char,int>(param_1,(UStringBase *)&local_78);
    }
  }
  else {
    UStringBase<char,int>::UStringBase((UStringBase<char,int> *)&local_78);
  }
  UStringBase<char,int>::UStringBase((UStringBase<char,int> *)&local_5c);
  UStringBase<char,int>::UStringBase((UStringBase<char,int> *)&local_40);
  Load<char,int>(param_1,(UStringBase *)&local_5c);
  Load<char,int>(param_1,(UStringBase *)&local_40);
  FFileBase::Read(param_1,(uchar *)&local_8c,4);
  FFileBase::Read(param_1,(uchar *)&local_88,4);
  iVar1 = DAT_000576e4;
  (**(code **)(*(int *)param_2 + 0x48))
            (param_2,local_8c,local_88,&local_78,(UStringBase<char,int> *)&local_5c,
             (UStringBase<char,int> *)&local_40);
  iVar1 = *(int *)(iVar1 + 0x5765c) + 8;
  local_40 = iVar1;
  std::priv::_String_base<char,std::allocator<char>>::_M_deallocate_block(a_Stack_3c);
  local_5c = iVar1;
  std::priv::_String_base<char,std::allocator<char>>::_M_deallocate_block(a_Stack_58);
  local_78 = iVar1;
  std::priv::_String_base<char,std::allocator<char>>::_M_deallocate_block(a_Stack_74);
  if (local_24 == *piVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

