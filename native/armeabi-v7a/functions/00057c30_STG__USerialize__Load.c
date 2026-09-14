/* 00057c30 | STG::USerialize::Load */

/* STG::USerialize::Load(STG::FFileBase const*, STG::UPreference_CameraSet&) */

void STG::USerialize::Load(FFileBase *param_1,UPreference_CameraSet *param_2)

{
  UStringBase *pUVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
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
  
  piVar2 = *(int **)(DAT_00057db0 + 0x57c50);
  local_1c = *piVar2;
  FFileBase::Peek((uchar *)param_1,(ulong)&local_78);
  if (iStack_74 == 0x534d4143 && local_78 == 0x46455250) {
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
    iVar3 = 0;
    uVar4 = 0;
    do {
      uVar4 = uVar4 + 1;
      pUVar1 = (UStringBase *)(*(int *)(param_2 + 0x7c) + iVar3);
      iVar3 = iVar3 + 0x1c;
      Load<char,int>(param_1,pUVar1);
    } while (uVar4 < local_80);
  }
  iVar3 = *(int *)(DAT_00057db4 + 0x57d2c) + 8;
  local_38 = iVar3;
  std::priv::_String_base<char,std::allocator<char>>::_M_deallocate_block(a_Stack_34);
  local_54 = iVar3;
  std::priv::_String_base<char,std::allocator<char>>::_M_deallocate_block(a_Stack_50);
  local_70 = iVar3;
  std::priv::_String_base<char,std::allocator<char>>::_M_deallocate_block(a_Stack_6c);
  if (local_1c == *piVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

