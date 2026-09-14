/* 0005b8cc | STG::USerialize::Load */

/* STG::USerialize::Load(STG::FFileBase const*, STG::UPreference_TextureGroup&) */

void STG::USerialize::Load(FFileBase *param_1,UPreference_TextureGroup *param_2)

{
  int *piVar1;
  ulong uVar2;
  int iVar3;
  uint uVar4;
  uint local_84;
  uint local_80;
  ulong local_7c;
  int local_78;
  int iStack_74;
  int local_70;
  _String_base<char,std::allocator<char>> a_Stack_6c [24];
  int local_54;
  _String_base<char,std::allocator<char>> a_Stack_50 [24];
  int local_38;
  _String_base<char,std::allocator<char>> a_Stack_34 [24];
  int local_1c;
  
  piVar1 = *(int **)(DAT_0005ba9c + 0x5b8e4);
  local_1c = *piVar1;
  FFileBase::Peek((uchar *)param_1,(ulong)&local_78);
  if (iStack_74 == DAT_0005baa4 && local_78 == DAT_0005baa0) {
    FFileBase::Read(param_1,(uchar *)&local_78,8);
    FFileBase::Read(param_1,(uchar *)&local_7c,4);
    uVar2 = local_7c;
    UStringBase<char,int>::UStringBase((UStringBase<char,int> *)&local_70);
    if (uVar2 != 0) {
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
  FFileBase::Read(param_1,(uchar *)&local_84,4);
  FFileBase::Read(param_1,(uchar *)&local_80,4);
  (**(code **)(*(int *)param_2 + 0x48))
            (param_2,local_80,&local_70,&local_54,(UStringBase<char,int> *)&local_38,local_84);
  if (local_80 != 0) {
    uVar2 = 0;
    do {
      FFileBase::Read(param_1,(uchar *)&local_7c,4);
      UPreference_TextureGroup::SetChildID(param_2,uVar2,local_7c);
      uVar2 = uVar2 + 1;
    } while (uVar2 < local_80);
  }
  if (local_84 != 0) {
    iVar3 = 0;
    uVar4 = 0;
    do {
      uVar4 = uVar4 + 1;
      Load<char,int>(param_1,(UStringBase *)(*(int *)(param_2 + 0x7c) + iVar3));
      iVar3 = iVar3 + 0x1c;
    } while (uVar4 < local_84);
  }
  iVar3 = *(int *)(DAT_0005baa8 + 0x5ba18) + 8;
  local_38 = iVar3;
  std::priv::_String_base<char,std::allocator<char>>::_M_deallocate_block(a_Stack_34);
  local_54 = iVar3;
  std::priv::_String_base<char,std::allocator<char>>::_M_deallocate_block(a_Stack_50);
  local_70 = iVar3;
  std::priv::_String_base<char,std::allocator<char>>::_M_deallocate_block(a_Stack_6c);
  if (local_1c == *piVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

