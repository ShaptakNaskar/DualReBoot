/* 0006be78 | STG::UPreference_TimeOfDay::GetKeyPrefix */

/* STG::UPreference_TimeOfDay::GetKeyPrefix(STG::UStringBase<char, int>&) const */

void __thiscall
STG::UPreference_TimeOfDay::GetKeyPrefix(UPreference_TimeOfDay *this,UStringBase *param_1)

{
  int iVar1;
  int *piVar2;
  void *__dest;
  uint __n;
  uint __n_00;
  undefined1 *puVar3;
  int local_44 [2];
  undefined1 local_3c;
  char local_3b [7];
  char *local_34;
  int *local_30;
  int local_2c;
  
  piVar2 = *(int **)(DAT_0006bfcc + 0x6be98);
  local_2c = *piVar2;
  puVar3 = *(undefined1 **)(param_1 + 0x14);
  __dest = *(void **)(param_1 + 0x18);
  __n = (int)local_3b - (int)local_44;
  __n_00 = (int)puVar3 - (int)__dest;
  local_44[0] = *(int *)(DAT_0006bfd0 + 0x6bea0);
  local_44[1] = *(undefined4 *)(DAT_0006bfd0 + 0x6bea4);
  local_3c = (undefined1)*(undefined4 *)(DAT_0006bfd0 + 0x6bea8);
  local_3b[0] = '\0';
  local_34 = local_3b;
  local_30 = local_44;
  if (__n_00 < __n) {
    iVar1 = 0;
    if (__n_00 != 0) {
      memmove(__dest,local_44,__n_00);
      iVar1 = *(int *)(param_1 + 0x14) - *(int *)(param_1 + 0x18);
    }
    std::string::_M_append((string *)(param_1 + 4),(char *)((int)local_44 + iVar1),local_3b);
  }
  else {
    if (__n != 0) {
      memmove(__dest,local_44,__n);
      __dest = *(void **)(param_1 + 0x18);
      puVar3 = *(undefined1 **)(param_1 + 0x14);
    }
    if (puVar3 != (undefined1 *)((int)__dest + __n)) {
      iVar1 = *(int *)(param_1 + 0x14);
      *(undefined1 *)((int)__dest + __n) = *puVar3;
      *(undefined1 **)(param_1 + 0x14) = (undefined1 *)((int)__dest + __n) + (iVar1 - (int)puVar3);
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

