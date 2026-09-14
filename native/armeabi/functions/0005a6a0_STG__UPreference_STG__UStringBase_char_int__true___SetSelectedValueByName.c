/* 0005a6a0 | STG::UPreference<STG::UStringBase<char,int>,true>::SetSelectedValueByName */

/* STG::UPreference<STG::UStringBase<char, int>,
   true>::SetSelectedValueByName(STG::UStringBase<char, int> const&) */

void __thiscall
STG::UPreference<STG::UStringBase<char,int>,true>::SetSelectedValueByName
          (UPreference<STG::UStringBase<char,int>,true> *this,UStringBase *param_1)

{
  int iVar1;
  size_t __n;
  undefined4 uVar2;
  size_t sVar3;
  size_t sVar4;
  uint uVar5;
  int *piVar6;
  int local_40;
  _String_base<char,std::allocator<char>> a_Stack_3c [16];
  int local_2c;
  void *local_28;
  int local_24;
  
  piVar6 = *(int **)(DAT_0005a79c + 0x5a6b8);
  local_24 = *piVar6;
  UStringBase<char,int>::UStringBase((UStringBase<char,int> *)&local_40);
  if (*(int *)(this + 0x80) == 0) {
    uVar2 = 0;
  }
  else {
    uVar5 = 0;
    do {
      (**(code **)(*(int *)this + 0x28))(this,uVar5,&local_40);
      sVar3 = *(int *)(param_1 + 0x14) - (int)*(void **)(param_1 + 0x18);
      sVar4 = local_2c - (int)local_28;
      __n = sVar3;
      if ((int)sVar4 <= (int)sVar3) {
        __n = sVar4;
      }
      iVar1 = memcmp(local_28,*(void **)(param_1 + 0x18),__n);
      if (((iVar1 == 0) && ((int)sVar3 <= (int)sVar4)) && ((int)sVar4 <= (int)sVar3)) {
        (**(code **)(*(int *)this + 0x24))(this,uVar5);
        uVar2 = 1;
        goto LAB_0005a74c;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < *(uint *)(this + 0x80));
    uVar2 = 0;
  }
LAB_0005a74c:
  local_40 = *(int *)(DAT_0005a7a0 + 0x5a75c) + 8;
  std::priv::_String_base<char,std::allocator<char>>::_M_deallocate_block(a_Stack_3c);
  if (local_24 == *piVar6) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}

