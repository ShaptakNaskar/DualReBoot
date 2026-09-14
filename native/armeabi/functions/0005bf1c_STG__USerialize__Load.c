/* 0005bf1c | STG::USerialize::Load */

/* STG::USerialize::Load(STG::FFileBase const*, STG::UPreference_Environment&) */

void STG::USerialize::Load(FFileBase *param_1,UPreference_Environment *param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
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
  
  piVar1 = *(int **)(DAT_0005c0ac + 0x5bf34);
  local_24 = *piVar1;
  FFileBase::Peek((uchar *)param_1,(ulong)&local_80);
  if (iStack_7c == DAT_0005c0b4 && local_80 == DAT_0005c0b0) {
    FFileBase::Read(param_1,(uchar *)&local_80,8);
    FFileBase::Read(param_1,(uchar *)&local_84,4);
    UStringBase<char,int>::UStringBase((UStringBase<char,int> *)&local_78);
    if (1 < local_84) {
      Load<char,int>(param_1,(UStringBase *)&local_78);
      goto LAB_0005bf80;
    }
  }
  else {
    UStringBase<char,int>::UStringBase((UStringBase<char,int> *)&local_78);
  }
  FFileBase::Read(param_1,(uchar *)&local_84,4);
LAB_0005bf80:
  UStringBase<char,int>::UStringBase((UStringBase<char,int> *)&local_5c);
  UStringBase<char,int>::UStringBase((UStringBase<char,int> *)&local_40);
  Load<char,int>(param_1,(UStringBase *)&local_5c);
  Load<char,int>(param_1,(UStringBase *)&local_40);
  FFileBase::Read(param_1,(uchar *)&local_88,4);
  (**(code **)(*(int *)param_2 + 0x44))(param_2,&local_78,&local_5c,&local_40,local_88);
  if (local_88 != 0) {
    iVar2 = 0;
    uVar3 = 0;
    do {
      uVar3 = uVar3 + 1;
      Load<char,int>(param_1,(UStringBase *)(*(int *)(param_2 + 0x7c) + iVar2));
      iVar2 = iVar2 + 0x1c;
    } while (uVar3 < local_88);
  }
  iVar2 = *(int *)(DAT_0005c0b8 + 0x5c024) + 8;
  local_40 = iVar2;
  std::priv::_String_base<char,std::allocator<char>>::_M_deallocate_block(a_Stack_3c);
  local_5c = iVar2;
  std::priv::_String_base<char,std::allocator<char>>::_M_deallocate_block(a_Stack_58);
  local_78 = iVar2;
  std::priv::_String_base<char,std::allocator<char>>::_M_deallocate_block(a_Stack_74);
  if (local_24 == *piVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

