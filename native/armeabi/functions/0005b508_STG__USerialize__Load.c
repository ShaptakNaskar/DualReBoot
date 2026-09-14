/* 0005b508 | STG::USerialize::Load */

/* STG::USerialize::Load(STG::FFileBase const*, STG::UPreference_TimeOfDay&) */

void STG::USerialize::Load(FFileBase *param_1,UPreference_TimeOfDay *param_2)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  uint local_88;
  int local_84;
  int local_80;
  int iStack_7c;
  undefined4 local_78 [2];
  int local_70;
  _String_base<char,std::allocator<char>> a_Stack_6c [24];
  int local_54;
  _String_base<char,std::allocator<char>> a_Stack_50 [24];
  int local_38;
  _String_base<char,std::allocator<char>> a_Stack_34 [24];
  int local_1c;
  
  piVar2 = *(int **)(DAT_0005b720 + 0x5b520);
  local_1c = *piVar2;
  FFileBase::Peek((uchar *)param_1,(ulong)&local_80);
  if (iStack_7c == DAT_0005b728 && local_80 == DAT_0005b724) {
    FFileBase::Read(param_1,(uchar *)&local_80,8);
    FFileBase::Read(param_1,(uchar *)&local_84,4);
    iVar1 = local_84;
    UStringBase<char,int>::UStringBase((UStringBase<char,int> *)&local_70);
    if (iVar1 != 0) {
      Load<char,int>(param_1,(UStringBase *)&local_70);
      UStringBase<char,int>::UStringBase((UStringBase<char,int> *)&local_54);
      UStringBase<char,int>::UStringBase((UStringBase<char,int> *)&local_38);
      Load<char,int>(param_1,(UStringBase *)&local_54);
      Load<char,int>(param_1,(UStringBase *)&local_38);
      FFileBase::Read(param_1,(uchar *)&local_88,4);
      (**(code **)(*(int *)param_2 + 0x44))
                (param_2,(UStringBase<char,int> *)&local_70,&local_54,&local_38,local_88);
      if (local_88 != 0) {
        uVar3 = 0;
        do {
          FFileBase::Read(param_1,(uchar *)&local_84,4);
          *(int *)(*(int *)(param_2 + 0x7c) + uVar3 * 4) = local_84;
          uVar3 = uVar3 + 1;
        } while (uVar3 < local_88);
      }
      goto LAB_0005b5f4;
    }
  }
  else {
    UStringBase<char,int>::UStringBase((UStringBase<char,int> *)&local_70);
  }
  UStringBase<char,int>::UStringBase((UStringBase<char,int> *)&local_54);
  UStringBase<char,int>::UStringBase((UStringBase<char,int> *)&local_38);
  Load<char,int>(param_1,(UStringBase *)&local_54);
  Load<char,int>(param_1,(UStringBase *)&local_38);
  FFileBase::Read(param_1,(uchar *)&local_88,4);
  (**(code **)(*(int *)param_2 + 0x44))(param_2,&local_70,&local_54,&local_38,local_88);
  GETimeOfDay::GETimeOfDay((GETimeOfDay *)local_78);
  if (local_88 != 0) {
    uVar3 = 0;
    do {
      Load(param_1,(GETimeOfDay *)local_78);
      *(undefined4 *)(*(int *)(param_2 + 0x7c) + uVar3 * 4) = local_78[0];
      uVar3 = uVar3 + 1;
    } while (uVar3 < local_88);
  }
LAB_0005b5f4:
  iVar1 = *(int *)(DAT_0005b72c + 0x5b604) + 8;
  local_38 = iVar1;
  std::priv::_String_base<char,std::allocator<char>>::_M_deallocate_block(a_Stack_34);
  local_54 = iVar1;
  std::priv::_String_base<char,std::allocator<char>>::_M_deallocate_block(a_Stack_50);
  local_70 = iVar1;
  std::priv::_String_base<char,std::allocator<char>>::_M_deallocate_block(a_Stack_6c);
  if (local_1c != *piVar2) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

