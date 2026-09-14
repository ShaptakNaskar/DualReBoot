/* 00070258 | STG::UPreference_Theme::GetKeyPrefix */

/* STG::UPreference_Theme::GetKeyPrefix(STG::UStringBase<char, int>&) const */

void __thiscall STG::UPreference_Theme::GetKeyPrefix(UPreference_Theme *this,UStringBase *param_1)

{
  void *__dest;
  size_t __n;
  undefined1 *puVar1;
  int *piVar2;
  uint __n_00;
  int iVar3;
  int local_3c;
  undefined1 local_38;
  char local_37 [11];
  char *local_2c;
  int *local_28;
  int local_24;
  
  puVar1 = *(undefined1 **)(param_1 + 0x14);
  __dest = *(void **)(param_1 + 0x18);
  piVar2 = *(int **)(DAT_00070394 + 0x7028c);
  local_24 = *piVar2;
  local_3c = DAT_00070398;
  __n_00 = (int)local_37 - (int)&local_3c;
  __n = (int)puVar1 - (int)__dest;
  local_38 = 0x65;
  local_37[0] = '\0';
  local_2c = local_37;
  local_28 = &local_3c;
  if (__n < __n_00) {
    iVar3 = 0;
    if (__n != 0) {
      memmove(__dest,&local_3c,__n);
      iVar3 = *(int *)(param_1 + 0x14) - *(int *)(param_1 + 0x18);
    }
    std::string::_M_append((string *)(param_1 + 4),(char *)((int)&local_3c + iVar3),local_37);
  }
  else {
    if (__n_00 != 0) {
      memmove(__dest,&local_3c,__n_00);
      __dest = *(void **)(param_1 + 0x18);
      puVar1 = *(undefined1 **)(param_1 + 0x14);
    }
    if ((undefined1 *)((int)__dest + __n_00) != puVar1) {
      iVar3 = *(int *)(param_1 + 0x14);
      *(undefined1 *)((int)__dest + __n_00) = *puVar1;
      *(undefined1 **)(param_1 + 0x14) =
           (undefined1 *)((int)__dest + __n_00) + (iVar3 - (int)puVar1);
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
  if (local_24 == *piVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

