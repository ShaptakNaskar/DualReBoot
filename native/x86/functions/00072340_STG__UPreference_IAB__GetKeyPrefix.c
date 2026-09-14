/* 00072340 | STG::UPreference_IAB::GetKeyPrefix */

/* STG::UPreference_IAB::GetKeyPrefix(STG::UStringBase<char, int>&) const */

void __thiscall STG::UPreference_IAB::GetKeyPrefix(UPreference_IAB *this,UStringBase *param_1)

{
  char *pcVar1;
  undefined1 *puVar2;
  int iVar3;
  uint __n;
  uint __n_00;
  undefined1 *puVar4;
  int unaff_EBX;
  void *local_40;
  undefined4 local_2c;
  char *local_1c;
  undefined4 *local_18;
  int local_14;
  
  local_14 = 0x7234b;
  FUN_0002e044();
  local_14 = **(int **)((int)DWORD_ARRAY_00028b54 + unaff_EBX + 0xf99);
  pcVar1 = (char *)((int)&local_2c + 3);
  local_2c = 0x424149;
  __n = (int)pcVar1 - (int)&local_2c;
  puVar2 = *(undefined1 **)(param_1 + 0x14);
  local_40 = *(void **)(param_1 + 0x18);
  __n_00 = (int)puVar2 - (int)local_40;
  local_1c = pcVar1;
  local_18 = &local_2c;
  if (__n_00 < __n) {
    iVar3 = 0;
    if (__n_00 != 0) {
      memmove(local_40,&local_2c,__n_00);
      iVar3 = *(int *)(param_1 + 0x14) - *(int *)(param_1 + 0x18);
    }
    std::string::_M_append((string *)(param_1 + 4),(char *)(iVar3 + (int)&local_2c),pcVar1);
  }
  else {
    if (__n != 0) {
      memmove(local_40,&local_2c,__n);
      local_40 = *(void **)(param_1 + 0x18);
      puVar2 = *(undefined1 **)(param_1 + 0x14);
    }
    puVar4 = (undefined1 *)((int)local_40 + __n);
    if (puVar4 != puVar2) {
      *puVar4 = *puVar2;
      *(undefined1 **)(param_1 + 0x14) = puVar4 + (*(int *)(param_1 + 0x14) - (int)puVar2);
    }
  }
  if ((local_18 != &local_2c) && (local_18 != (undefined4 *)0x0)) {
    if ((uint)(local_2c - (int)local_18) < 0x81) {
      std::__node_alloc::_M_deallocate(local_18,local_2c - (int)local_18);
    }
    else {
      operator_delete(local_18);
    }
  }
  if (local_14 == **(int **)((int)DWORD_ARRAY_00028b54 + unaff_EBX + 0xf99)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0002e000();
}

