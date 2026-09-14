/* 00060264 | STG::UPreference<bool,true>::SetSelectedValueByName */

/* STG::UPreference<bool, true>::SetSelectedValueByName(STG::UStringBase<char, int> const&) */

void __thiscall
STG::UPreference<bool,true>::SetSelectedValueByName
          (UPreference<bool,true> *this,UStringBase *param_1)

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
  
  piVar8 = *(int **)(DAT_000603ac + 0x60284);
  local_2c = *piVar8;
  uVar7 = 0;
  iVar9 = *(int *)(DAT_000603b0 + 0x6029c);
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
        goto LAB_00060338;
      }
      uVar7 = uVar7 + 1;
      puVar1 = local_34;
    } while (uVar7 < *(uint *)(this + 0x80));
    uVar4 = 0;
LAB_00060338:
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

