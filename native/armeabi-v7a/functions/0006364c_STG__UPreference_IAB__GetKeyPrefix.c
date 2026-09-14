/* 0006364c | STG::UPreference_IAB::GetKeyPrefix */

/* STG::UPreference_IAB::GetKeyPrefix(STG::UStringBase<char, int>&) const */

void __thiscall STG::UPreference_IAB::GetKeyPrefix(UPreference_IAB *this,UStringBase *param_1)

{
  void *__dest;
  size_t __n;
  int iVar1;
  undefined1 *puVar2;
  int *piVar3;
  uint __n_00;
  char *pcVar4;
  undefined4 local_3c;
  char *local_2c;
  undefined4 *local_28;
  int local_24;
  
  pcVar4 = (char *)((int)&local_3c + 3);
  piVar3 = *(int **)(DAT_00063788 + 0x6366c);
  puVar2 = *(undefined1 **)(param_1 + 0x14);
  __dest = *(void **)(param_1 + 0x18);
  local_24 = *piVar3;
  __n_00 = (int)pcVar4 - (int)&local_3c;
  __n = (int)puVar2 - (int)__dest;
  local_3c = *(uint *)(DAT_00063790 + 0x636a4) & 0xffffff;
  local_2c = pcVar4;
  local_28 = &local_3c;
  if (__n < __n_00) {
    iVar1 = 0;
    if (__n != 0) {
      memmove(__dest,&local_3c,__n);
      iVar1 = *(int *)(param_1 + 0x14) - *(int *)(param_1 + 0x18);
    }
    std::string::_M_append((string *)(param_1 + 4),(char *)((int)&local_3c + iVar1),pcVar4);
  }
  else {
    if (__n_00 != 0) {
      memmove(__dest,&local_3c,__n_00);
      __dest = *(void **)(param_1 + 0x18);
      puVar2 = *(undefined1 **)(param_1 + 0x14);
    }
    if ((undefined1 *)((int)__dest + __n_00) != puVar2) {
      iVar1 = *(int *)(param_1 + 0x14);
      *(undefined1 *)((int)__dest + __n_00) = *puVar2;
      *(undefined1 **)(param_1 + 0x14) =
           (undefined1 *)((int)__dest + __n_00) + (iVar1 - (int)puVar2);
    }
  }
  if ((local_28 != &local_3c) && (local_28 != (undefined4 *)0x0)) {
    if (local_3c - (int)local_28 < 0x81) {
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

