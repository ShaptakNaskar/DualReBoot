/* 0005c0bc | STG::USerialize::Load */

/* STG::USerialize::Load(STG::FFileBase const*, STG::UPreference_ModelToggle&) */

void STG::USerialize::Load(FFileBase *param_1,UPreference_ModelToggle *param_2)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
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
  
  piVar2 = *(int **)(DAT_0005c250 + 0x5c0d4);
  local_1c = *piVar2;
  FFileBase::Peek((uchar *)param_1,(ulong)&local_78);
  if (iStack_74 == DAT_0005c258 && local_78 == DAT_0005c254) {
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
    uVar3 = 0;
    do {
      FFileBase::Read(param_1,(uchar *)&local_7c,4);
      *(int *)(*(int *)(param_2 + 0x88) + uVar3 * 4) = local_7c;
      uVar3 = uVar3 + 1;
    } while (uVar3 < local_80);
  }
  iVar1 = *(int *)(DAT_0005c25c + 0x5c1cc) + 8;
  local_38 = iVar1;
  std::priv::_String_base<char,std::allocator<char>>::_M_deallocate_block(a_Stack_34);
  local_54 = iVar1;
  std::priv::_String_base<char,std::allocator<char>>::_M_deallocate_block(a_Stack_50);
  local_70 = iVar1;
  std::priv::_String_base<char,std::allocator<char>>::_M_deallocate_block(a_Stack_6c);
  if (local_1c == *piVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

