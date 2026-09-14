/* 00057a2c | STG::USerialize::Load */

/* STG::USerialize::Load(STG::FFileBase const*, STG::UPreference_ModelSwap&) */

void STG::USerialize::Load(FFileBase *param_1,UPreference_ModelSwap *param_2)

{
  ulong uVar1;
  uint uVar2;
  ulong uVar3;
  int iVar4;
  int *piVar5;
  undefined4 local_90;
  uint local_8c;
  ulong local_88;
  ulong local_84;
  int local_80;
  int iStack_7c;
  int local_78;
  _String_base<char,std::allocator<char>> a_Stack_74 [24];
  int local_5c;
  _String_base<char,std::allocator<char>> a_Stack_58 [24];
  int local_40;
  _String_base<char,std::allocator<char>> a_Stack_3c [24];
  int local_24;
  
  piVar5 = *(int **)(DAT_00057c28 + 0x57a4c);
  local_24 = *piVar5;
  FFileBase::Peek((uchar *)param_1,(ulong)&local_80);
  if (iStack_7c == 0x5057534d && local_80 == 0x46455250) {
    FFileBase::Read(param_1,(uchar *)&local_80,8);
    FFileBase::Read(param_1,(uchar *)&local_84,4);
    uVar3 = local_84;
    UStringBase<char,int>::UStringBase((UStringBase<char,int> *)&local_78);
    if (uVar3 != 0) {
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
  FFileBase::Read(param_1,(uchar *)&local_90,4);
  FFileBase::Read(param_1,(uchar *)&local_8c,4);
  (**(code **)(*(int *)param_2 + 0x48))
            (param_2,local_90,&local_78,&local_5c,(UStringBase<char,int> *)&local_40,local_8c);
  if (local_8c != 0) {
    iVar4 = 0;
    uVar3 = 0;
    do {
      Load<char,int>(param_1,(UStringBase *)(*(int *)(param_2 + 0x7c) + iVar4));
      FFileBase::Read(param_1,(uchar *)&local_88,4);
      UPreference_ModelSwap::SetModelCount(param_2,uVar3,local_88);
      if (local_88 != 0) {
        uVar1 = 0;
        do {
          FFileBase::Read(param_1,(uchar *)&local_84,4);
          uVar2 = uVar1 + 1;
          UPreference_ModelSwap::SetModelIndex(param_2,uVar3,uVar1,local_84);
          uVar1 = uVar2;
        } while (uVar2 < local_88);
      }
      uVar3 = uVar3 + 1;
      iVar4 = iVar4 + 0x1c;
    } while (uVar3 < local_8c);
  }
  iVar4 = *(int *)(DAT_00057c2c + 0x57ba4) + 8;
  local_40 = iVar4;
  std::priv::_String_base<char,std::allocator<char>>::_M_deallocate_block(a_Stack_3c);
  local_5c = iVar4;
  std::priv::_String_base<char,std::allocator<char>>::_M_deallocate_block(a_Stack_58);
  local_78 = iVar4;
  std::priv::_String_base<char,std::allocator<char>>::_M_deallocate_block(a_Stack_74);
  if (local_24 == *piVar5) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

