/* 0005c464 | STG::USerialize::Load */

/* STG::USerialize::Load(STG::FFileBase const*, STG::UPreference_CameraSet&) */

void STG::USerialize::Load(FFileBase *param_1,UPreference_CameraSet *param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  uint local_80;
  int local_7c;
  int local_78;
  int iStack_74;
  int local_70;
  _String_base<char,std::allocator<char>> a_Stack_6c [24];
  int local_54;
  _String_base<char,std::allocator<char>> a_Stack_50 [24];
  int local_38;
  _String_base<char,std::allocator<char>> a_Stack_34 [24];
  int local_1c;
  
  piVar1 = *(int **)(DAT_0005c5dc + 0x5c47c);
  local_1c = *piVar1;
  FFileBase::Peek((uchar *)param_1,(ulong)&local_78);
  if (iStack_74 == DAT_0005c5e4 && local_78 == DAT_0005c5e0) {
    FFileBase::Read(param_1,(uchar *)&local_78,8);
    FFileBase::Read(param_1,(uchar *)&local_7c,4);
    UStringBase<char,int>::UStringBase((UStringBase<char,int> *)&local_70);
    if (local_7c != 0) {
      Load<char,int>(param_1,(UStringBase *)&local_70);
    }
  }
  else {
    UStringBase<char,int>::UStringBase((UStringBase<char,int> *)&local_70);
  }
  UStringBase<char,int>::UStringBase((UStringBase<char,int> *)&local_54);
  UStringBase<char,int>::UStringBase((UStringBase<char,int> *)&local_38);
  Load<char,int>(param_1,(UStringBase *)&local_54);
  Load<char,int>(param_1,(UStringBase *)&local_38);
  FFileBase::Read(param_1,(uchar *)&local_80,4);
  (**(code **)(*(int *)param_2 + 0x44))(param_2,&local_70,&local_54,&local_38,local_80);
  if (local_80 != 0) {
    iVar2 = 0;
    uVar3 = 0;
    do {
      uVar3 = uVar3 + 1;
      Load<char,int>(param_1,(UStringBase *)(*(int *)(param_2 + 0x7c) + iVar2));
      iVar2 = iVar2 + 0x1c;
    } while (uVar3 < local_80);
  }
  iVar2 = *(int *)(DAT_0005c5e8 + 0x5c558) + 8;
  local_38 = iVar2;
  std::priv::_String_base<char,std::allocator<char>>::_M_deallocate_block(a_Stack_34);
  local_54 = iVar2;
  std::priv::_String_base<char,std::allocator<char>>::_M_deallocate_block(a_Stack_50);
  local_70 = iVar2;
  std::priv::_String_base<char,std::allocator<char>>::_M_deallocate_block(a_Stack_6c);
  if (local_1c == *piVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

