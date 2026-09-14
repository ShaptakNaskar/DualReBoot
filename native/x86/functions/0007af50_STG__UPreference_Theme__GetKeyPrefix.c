/* 0007af50 | STG::UPreference_Theme::GetKeyPrefix */

/* STG::UPreference_Theme::GetKeyPrefix(STG::UStringBase<char, int>&) const */

void __thiscall STG::UPreference_Theme::GetKeyPrefix(UPreference_Theme *this,UStringBase *param_1)

{
  undefined1 *puVar1;
  int iVar2;
  uint __n;
  uint __n_00;
  undefined1 *puVar3;
  int unaff_EBX;
  void *local_40;
  int local_2c;
  undefined1 local_28;
  char local_27 [11];
  char *local_1c;
  int *local_18;
  int local_14;
  
  local_14 = 0x7af5b;
  FUN_0002e044();
  local_27[0] = '\0';
  local_2c = 0x6d656854;
  local_14 = **(int **)("_ZN3STG10USerialize4SaveEPNS_9FFileBaseERKNS_7GEColorE" + unaff_EBX + 0x1d)
  ;
  __n = (int)local_27 - (int)&local_2c;
  puVar1 = *(undefined1 **)(param_1 + 0x14);
  local_40 = *(void **)(param_1 + 0x18);
  __n_00 = (int)puVar1 - (int)local_40;
  local_28 = 0x65;
  local_1c = local_27;
  local_18 = &local_2c;
  if (__n_00 < __n) {
    iVar2 = 0;
    if (__n_00 != 0) {
      memmove(local_40,&local_2c,__n_00);
      iVar2 = *(int *)(param_1 + 0x14) - *(int *)(param_1 + 0x18);
    }
    std::string::_M_append((string *)(param_1 + 4),(char *)(iVar2 + (int)&local_2c),local_27);
  }
  else {
    if (__n != 0) {
      memmove(local_40,&local_2c,__n);
      local_40 = *(void **)(param_1 + 0x18);
      puVar1 = *(undefined1 **)(param_1 + 0x14);
    }
    puVar3 = (undefined1 *)((int)local_40 + __n);
    if (puVar3 != puVar1) {
      *puVar3 = *puVar1;
      *(undefined1 **)(param_1 + 0x14) = puVar3 + (*(int *)(param_1 + 0x14) - (int)puVar1);
    }
  }
  if ((local_18 != &local_2c) && (local_18 != (int *)0x0)) {
    if ((uint)(local_2c - (int)local_18) < 0x81) {
      std::__node_alloc::_M_deallocate(local_18,local_2c - (int)local_18);
    }
    else {
      operator_delete(local_18);
    }
  }
  if (local_14 ==
      **(int **)("_ZN3STG10USerialize4SaveEPNS_9FFileBaseERKNS_7GEColorE" + unaff_EBX + 0x1d)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0002e000();
}

