/* 0006e310 | STG::UPreference<bool,true>::SetSelectedValueByName */

/* STG::UPreference<bool, true>::SetSelectedValueByName(STG::UStringBase<char, int> const&) */

undefined4 __thiscall
STG::UPreference<bool,true>::SetSelectedValueByName
          (UPreference<bool,true> *this,UStringBase *param_1)

{
  size_t __n;
  int iVar1;
  uint *puVar2;
  int unaff_EBX;
  undefined4 uVar3;
  size_t sVar4;
  size_t sVar5;
  uint local_38;
  int local_30;
  uint local_2c [4];
  uint *local_1c;
  uint *local_18;
  int local_14;
  
  local_14 = 0x6e31b;
  FUN_0002e044();
  local_2c[0] = local_2c[0] & 0xffffff00;
  local_14 = **(int **)(glMatrixMode + unaff_EBX + 5);
  local_30 = *(int *)(unaff_EBX + 0x2db21) + 8;
  uVar3 = 0;
  local_1c = local_2c;
  local_18 = local_2c;
  if (*(int *)(this + 0x80) != 0) {
    local_38 = 0;
    do {
      (**(code **)(*(int *)this + 0x28))(this,local_38,&local_30);
      puVar2 = local_18;
      sVar5 = (int)local_1c - (int)local_18;
      sVar4 = *(int *)(param_1 + 0x14) - (int)*(void **)(param_1 + 0x18);
      __n = sVar5;
      if ((int)sVar4 <= (int)sVar5) {
        __n = sVar4;
      }
      iVar1 = memcmp(local_18,*(void **)(param_1 + 0x18),__n);
      if (((iVar1 == 0) && ((int)sVar4 <= (int)sVar5)) && ((int)sVar5 <= (int)sVar4)) {
        uVar3 = 1;
        (**(code **)(*(int *)this + 0x24))(this,local_38);
        puVar2 = local_18;
        goto LAB_0006e402;
      }
      local_38 = local_38 + 1;
    } while (local_38 < *(uint *)(this + 0x80));
    uVar3 = 0;
LAB_0006e402:
    local_30 = *(int *)(unaff_EBX + 0x2db21) + 8;
    if ((puVar2 != local_2c) && (puVar2 != (uint *)0x0)) {
      if (local_2c[0] - (int)puVar2 < 0x81) {
        std::__node_alloc::_M_deallocate(puVar2,local_2c[0] - (int)puVar2);
      }
      else {
        operator_delete(puVar2);
      }
    }
  }
  if (local_14 == **(int **)(glMatrixMode + unaff_EBX + 5)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0002e000();
}

