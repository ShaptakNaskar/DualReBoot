/* 0007a850 | STG::UPreference_TextureSwap::GetKeyPrefix */

/* STG::UPreference_TextureSwap::GetKeyPrefix(STG::UStringBase<char, int>&) const */

void __thiscall
STG::UPreference_TextureSwap::GetKeyPrefix(UPreference_TextureSwap *this,UStringBase *param_1)

{
  undefined1 *puVar1;
  int iVar2;
  uint __n;
  uint __n_00;
  undefined1 *puVar3;
  int unaff_EBX;
  void *local_40;
  int local_2c [2];
  undefined2 local_24;
  undefined1 local_22;
  char local_21 [5];
  char *local_1c;
  int *local_18;
  int local_14;
  
  local_14 = 0x7a85b;
  FUN_0002e044();
  local_21[0] = '\0';
  local_2c[0] = 0x74786554;
  local_14 = **(int **)("_ZN3STG10USerialize4SaveEPNS_9FFileBaseERKNS_14GEVertexBufferE" +
                       unaff_EBX + 0xf);
  __n = (int)local_21 - (int)local_2c;
  puVar1 = *(undefined1 **)(param_1 + 0x14);
  local_40 = *(void **)(param_1 + 0x18);
  __n_00 = (int)puVar1 - (int)local_40;
  local_2c[1] = 0x53657275;
  local_24 = 0x6177;
  local_22 = 0x70;
  local_1c = local_21;
  local_18 = local_2c;
  if (__n_00 < __n) {
    iVar2 = 0;
    if (__n_00 != 0) {
      memmove(local_40,local_2c,__n_00);
      iVar2 = *(int *)(param_1 + 0x14) - *(int *)(param_1 + 0x18);
    }
    std::string::_M_append((string *)(param_1 + 4),(char *)(iVar2 + (int)local_2c),local_21);
  }
  else {
    if (__n != 0) {
      memmove(local_40,local_2c,__n);
      local_40 = *(void **)(param_1 + 0x18);
      puVar1 = *(undefined1 **)(param_1 + 0x14);
    }
    puVar3 = (undefined1 *)((int)local_40 + __n);
    if (puVar3 != puVar1) {
      *puVar3 = *puVar1;
      *(undefined1 **)(param_1 + 0x14) = puVar3 + (*(int *)(param_1 + 0x14) - (int)puVar1);
    }
  }
  if ((local_18 != local_2c) && (local_18 != (int *)0x0)) {
    if ((uint)(local_2c[0] - (int)local_18) < 0x81) {
      std::__node_alloc::_M_deallocate(local_18,local_2c[0] - (int)local_18);
    }
    else {
      operator_delete(local_18);
    }
  }
  if (local_14 ==
      **(int **)("_ZN3STG10USerialize4SaveEPNS_9FFileBaseERKNS_14GEVertexBufferE" + unaff_EBX + 0xf)
     ) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0002e000();
}

