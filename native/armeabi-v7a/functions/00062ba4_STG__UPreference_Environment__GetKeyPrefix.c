/* 00062ba4 | STG::UPreference_Environment::GetKeyPrefix */

/* STG::UPreference_Environment::GetKeyPrefix(STG::UStringBase<char, int>&) const */

void __thiscall
STG::UPreference_Environment::GetKeyPrefix(UPreference_Environment *this,UStringBase *param_1)

{
  int iVar1;
  int *piVar2;
  uint __n;
  undefined1 *puVar3;
  void *__dest;
  uint __n_00;
  int local_44 [2];
  undefined2 uStack_3c;
  undefined1 local_3a;
  char local_39 [5];
  char *local_34;
  int *local_30;
  int local_2c;
  
  piVar2 = *(int **)(DAT_00062d14 + 0x62bc4);
  local_2c = *piVar2;
  __n = (int)local_39 - (int)local_44;
  local_44[0] = *(int *)(DAT_00062d18 + 0x62bcc);
  local_44[1] = *(undefined4 *)(DAT_00062d18 + 0x62bd0);
  puVar3 = *(undefined1 **)(param_1 + 0x14);
  __dest = *(void **)(param_1 + 0x18);
  __n_00 = (int)puVar3 - (int)__dest;
  uStack_3c = (undefined2)*(undefined4 *)(DAT_00062d18 + 0x62bd4);
  local_3a = (undefined1)((uint)*(undefined4 *)(DAT_00062d18 + 0x62bd4) >> 0x10);
  local_39[0] = '\0';
  local_34 = local_39;
  local_30 = local_44;
  if (__n_00 < __n) {
    if (__n_00 == 0) {
      iVar1 = 0;
    }
    else {
      memmove(__dest,local_44,__n_00);
      iVar1 = *(int *)(param_1 + 0x14) - *(int *)(param_1 + 0x18);
    }
    std::string::_M_append((string *)(param_1 + 4),(char *)((int)local_44 + iVar1),local_39);
  }
  else {
    if (__n != 0) {
      memmove(__dest,local_44,__n);
      __dest = *(void **)(param_1 + 0x18);
      puVar3 = *(undefined1 **)(param_1 + 0x14);
    }
    if ((undefined1 *)((int)__dest + __n) != puVar3) {
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
  if (local_2c != *piVar2) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

