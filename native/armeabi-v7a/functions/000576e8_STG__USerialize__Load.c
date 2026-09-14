/* 000576e8 | STG::USerialize::Load */

/* STG::USerialize::Load(STG::FFileBase const*, STG::UPreference_Environment&) */

void STG::USerialize::Load(FFileBase *param_1,UPreference_Environment *param_2)

{
  UStringBase *pUVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  uint local_88;
  uint local_84;
  int local_80;
  int iStack_7c;
  int local_78;
  _String_base<char,std::allocator<char>> a_Stack_74 [24];
  int local_5c;
  _String_base<char,std::allocator<char>> a_Stack_58 [24];
  int local_40;
  _String_base<char,std::allocator<char>> a_Stack_3c [24];
  int local_24;
  
  piVar2 = *(int **)(DAT_00057880 + 0x57708);
  local_24 = *piVar2;
  FFileBase::Peek((uchar *)param_1,(ulong)&local_80);
  if (iStack_7c == 0x49564e45 && local_80 == 0x46455250) {
    FFileBase::Read(param_1,(uchar *)&local_80,8);
    FFileBase::Read(param_1,(uchar *)&local_84,4);
    UStringBase<char,int>::UStringBase((UStringBase<char,int> *)&local_78);
    if (1 < local_84) {
      Load<char,int>(param_1,(UStringBase *)&local_78);
      goto LAB_00057754;
    }
  }
  else {
    UStringBase<char,int>::UStringBase((UStringBase<char,int> *)&local_78);
  }
  FFileBase::Read(param_1,(uchar *)&local_84,4);
LAB_00057754:
  UStringBase<char,int>::UStringBase((UStringBase<char,int> *)&local_5c);
  UStringBase<char,int>::UStringBase((UStringBase<char,int> *)&local_40);
  Load<char,int>(param_1,(UStringBase *)&local_5c);
  Load<char,int>(param_1,(UStringBase *)&local_40);
  FFileBase::Read(param_1,(uchar *)&local_88,4);
  (**(code **)(*(int *)param_2 + 0x44))(param_2,&local_78,&local_5c,&local_40,local_88);
  if (local_88 != 0) {
    iVar3 = 0;
    uVar4 = 0;
    do {
      uVar4 = uVar4 + 1;
      pUVar1 = (UStringBase *)(*(int *)(param_2 + 0x7c) + iVar3);
      iVar3 = iVar3 + 0x1c;
      Load<char,int>(param_1,pUVar1);
    } while (uVar4 < local_88);
  }
  iVar3 = *(int *)(DAT_00057884 + 0x577f8) + 8;
  local_40 = iVar3;
  std::priv::_String_base<char,std::allocator<char>>::_M_deallocate_block(a_Stack_3c);
  local_5c = iVar3;
  std::priv::_String_base<char,std::allocator<char>>::_M_deallocate_block(a_Stack_58);
  local_78 = iVar3;
  std::priv::_String_base<char,std::allocator<char>>::_M_deallocate_block(a_Stack_74);
  if (local_24 == *piVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

