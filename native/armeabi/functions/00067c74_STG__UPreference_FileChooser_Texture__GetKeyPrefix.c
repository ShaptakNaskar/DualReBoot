/* 00067c74 | STG::UPreference_FileChooser_Texture::GetKeyPrefix */

/* STG::UPreference_FileChooser_Texture::GetKeyPrefix(STG::UStringBase<char, int>&) const */

void __thiscall
STG::UPreference_FileChooser_Texture::GetKeyPrefix
          (UPreference_FileChooser_Texture *this,UStringBase *param_1)

{
  int *piVar1;
  void *pvVar2;
  size_t __n;
  int iVar3;
  char *pcVar4;
  undefined1 *puVar5;
  int *piVar6;
  int iVar7;
  uint __n_00;
  uint local_44;
  int local_40;
  int local_3c [4];
  int *local_2c;
  int *local_28;
  int local_24;
  
  piVar6 = *(int **)(DAT_00067ddc + 0x67c8c);
  local_24 = *piVar6;
  iVar7 = *(int *)(DAT_00067de0 + 0x67c98);
  local_44 = 0x14;
  local_40 = iVar7 + 8;
  local_2c = local_3c;
  local_28 = local_3c;
  local_2c = (int *)std::__node_alloc::_M_allocate(&local_44);
  local_3c[0] = (int)local_2c + local_44;
  local_28 = local_2c;
  pvVar2 = memcpy(local_2c,(void *)(DAT_00067de4 + 0x67cd4),0x13);
  piVar1 = local_28;
  pcVar4 = (char *)((int)pvVar2 + 0x13);
  *(undefined1 *)((int)pvVar2 + 0x13) = 0;
  puVar5 = *(undefined1 **)(param_1 + 0x14);
  pvVar2 = *(void **)(param_1 + 0x18);
  __n_00 = (int)pcVar4 - (int)local_28;
  __n = (int)puVar5 - (int)pvVar2;
  local_2c = (int *)pcVar4;
  if (__n < __n_00) {
    iVar3 = 0;
    if (__n != 0) {
      memmove(pvVar2,local_28,__n);
      iVar3 = *(int *)(param_1 + 0x14) - *(int *)(param_1 + 0x18);
    }
    std::string::_M_append((string *)(param_1 + 4),(char *)((int)piVar1 + iVar3),pcVar4);
  }
  else {
    if (__n_00 != 0) {
      memmove(pvVar2,local_28,__n_00);
      pvVar2 = *(void **)(param_1 + 0x18);
      puVar5 = *(undefined1 **)(param_1 + 0x14);
    }
    if (puVar5 != (undefined1 *)((int)pvVar2 + __n_00)) {
      *(undefined1 *)((int)pvVar2 + __n_00) = *puVar5;
      *(undefined1 **)(param_1 + 0x14) =
           (undefined1 *)((int)pvVar2 + __n_00) + (*(int *)(param_1 + 0x14) - (int)puVar5);
    }
  }
  local_40 = iVar7 + 8;
  if ((local_28 != local_3c) && (local_28 != (int *)0x0)) {
    if ((uint)(local_3c[0] - (int)local_28) < 0x81) {
      std::__node_alloc::_M_deallocate(local_28,local_3c[0] - (int)local_28);
    }
    else {
      operator_delete(local_28);
    }
  }
  if (local_24 == *piVar6) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

