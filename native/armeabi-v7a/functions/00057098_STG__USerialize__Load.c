/* 00057098 | STG::USerialize::Load */

/* STG::USerialize::Load(STG::FFileBase const*, STG::UPreference_TextureGroup&) */

void STG::USerialize::Load(FFileBase *param_1,UPreference_TextureGroup *param_2)

{
  UStringBase *pUVar1;
  int *piVar2;
  ulong uVar3;
  int iVar4;
  uint uVar5;
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
  
  piVar2 = *(int **)(DAT_00057270 + 0x570b8);
  local_1c = *piVar2;
  FFileBase::Peek((uchar *)param_1,(ulong)&local_78);
  if (iStack_74 == 0x50524754 && local_78 == 0x46455250) {
    FFileBase::Read(param_1,(uchar *)&local_78,8);
    FFileBase::Read(param_1,(uchar *)&local_7c,4);
    uVar3 = local_7c;
    UStringBase<char,int>::UStringBase((UStringBase<char,int> *)&local_70);
    if (uVar3 != 0) {
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
    uVar3 = 0;
    do {
      FFileBase::Read(param_1,(uchar *)&local_7c,4);
      UPreference_TextureGroup::SetChildID(param_2,uVar3,local_7c);
      uVar3 = uVar3 + 1;
    } while (uVar3 < local_80);
  }
  if (local_84 != 0) {
    iVar4 = 0;
    uVar5 = 0;
    do {
      uVar5 = uVar5 + 1;
      pUVar1 = (UStringBase *)(*(int *)(param_2 + 0x7c) + iVar4);
      iVar4 = iVar4 + 0x1c;
      Load<char,int>(param_1,pUVar1);
    } while (uVar5 < local_84);
  }
  iVar4 = *(int *)(DAT_00057274 + 0x571ec) + 8;
  local_38 = iVar4;
  std::priv::_String_base<char,std::allocator<char>>::_M_deallocate_block(a_Stack_34);
  local_54 = iVar4;
  std::priv::_String_base<char,std::allocator<char>>::_M_deallocate_block(a_Stack_50);
  local_70 = iVar4;
  std::priv::_String_base<char,std::allocator<char>>::_M_deallocate_block(a_Stack_6c);
  if (local_1c == *piVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

