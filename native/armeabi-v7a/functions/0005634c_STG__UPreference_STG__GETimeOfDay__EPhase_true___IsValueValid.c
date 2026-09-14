/* 0005634c | STG::UPreference<STG::GETimeOfDay::EPhase,true>::IsValueValid */

/* STG::UPreference<STG::GETimeOfDay::EPhase, true>::IsValueValid(STG::UStringBase<char, int>
   const&) const */

void __thiscall
STG::UPreference<STG::GETimeOfDay::EPhase,true>::IsValueValid
          (UPreference<STG::GETimeOfDay::EPhase,true> *this,UStringBase *param_1)

{
  int iVar1;
  size_t __n;
  size_t sVar2;
  undefined4 uVar3;
  size_t sVar4;
  uint uVar5;
  int *piVar6;
  int local_40;
  _String_base<char,std::allocator<char>> a_Stack_3c [16];
  int local_2c;
  void *local_28;
  int local_24;
  
  piVar6 = *(int **)(DAT_00056434 + 0x5636c);
  local_24 = *piVar6;
  UStringBase<char,int>::UStringBase((UStringBase<char,int> *)&local_40);
  uVar3 = 0;
  if (*(int *)(this + 0x80) != 0) {
    uVar5 = 0;
    do {
      (**(code **)(*(int *)this + 0x28))(this,uVar5,&local_40);
      sVar2 = *(int *)(param_1 + 0x14) - (int)*(void **)(param_1 + 0x18);
      sVar4 = local_2c - (int)local_28;
      __n = sVar2;
      if ((int)sVar4 <= (int)sVar2) {
        __n = sVar4;
      }
      iVar1 = memcmp(local_28,*(void **)(param_1 + 0x18),__n);
      if (((iVar1 == 0) && ((int)sVar2 <= (int)sVar4)) && ((int)sVar4 <= (int)sVar2)) {
        uVar3 = 1;
        goto LAB_000563e4;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < *(uint *)(this + 0x80));
    uVar3 = 0;
  }
LAB_000563e4:
  local_40 = *(int *)(DAT_00056438 + 0x563f4) + 8;
  std::priv::_String_base<char,std::allocator<char>>::_M_deallocate_block(a_Stack_3c);
  if (local_24 == *piVar6) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}

