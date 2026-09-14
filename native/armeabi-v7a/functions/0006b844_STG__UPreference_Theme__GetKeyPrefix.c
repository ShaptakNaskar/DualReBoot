/* 0006b844 | STG::UPreference_Theme::GetKeyPrefix */

/* STG::UPreference_Theme::GetKeyPrefix(STG::UStringBase<char, int>&) const */

void __thiscall STG::UPreference_Theme::GetKeyPrefix(UPreference_Theme *this,UStringBase *param_1)

{
  int iVar1;
  void *__dest;
  undefined1 *puVar2;
  int *piVar3;
  uint __n;
  uint __n_00;
  int local_3c;
  undefined1 local_38;
  char local_37 [11];
  char *local_2c;
  int *local_28;
  int local_24;
  
  piVar3 = *(int **)(DAT_0006b98c + 0x6b864);
  puVar2 = *(undefined1 **)(param_1 + 0x14);
  local_24 = *piVar3;
  __dest = *(void **)(param_1 + 0x18);
  __n = (int)local_37 - (int)&local_3c;
  __n_00 = (int)puVar2 - (int)__dest;
  local_3c = *(int *)(DAT_0006b990 + 0x6b870);
  local_37[0] = '\0';
  local_38 = (undefined1)*(undefined4 *)(DAT_0006b990 + 0x6b874);
  local_2c = local_37;
  local_28 = &local_3c;
  if (__n_00 < __n) {
    iVar1 = 0;
    if (__n_00 != 0) {
      memmove(__dest,&local_3c,__n_00);
      iVar1 = *(int *)(param_1 + 0x14) - *(int *)(param_1 + 0x18);
    }
    std::string::_M_append((string *)(param_1 + 4),(char *)((int)&local_3c + iVar1),local_37);
  }
  else {
    if (__n != 0) {
      memmove(__dest,&local_3c,__n);
      __dest = *(void **)(param_1 + 0x18);
      puVar2 = *(undefined1 **)(param_1 + 0x14);
    }
    if ((undefined1 *)((int)__dest + __n) != puVar2) {
      iVar1 = *(int *)(param_1 + 0x14);
      *(undefined1 *)((int)__dest + __n) = *puVar2;
      *(undefined1 **)(param_1 + 0x14) = (undefined1 *)((int)__dest + __n) + (iVar1 - (int)puVar2);
    }
  }
  if ((local_28 != &local_3c) && (local_28 != (int *)0x0)) {
    if ((uint)(local_3c - (int)local_28) < 0x81) {
      std::__node_alloc::_M_deallocate(local_28,local_3c - (int)local_28);
    }
    else {
      operator_delete(local_28);
    }
  }
  if (local_24 == *piVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

