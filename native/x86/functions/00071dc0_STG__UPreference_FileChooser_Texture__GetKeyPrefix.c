/* 00071dc0 | STG::UPreference_FileChooser_Texture::GetKeyPrefix */

/* STG::UPreference_FileChooser_Texture::GetKeyPrefix(STG::UStringBase<char, int>&) const */

void __thiscall
STG::UPreference_FileChooser_Texture::GetKeyPrefix
          (UPreference_FileChooser_Texture *this,UStringBase *param_1)

{
  char *pcVar1;
  int *__src;
  undefined1 *puVar2;
  int iVar3;
  uint __n;
  uint __n_00;
  undefined1 *puVar4;
  int unaff_EBX;
  uint local_34;
  int local_30;
  int local_2c [4];
  int *local_1c;
  int *local_18;
  int local_14;
  void *__dest;
  
  local_14 = 0x71dcb;
  FUN_0002e044();
  local_34 = 0x14;
  local_14 = **(int **)((int)DWORD_ARRAY_00028b54 + unaff_EBX + 0x1519);
  local_30 = *(int *)((int)DWORD_ARRAY_00028b54 + unaff_EBX + 0x151d) + 8;
  local_1c = local_2c;
  local_18 = local_2c;
  __src = (int *)std::__node_alloc::_M_allocate(&local_34);
  local_2c[0] = local_34 + (int)__src;
  *__src = 0x656c6946;
  __src[1] = 0x6f6f6843;
  __src[2] = 0x5f726573;
  __src[3] = 0x74786554;
  *(undefined2 *)(__src + 4) = 0x7275;
  *(undefined1 *)((int)__src + 0x12) = 0x65;
  pcVar1 = (char *)((int)__src + 0x13);
  *(undefined1 *)((int)__src + 0x13) = 0;
  puVar2 = *(undefined1 **)(param_1 + 0x14);
  __n_00 = (int)pcVar1 - (int)__src;
  __dest = *(void **)(param_1 + 0x18);
  __n = (int)puVar2 - (int)__dest;
  local_1c = (int *)pcVar1;
  local_18 = __src;
  if (__n < __n_00) {
    iVar3 = 0;
    if (__n != 0) {
      memmove(__dest,__src,__n);
      iVar3 = *(int *)(param_1 + 0x14) - *(int *)(param_1 + 0x18);
    }
    std::string::_M_append((string *)(param_1 + 4),(char *)(iVar3 + (int)__src),pcVar1);
  }
  else {
    if (__n_00 != 0) {
      memmove(__dest,__src,__n_00);
      puVar2 = *(undefined1 **)(param_1 + 0x14);
      __dest = *(void **)(param_1 + 0x18);
    }
    puVar4 = (undefined1 *)((int)__dest + __n_00);
    if (puVar4 != puVar2) {
      *puVar4 = *puVar2;
      *(undefined1 **)(param_1 + 0x14) = puVar4 + (*(int *)(param_1 + 0x14) - (int)puVar2);
    }
  }
  local_30 = *(int *)((int)DWORD_ARRAY_00028b54 + unaff_EBX + 0x151d) + 8;
  if ((local_18 != local_2c) && (local_18 != (int *)0x0)) {
    if ((uint)(local_2c[0] - (int)local_18) < 0x81) {
      std::__node_alloc::_M_deallocate(local_18,local_2c[0] - (int)local_18);
    }
    else {
      operator_delete(local_18);
    }
  }
  if (local_14 == **(int **)((int)DWORD_ARRAY_00028b54 + unaff_EBX + 0x1519)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0002e000();
}

