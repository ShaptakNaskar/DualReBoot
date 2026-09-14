/* 0006f6a0 | STG::UPreference_Bool::PrintValue */

/* STG::UPreference_Bool::PrintValue(unsigned long, STG::UStringBase<char, int>&) const */

void __thiscall
STG::UPreference_Bool::PrintValue(UPreference_Bool *this,ulong param_1,UStringBase *param_2)

{
  uint *__s;
  char **ppcVar1;
  char **ppcVar2;
  char *pcVar3;
  uint uVar4;
  uint uVar5;
  void *pvVar6;
  int iVar7;
  undefined1 *puVar8;
  uint *puVar9;
  uint *puVar10;
  size_t __n;
  int unaff_EBX;
  undefined1 *puVar11;
  uint local_40 [4];
  int local_30;
  char *local_2c [4];
  char **local_1c;
  char **local_18;
  int local_14;
  
  local_14 = 0x6f6ab;
  FUN_0002e044();
  __s = (uint *)(unaff_EBX + 0x2dfb5);
  local_14 = **(int **)((int)&__DT_REL[0x427].r_info + unaff_EBX + 1);
  pcVar3 = "_ZNK3STG12FFileManager14MakeUniquePathERKNS_11UStringBaseIciEERS2_" + unaff_EBX + 0x33;
  if (*(char *)(*(int *)(this + 0x7c) + param_1) == '\0') {
    pcVar3 = "_ZNK3STG12FFileManager14MakeUniquePathERKNS_11UStringBaseIciEERS2_" + unaff_EBX + 0x38
    ;
  }
  snprintf((char *)__s,0x20,
           "_ZNK3STG12FFileManager12OpenFilePathERKNS_11UStringBaseIciEENS_9FFileBase7EAccessE" +
           unaff_EBX + 0x1a,pcVar3);
  local_30 = *(int *)((int)&__DT_REL[0x428].r_offset + unaff_EBX + 1) + 8;
  puVar10 = __s;
  do {
    puVar9 = puVar10;
    uVar4 = *puVar9 + 0xfefefeff & ~*puVar9;
    uVar5 = uVar4 & 0x80808080;
    puVar10 = puVar9 + 1;
  } while (uVar5 == 0);
  if ((uVar4 & 0x8080) == 0) {
    puVar10 = (uint *)((int)puVar9 + 6);
    uVar5 = uVar5 >> 0x10;
  }
  puVar10 = (uint *)((int)puVar10 + (-3 - (uint)CARRY1((byte)uVar5,(byte)uVar5)));
  __n = (int)puVar10 - (int)__s;
  uVar5 = __n + 1;
  local_1c = local_2c;
  local_18 = local_2c;
  if (uVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    std::__stl_throw_length_error
              ("_ZNK3STG12FFileManager12OpenFilePathERKNS_11UStringBaseIciEENS_9FFileBase7EAccessE"
               + unaff_EBX + 0x26);
  }
  if (0x10 < uVar5) {
    local_40[0] = uVar5;
    if (uVar5 < 0x81) {
      local_18 = (char **)std::__node_alloc::_M_allocate(local_40);
    }
    else {
      local_18 = operator_new(uVar5);
    }
    local_2c[0] = (char *)((int)local_18 + local_40[0]);
  }
  local_1c = local_18;
  if (puVar10 != __s) {
    pvVar6 = memcpy(local_18,__s,__n);
    local_1c = (char **)((int)pvVar6 + __n);
  }
  *(undefined1 *)local_1c = 0;
  ppcVar2 = local_18;
  ppcVar1 = local_1c;
  puVar8 = *(undefined1 **)(param_2 + 0x14);
  uVar4 = (int)local_1c - (int)local_18;
  pvVar6 = *(void **)(param_2 + 0x18);
  uVar5 = (int)puVar8 - (int)pvVar6;
  if (uVar5 < uVar4) {
    iVar7 = 0;
    if (uVar5 != 0) {
      memmove(pvVar6,local_18,uVar5);
      iVar7 = *(int *)(param_2 + 0x14) - *(int *)(param_2 + 0x18);
    }
    std::string::_M_append((string *)(param_2 + 4),(char *)((int)ppcVar2 + iVar7),(char *)ppcVar1);
  }
  else {
    if (uVar4 != 0) {
      memmove(pvVar6,local_18,uVar4);
      puVar8 = *(undefined1 **)(param_2 + 0x14);
      pvVar6 = *(void **)(param_2 + 0x18);
    }
    puVar11 = (undefined1 *)(uVar4 + (int)pvVar6);
    if (puVar11 != puVar8) {
      *puVar11 = *puVar8;
      *(undefined1 **)(param_2 + 0x14) = puVar11 + (*(int *)(param_2 + 0x14) - (int)puVar8);
    }
  }
  local_30 = *(int *)((int)&__DT_REL[0x428].r_offset + unaff_EBX + 1) + 8;
  if ((local_18 != local_2c) && (local_18 != (char **)0x0)) {
    if ((uint)((int)local_2c[0] - (int)local_18) < 0x81) {
      std::__node_alloc::_M_deallocate(local_18,(int)local_2c[0] - (int)local_18);
    }
    else {
      operator_delete(local_18);
    }
  }
  if (local_14 != **(int **)((int)&__DT_REL[0x427].r_info + unaff_EBX + 1)) {
                    /* WARNING: Subroutine does not return */
    FUN_0002e000();
  }
  return;
}

