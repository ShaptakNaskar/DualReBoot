/* 0005c260 | STG::USerialize::Load */

/* STG::USerialize::Load(STG::FFileBase const*, STG::UPreference_ModelSwap&) */

void STG::USerialize::Load(FFileBase *param_1,UPreference_ModelSwap *param_2)

{
  ulong uVar1;
  ulong uVar2;
  int iVar3;
  int *piVar4;
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
  
  piVar4 = *(int **)(DAT_0005c454 + 0x5c278);
  local_24 = *piVar4;
  FFileBase::Peek((uchar *)param_1,(ulong)&local_80);
  if (iStack_7c == DAT_0005c45c && local_80 == DAT_0005c458) {
    FFileBase::Read(param_1,(uchar *)&local_80,8);
    FFileBase::Read(param_1,(uchar *)&local_84,4);
    uVar2 = local_84;
    UStringBase<char,int>::UStringBase((UStringBase<char,int> *)&local_78);
    if (uVar2 != 0) {
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
    iVar3 = 0;
    uVar2 = 0;
    do {
      Load<char,int>(param_1,(UStringBase *)(*(int *)(param_2 + 0x7c) + iVar3));
      FFileBase::Read(param_1,(uchar *)&local_88,4);
      UPreference_ModelSwap::SetModelCount(param_2,uVar2,local_88);
      if (local_88 != 0) {
        uVar1 = 0;
        do {
          FFileBase::Read(param_1,(uchar *)&local_84,4);
          UPreference_ModelSwap::SetModelIndex(param_2,uVar2,uVar1,local_84);
          uVar1 = uVar1 + 1;
        } while (uVar1 < local_88);
      }
      uVar2 = uVar2 + 1;
      iVar3 = iVar3 + 0x1c;
    } while (uVar2 < local_8c);
  }
  iVar3 = *(int *)(DAT_0005c460 + 0x5c3d0) + 8;
  local_40 = iVar3;
  std::priv::_String_base<char,std::allocator<char>>::_M_deallocate_block(a_Stack_3c);
  local_5c = iVar3;
  std::priv::_String_base<char,std::allocator<char>>::_M_deallocate_block(a_Stack_58);
  local_78 = iVar3;
  std::priv::_String_base<char,std::allocator<char>>::_M_deallocate_block(a_Stack_74);
  if (local_24 == *piVar4) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

