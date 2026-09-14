/* 00070cb4 | STG::UPreference_TimeOfDay_Auto::GetKeyPrefix */

/* STG::UPreference_TimeOfDay_Auto::GetKeyPrefix(STG::UStringBase<char, int>&) const */

void __thiscall
STG::UPreference_TimeOfDay_Auto::GetKeyPrefix(UPreference_TimeOfDay_Auto *this,UStringBase *param_1)

{
  int iVar1;
  size_t __n;
  int *piVar2;
  undefined1 *puVar3;
  uint __n_00;
  void *__dest;
  int local_44 [3];
  undefined2 local_38;
  char local_36 [2];
  char *local_34;
  int *local_30;
  int local_2c;
  
  piVar2 = *(int **)(DAT_00070e04 + 0x70ccc);
  local_2c = *piVar2;
  local_44[0] = *(int *)(DAT_00070e0c + 0x70cf4);
  local_44[1] = *(undefined4 *)(DAT_00070e0c + 0x70cf8);
  local_44[2] = *(undefined4 *)(DAT_00070e0c + 0x70cfc);
  puVar3 = *(undefined1 **)(param_1 + 0x14);
  __dest = *(void **)(param_1 + 0x18);
  __n_00 = (int)local_36 - (int)local_44;
  __n = (int)puVar3 - (int)__dest;
  local_38 = (undefined2)*(undefined4 *)(DAT_00070e0c + 0x70d00);
  local_36[0] = '\0';
  local_34 = local_36;
  local_30 = local_44;
  if (__n < __n_00) {
    iVar1 = 0;
    if (__n != 0) {
      memmove(__dest,local_44,__n);
      iVar1 = *(int *)(param_1 + 0x14) - *(int *)(param_1 + 0x18);
    }
    std::string::_M_append((string *)(param_1 + 4),(char *)((int)local_44 + iVar1),local_36);
  }
  else {
    if (__n_00 != 0) {
      memmove(__dest,local_44,__n_00);
      __dest = *(void **)(param_1 + 0x18);
      puVar3 = *(undefined1 **)(param_1 + 0x14);
    }
    if (puVar3 != (undefined1 *)((int)__dest + __n_00)) {
      iVar1 = *(int *)(param_1 + 0x14);
      *(undefined1 *)((int)__dest + __n_00) = *puVar3;
      *(undefined1 **)(param_1 + 0x14) =
           (undefined1 *)((int)__dest + __n_00) + (iVar1 - (int)puVar3);
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
  if (local_2c == *piVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

