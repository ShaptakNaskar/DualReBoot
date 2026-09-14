/* 0006f100 | STG::UPreference_WideString::PrintValue */

/* STG::UPreference_WideString::PrintValue(unsigned long, STG::UStringBase<char, int>&) const */

void __thiscall
STG::UPreference_WideString::PrintValue
          (UPreference_WideString *this,ulong param_1,UStringBase *param_2)

{
  code *__s;
  char **ppcVar1;
  char **ppcVar2;
  uint uVar3;
  uint uVar4;
  void *pvVar5;
  int iVar6;
  undefined1 *puVar7;
  code *pcVar8;
  code *pcVar9;
  size_t __n;
  int unaff_EBX;
  undefined1 *puVar10;
  uint local_40 [4];
  int local_30;
  char *local_2c [4];
  char **local_1c;
  char **local_18;
  int local_14;
  
  local_14 = 0x6f10b;
  FUN_0002e044();
  __s = FFileBase::GetFileSize + unaff_EBX + 5;
  local_14 = **(int **)((int)&__DT_REL[0x4db].r_info + unaff_EBX + 1);
  snprintf((char *)__s,0x400,"_ZTSN3STG20FFileManager_AndroidE" + unaff_EBX + 9,
           *(undefined4 *)(param_1 * 0x2c + *(int *)(this + 0x7c) + 0x28));
  local_30 = *(int *)((int)&__DT_REL[0x4dc].r_offset + unaff_EBX + 1) + 8;
  pcVar9 = __s;
  do {
    pcVar8 = pcVar9;
    uVar3 = *(uint *)pcVar8 + 0xfefefeff & ~*(uint *)pcVar8;
    uVar4 = uVar3 & 0x80808080;
    pcVar9 = pcVar8 + 4;
  } while (uVar4 == 0);
  if ((uVar3 & 0x8080) == 0) {
    pcVar9 = pcVar8 + 6;
    uVar4 = uVar4 >> 0x10;
  }
  __n = (int)(pcVar9 + (-3 - (uint)CARRY1((byte)uVar4,(byte)uVar4))) - (int)__s;
  uVar3 = __n + 1;
  local_1c = local_2c;
  local_18 = local_2c;
  if (uVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    std::__stl_throw_length_error("_ZNK3STG18FFileManagerScoped7IsValidEv" + unaff_EBX + 8);
  }
  if (0x10 < uVar3) {
    local_40[0] = uVar3;
    if (uVar3 < 0x81) {
      local_18 = (char **)std::__node_alloc::_M_allocate(local_40);
    }
    else {
      local_18 = operator_new(uVar3);
    }
    local_2c[0] = (char *)((int)local_18 + local_40[0]);
  }
  local_1c = local_18;
  if (pcVar9 + (-3 - (uint)CARRY1((byte)uVar4,(byte)uVar4)) != __s) {
    pvVar5 = memcpy(local_18,__s,__n);
    local_1c = (char **)((int)pvVar5 + __n);
  }
  *(undefined1 *)local_1c = 0;
  ppcVar2 = local_18;
  ppcVar1 = local_1c;
  puVar7 = *(undefined1 **)(param_2 + 0x14);
  uVar3 = (int)local_1c - (int)local_18;
  pvVar5 = *(void **)(param_2 + 0x18);
  uVar4 = (int)puVar7 - (int)pvVar5;
  if (uVar4 < uVar3) {
    iVar6 = 0;
    if (uVar4 != 0) {
      memmove(pvVar5,local_18,uVar4);
      iVar6 = *(int *)(param_2 + 0x14) - *(int *)(param_2 + 0x18);
    }
    std::string::_M_append((string *)(param_2 + 4),(char *)((int)ppcVar2 + iVar6),(char *)ppcVar1);
  }
  else {
    if (uVar3 != 0) {
      memmove(pvVar5,local_18,uVar3);
      puVar7 = *(undefined1 **)(param_2 + 0x14);
      pvVar5 = *(void **)(param_2 + 0x18);
    }
    puVar10 = (undefined1 *)(uVar3 + (int)pvVar5);
    if (puVar10 != puVar7) {
      *puVar10 = *puVar7;
      *(undefined1 **)(param_2 + 0x14) = puVar10 + (*(int *)(param_2 + 0x14) - (int)puVar7);
    }
  }
  local_30 = *(int *)((int)&__DT_REL[0x4dc].r_offset + unaff_EBX + 1) + 8;
  if ((local_18 != local_2c) && (local_18 != (char **)0x0)) {
    if ((uint)((int)local_2c[0] - (int)local_18) < 0x81) {
      std::__node_alloc::_M_deallocate(local_18,(int)local_2c[0] - (int)local_18);
    }
    else {
      operator_delete(local_18);
    }
  }
  if (local_14 != **(int **)((int)&__DT_REL[0x4db].r_info + unaff_EBX + 1)) {
                    /* WARNING: Subroutine does not return */
    FUN_0002e000();
  }
  return;
}

