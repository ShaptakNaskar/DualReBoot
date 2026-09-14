/* 00057888 | STG::USerialize::Load */

/* STG::USerialize::Load(STG::FFileBase const*, STG::UPreference_ModelToggle&) */

void STG::USerialize::Load(FFileBase *param_1,UPreference_ModelToggle *param_2)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  uchar local_81;
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
  
  piVar3 = *(int **)(DAT_00057a24 + 0x578a8);
  local_1c = *piVar3;
  FFileBase::Peek((uchar *)param_1,(ulong)&local_78);
  if (iStack_74 == 0x474f544d && local_78 == 0x46455250) {
    FFileBase::Read(param_1,(uchar *)&local_78,8);
    FFileBase::Read(param_1,(uchar *)&local_7c,4);
    iVar1 = local_7c;
    UStringBase<char,int>::UStringBase((UStringBase<char,int> *)&local_70);
    if (iVar1 != 0) {
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
  FFileBase::Read(param_1,&local_81,1);
  (**(code **)(*(int *)param_2 + 0x4c))
            (param_2,local_80,&local_70,&local_54,(UStringBase<char,int> *)&local_38,local_81);
  if (local_80 != 0) {
    uVar2 = 0;
    do {
      FFileBase::Read(param_1,(uchar *)&local_7c,4);
      *(int *)(*(int *)(param_2 + 0x88) + uVar2 * 4) = local_7c;
      uVar2 = uVar2 + 1;
    } while (uVar2 < local_80);
  }
  iVar1 = *(int *)(DAT_00057a28 + 0x579a0) + 8;
  local_38 = iVar1;
  std::priv::_String_base<char,std::allocator<char>>::_M_deallocate_block(a_Stack_34);
  local_54 = iVar1;
  std::priv::_String_base<char,std::allocator<char>>::_M_deallocate_block(a_Stack_50);
  local_70 = iVar1;
  std::priv::_String_base<char,std::allocator<char>>::_M_deallocate_block(a_Stack_6c);
  if (local_1c == *piVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

