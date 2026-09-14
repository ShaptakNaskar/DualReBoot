/* 0006b358 | STG::UPreference_TextureGroup::GetKeyPrefix */

/* STG::UPreference_TextureGroup::GetKeyPrefix(STG::UStringBase<char, int>&) const */

void __thiscall
STG::UPreference_TextureGroup::GetKeyPrefix(UPreference_TextureGroup *this,UStringBase *param_1)

{
  uint __n;
  int iVar1;
  int *piVar2;
  void *__dest;
  uint __n_00;
  undefined1 *puVar3;
  int local_44 [3];
  char local_38 [4];
  char *local_34;
  int *local_30;
  int local_2c;
  
  piVar2 = *(int **)(DAT_0006b49c + 0x6b378);
  local_2c = *piVar2;
  puVar3 = *(undefined1 **)(param_1 + 0x14);
  __dest = *(void **)(param_1 + 0x18);
  __n_00 = (int)local_38 - (int)local_44;
  local_44[0] = *(int *)(DAT_0006b4a0 + 0x6b380);
  local_44[1] = *(undefined4 *)(DAT_0006b4a0 + 0x6b384);
  local_44[2] = *(undefined4 *)(DAT_0006b4a0 + 0x6b388);
  __n = (int)puVar3 - (int)__dest;
  local_38[0] = '\0';
  local_34 = local_38;
  local_30 = local_44;
  if (__n < __n_00) {
    iVar1 = 0;
    if (__n != 0) {
      memmove(__dest,local_44,__n);
      iVar1 = *(int *)(param_1 + 0x14) - *(int *)(param_1 + 0x18);
    }
    std::string::_M_append((string *)(param_1 + 4),(char *)((int)local_44 + iVar1),local_38);
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

