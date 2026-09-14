/* 0006818c | STG::UPreference_IAB::GetKeyPrefix */

/* STG::UPreference_IAB::GetKeyPrefix(STG::UStringBase<char, int>&) const */

void __thiscall STG::UPreference_IAB::GetKeyPrefix(UPreference_IAB *this,UStringBase *param_1)

{
  void *__dest;
  undefined1 *puVar1;
  size_t __n;
  int *piVar2;
  uint __n_00;
  char *pcVar3;
  int iVar4;
  undefined4 local_3c;
  char *local_2c;
  undefined4 *local_28;
  int local_24;
  
  __dest = *(void **)(param_1 + 0x18);
  puVar1 = *(undefined1 **)(param_1 + 0x14);
  piVar2 = *(int **)(DAT_000682c8 + 0x681b0);
  local_24 = *piVar2;
  pcVar3 = (char *)((int)&local_3c + 3);
  __n_00 = (int)pcVar3 - (int)&local_3c;
  __n = (int)puVar1 - (int)__dest;
  local_3c = 0x424149;
  local_2c = pcVar3;
  local_28 = &local_3c;
  if (__n < __n_00) {
    iVar4 = 0;
    if (__n != 0) {
      memmove(__dest,&local_3c,__n);
      iVar4 = *(int *)(param_1 + 0x14) - *(int *)(param_1 + 0x18);
    }
    std::string::_M_append((string *)(param_1 + 4),(char *)((int)&local_3c + iVar4),pcVar3);
  }
  else {
    if (__n_00 != 0) {
      memmove(__dest,&local_3c,__n_00);
      __dest = *(void **)(param_1 + 0x18);
      puVar1 = *(undefined1 **)(param_1 + 0x14);
    }
    if ((undefined1 *)((int)__dest + __n_00) != puVar1) {
      iVar4 = *(int *)(param_1 + 0x14);
      *(undefined1 *)((int)__dest + __n_00) = *puVar1;
      *(undefined1 **)(param_1 + 0x14) =
           (undefined1 *)((int)__dest + __n_00) + (iVar4 - (int)puVar1);
    }
  }
  if ((local_28 != &local_3c) && (local_28 != (undefined4 *)0x0)) {
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

