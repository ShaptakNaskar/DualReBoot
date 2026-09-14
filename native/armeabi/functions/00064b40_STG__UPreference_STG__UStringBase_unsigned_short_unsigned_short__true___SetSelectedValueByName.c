/* 00064b40 | STG::UPreference<STG::UStringBase<unsigned_short,unsigned_short>,true>::SetSelectedValueByName */

/* STG::UPreference<STG::UStringBase<unsigned short, unsigned short>,
   true>::SetSelectedValueByName(STG::UStringBase<char, int> const&) */

void __thiscall
STG::UPreference<STG::UStringBase<unsigned_short,unsigned_short>,true>::SetSelectedValueByName
          (UPreference<STG::UStringBase<unsigned_short,unsigned_short>,true> *this,
          UStringBase *param_1)

{
  int iVar1;
  size_t __n;
  uint *puVar2;
  undefined4 uVar3;
  size_t sVar4;
  size_t sVar5;
  uint uVar6;
  int *piVar7;
  int iVar8;
  int local_48;
  uint local_44 [4];
  uint *local_34;
  uint *local_30;
  int local_2c;
  
  piVar7 = *(int **)(DAT_00064c84 + 0x64b5c);
  local_2c = *piVar7;
  iVar8 = *(int *)(DAT_00064c88 + 0x64b6c);
  uVar6 = 0;
  local_48 = iVar8 + 8;
  local_34 = local_44;
  local_44[0] = local_44[0] & 0xffffff00;
  local_30 = local_34;
  if (*(int *)(this + 0x80) == 0) {
    uVar3 = 0;
  }
  else {
    do {
      (**(code **)(*(int *)this + 0x28))(this,uVar6,&local_48);
      puVar2 = local_30;
      sVar4 = *(int *)(param_1 + 0x14) - (int)*(void **)(param_1 + 0x18);
      sVar5 = (int)local_34 - (int)local_30;
      __n = sVar4;
      if ((int)sVar5 <= (int)sVar4) {
        __n = sVar5;
      }
      iVar1 = memcmp(local_30,*(void **)(param_1 + 0x18),__n);
      if (((iVar1 == 0) && ((int)sVar4 <= (int)sVar5)) && ((int)sVar5 <= (int)sVar4)) {
        (**(code **)(*(int *)this + 0x24))(this,uVar6);
        uVar3 = 1;
        puVar2 = local_30;
        goto LAB_00064c10;
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < *(uint *)(this + 0x80));
    uVar3 = 0;
LAB_00064c10:
    local_48 = iVar8 + 8;
    if ((puVar2 != local_44) && (puVar2 != (uint *)0x0)) {
      if (local_44[0] - (int)puVar2 < 0x81) {
        std::__node_alloc::_M_deallocate(puVar2,local_44[0] - (int)puVar2);
      }
      else {
        operator_delete(puVar2);
      }
    }
  }
  if (local_2c == *piVar7) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}

