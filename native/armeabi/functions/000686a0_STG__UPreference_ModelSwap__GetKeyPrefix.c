/* 000686a0 | STG::UPreference_ModelSwap::GetKeyPrefix */

/* STG::UPreference_ModelSwap::GetKeyPrefix(STG::UStringBase<char, int>&) const */

void __thiscall
STG::UPreference_ModelSwap::GetKeyPrefix(UPreference_ModelSwap *this,UStringBase *param_1)

{
  void *__dest;
  size_t __n;
  undefined1 *puVar1;
  int *piVar2;
  uint __n_00;
  int iVar3;
  int local_3c [2];
  undefined1 local_34;
  char local_33 [7];
  char *local_2c;
  int *local_28;
  int local_24;
  
  puVar1 = *(undefined1 **)(param_1 + 0x14);
  __dest = *(void **)(param_1 + 0x18);
  local_3c[0] = DAT_000687e4;
  piVar2 = *(int **)(DAT_000687e8 + 0x686e0);
  local_24 = *piVar2;
  local_3c[1] = DAT_000687ec;
  __n_00 = (int)local_33 - (int)local_3c;
  __n = (int)puVar1 - (int)__dest;
  local_34 = 0x70;
  local_33[0] = '\0';
  local_2c = local_33;
  local_28 = local_3c;
  if (__n < __n_00) {
    iVar3 = 0;
    if (__n != 0) {
      memmove(__dest,local_3c,__n);
      iVar3 = *(int *)(param_1 + 0x14) - *(int *)(param_1 + 0x18);
    }
    std::string::_M_append((string *)(param_1 + 4),(char *)((int)local_3c + iVar3),local_33);
  }
  else {
    if (__n_00 != 0) {
      memmove(__dest,local_3c,__n_00);
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
  if ((local_28 != local_3c) && (local_28 != (int *)0x0)) {
    if ((uint)(local_3c[0] - (int)local_28) < 0x81) {
      std::__node_alloc::_M_deallocate(local_28,local_3c[0] - (int)local_28);
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

