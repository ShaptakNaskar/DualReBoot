/* 0006c2f0 | STG::UPreference_TimeOfDay_Auto::GetKeyPrefix */

/* STG::UPreference_TimeOfDay_Auto::GetKeyPrefix(STG::UStringBase<char, int>&) const */

void __thiscall
STG::UPreference_TimeOfDay_Auto::GetKeyPrefix(UPreference_TimeOfDay_Auto *this,UStringBase *param_1)

{
  int iVar1;
  int *piVar2;
  undefined1 *puVar3;
  uint __n;
  size_t __n_00;
  void *local_54;
  int local_44 [3];
  undefined2 local_38;
  char local_36 [2];
  char *local_34;
  int *local_30;
  int local_2c;
  
  piVar2 = *(int **)(DAT_0006c458 + 0x6c310);
  local_54 = *(void **)(param_1 + 0x18);
  local_2c = *piVar2;
  puVar3 = *(undefined1 **)(param_1 + 0x14);
  __n = (int)local_36 - (int)local_44;
  local_44[0] = *(int *)(DAT_0006c45c + 0x6c318);
  local_44[1] = *(undefined4 *)(DAT_0006c45c + 0x6c31c);
  local_44[2] = *(undefined4 *)(DAT_0006c45c + 0x6c320);
  __n_00 = (int)puVar3 - (int)local_54;
  local_38 = (undefined2)*(undefined4 *)(DAT_0006c45c + 0x6c324);
  local_36[0] = '\0';
  local_34 = local_36;
  local_30 = local_44;
  if (__n_00 < __n) {
    if (__n_00 == 0) {
      iVar1 = 0;
    }
    else {
      memmove(local_54,local_44,__n_00);
      iVar1 = *(int *)(param_1 + 0x14) - *(int *)(param_1 + 0x18);
    }
    std::string::_M_append((string *)(param_1 + 4),(char *)((int)local_44 + iVar1),local_36);
  }
  else {
    if (__n != 0) {
      memmove(local_54,local_44,__n);
      local_54 = *(void **)(param_1 + 0x18);
      puVar3 = *(undefined1 **)(param_1 + 0x14);
    }
    if (puVar3 != (undefined1 *)((int)local_54 + __n)) {
      iVar1 = *(int *)(param_1 + 0x14);
      *(undefined1 *)((int)local_54 + __n) = *puVar3;
      *(undefined1 **)(param_1 + 0x14) = (undefined1 *)((int)local_54 + __n) + (iVar1 - (int)puVar3)
      ;
    }
  }
  if ((local_30 != local_44) && (local_30 != (int *)0x0)) {
    if ((uint)(local_44[0] - (int)local_30) < 0x81) {
      std::__node_alloc::_M_deallocate(local_30,local_44[0] - (int)local_30);
    }
    else {
      operator_delete(local_30);
    }
  }
  if (local_2c != *piVar2) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

