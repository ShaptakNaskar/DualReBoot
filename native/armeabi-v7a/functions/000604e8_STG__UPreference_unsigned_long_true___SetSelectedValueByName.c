/* 000604e8 | STG::UPreference<unsigned_long,true>::SetSelectedValueByName */

/* STG::UPreference<unsigned long, true>::SetSelectedValueByName(STG::UStringBase<char, int> const&)
    */

void __thiscall
STG::UPreference<unsigned_long,true>::SetSelectedValueByName
          (UPreference<unsigned_long,true> *this,UStringBase *param_1)

{
  uint *puVar1;
  int iVar2;
  size_t __n;
  uint *puVar3;
  undefined4 uVar4;
  size_t sVar5;
  size_t sVar6;
  uint uVar7;
  int *piVar8;
  int iVar9;
  int local_48;
  uint local_44 [4];
  uint *local_34;
  uint *local_30;
  int local_2c;
  
  piVar8 = *(int **)(DAT_00060630 + 0x60508);
  local_2c = *piVar8;
  uVar7 = 0;
  iVar9 = *(int *)(DAT_00060634 + 0x60520);
  local_48 = iVar9 + 8;
  local_44[0] = local_44[0] & 0xffffff00;
  local_30 = local_44;
  local_34 = local_44;
  puVar1 = local_30;
  if (*(int *)(this + 0x80) == 0) {
    uVar4 = 0;
    local_30 = local_34;
  }
  else {
    do {
      local_34 = puVar1;
      (**(code **)(*(int *)this + 0x28))(this,uVar7,&local_48);
      puVar3 = local_30;
      sVar5 = *(int *)(param_1 + 0x14) - (int)*(void **)(param_1 + 0x18);
      sVar6 = (int)local_34 - (int)local_30;
      __n = sVar5;
      if ((int)sVar6 <= (int)sVar5) {
        __n = sVar6;
      }
      iVar2 = memcmp(local_30,*(void **)(param_1 + 0x18),__n);
      if (((iVar2 == 0) && ((int)sVar5 <= (int)sVar6)) && ((int)sVar6 <= (int)sVar5)) {
        uVar4 = 1;
        (**(code **)(*(int *)this + 0x24))(this,uVar7);
        puVar3 = local_30;
        goto LAB_000605bc;
      }
      uVar7 = uVar7 + 1;
      puVar1 = local_34;
    } while (uVar7 < *(uint *)(this + 0x80));
    uVar4 = 0;
LAB_000605bc:
    local_48 = iVar9 + 8;
    if ((puVar3 != local_44) && (puVar3 != (uint *)0x0)) {
      if (local_44[0] - (int)puVar3 < 0x81) {
        std::__node_alloc::_M_deallocate(puVar3,local_44[0] - (int)puVar3);
      }
      else {
        operator_delete(puVar3);
      }
    }
  }
  if (local_2c != *piVar8) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar4);
  }
  return;
}

