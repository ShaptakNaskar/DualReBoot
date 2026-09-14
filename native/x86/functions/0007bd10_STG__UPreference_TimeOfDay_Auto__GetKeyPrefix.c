/* 0007bd10 | STG::UPreference_TimeOfDay_Auto::GetKeyPrefix */

/* STG::UPreference_TimeOfDay_Auto::GetKeyPrefix(STG::UStringBase<char, int>&) const */

void __thiscall
STG::UPreference_TimeOfDay_Auto::GetKeyPrefix(UPreference_TimeOfDay_Auto *this,UStringBase *param_1)

{
  undefined1 *puVar1;
  int iVar2;
  uint __n;
  uint __n_00;
  undefined1 *puVar3;
  int unaff_EBX;
  void *local_40;
  int local_2c [3];
  undefined2 local_20;
  char local_1e [2];
  char *local_1c;
  int *local_18;
  int local_14;
  
  local_14 = 0x7bd1b;
  FUN_0002e044();
  local_1e[0] = '\0';
  local_2c[0] = 0x656d6954;
  local_14 = **(int **)("_ZN3STG5MSIMD16BlendVector4f_SWEPfPKfS3_fm" + unaff_EBX + 0x14);
  __n = (int)local_1e - (int)local_2c;
  puVar1 = *(undefined1 **)(param_1 + 0x14);
  local_40 = *(void **)(param_1 + 0x18);
  __n_00 = (int)puVar1 - (int)local_40;
  local_2c[1] = 0x6144664f;
  local_2c[2] = 0x75415f79;
  local_20 = 0x6f74;
  local_1c = local_1e;
  local_18 = local_2c;
  if (__n_00 < __n) {
    iVar2 = 0;
    if (__n_00 != 0) {
      memmove(local_40,local_2c,__n_00);
      iVar2 = *(int *)(param_1 + 0x14) - *(int *)(param_1 + 0x18);
    }
    std::string::_M_append((string *)(param_1 + 4),(char *)(iVar2 + (int)local_2c),local_1e);
  }
  else {
    if (__n != 0) {
      memmove(local_40,local_2c,__n);
      local_40 = *(void **)(param_1 + 0x18);
      puVar1 = *(undefined1 **)(param_1 + 0x14);
    }
    puVar3 = (undefined1 *)((int)local_40 + __n);
    if (puVar1 != puVar3) {
      *puVar3 = *puVar1;
      *(undefined1 **)(param_1 + 0x14) = puVar3 + (*(int *)(param_1 + 0x14) - (int)puVar1);
    }
  }
  if ((local_18 != local_2c) && (local_18 != (int *)0x0)) {
    if ((uint)(local_2c[0] - (int)local_18) < 0x81) {
      std::__node_alloc::_M_deallocate(local_18,local_2c[0] - (int)local_18);
    }
    else {
      operator_delete(local_18);
    }
  }
  if (local_14 == **(int **)("_ZN3STG5MSIMD16BlendVector4f_SWEPfPKfS3_fm" + unaff_EBX + 0x14)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0002e000();
}

