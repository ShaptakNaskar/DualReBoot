/* 0006f440 | STG::UPreference_Uint32::PrintValue */

/* STG::UPreference_Uint32::PrintValue(unsigned long, STG::UStringBase<char, int>&) const */

void __thiscall
STG::UPreference_Uint32::PrintValue(UPreference_Uint32 *this,ulong param_1,UStringBase *param_2)

{
  uint *__s;
  char **ppcVar1;
  char **ppcVar2;
  uint uVar3;
  uint uVar4;
  void *pvVar5;
  int iVar6;
  undefined1 *puVar7;
  uint *puVar8;
  uint *puVar9;
  size_t __n;
  int unaff_EBX;
  undefined1 *puVar10;
  uint local_40 [4];
  int local_30;
  char *local_2c [4];
  char **local_1c;
  char **local_18;
  int local_14;
  
  local_14 = 0x6f44b;
  FUN_0002e044();
  __s = (uint *)(unaff_EBX + 0x2e235);
  local_14 = **(int **)((int)&__DT_REL[0x473].r_info + unaff_EBX + 1);
  snprintf((char *)__s,0x20,"_ZN3STG19FFileMemory_AndroidC1EP6AAsset" + unaff_EBX + 0xc,
           *(undefined4 *)(*(int *)(this + 0x7c) + param_1 * 4));
  local_30 = *(int *)((int)&__DT_REL[0x474].r_offset + unaff_EBX + 1) + 8;
  puVar9 = __s;
  do {
    puVar8 = puVar9;
    uVar3 = *puVar8 + 0xfefefeff & ~*puVar8;
    uVar4 = uVar3 & 0x80808080;
    puVar9 = puVar8 + 1;
  } while (uVar4 == 0);
  if ((uVar3 & 0x8080) == 0) {
    puVar9 = (uint *)((int)puVar8 + 6);
    uVar4 = uVar4 >> 0x10;
  }
  puVar9 = (uint *)((int)puVar9 + (-3 - (uint)CARRY1((byte)uVar4,(byte)uVar4)));
  __n = (int)puVar9 - (int)__s;
  uVar4 = __n + 1;
  local_1c = local_2c;
  local_18 = local_2c;
  if (uVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    std::__stl_throw_length_error("_ZTIN3STG4FLogE" + unaff_EBX + 6);
  }
  if (0x10 < uVar4) {
    local_40[0] = uVar4;
    if (uVar4 < 0x81) {
      local_18 = (char **)std::__node_alloc::_M_allocate(local_40);
    }
    else {
      local_18 = operator_new(uVar4);
    }
    local_2c[0] = (char *)((int)local_18 + local_40[0]);
  }
  local_1c = local_18;
  if (puVar9 != __s) {
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
  local_30 = *(int *)((int)&__DT_REL[0x474].r_offset + unaff_EBX + 1) + 8;
  if ((local_18 != local_2c) && (local_18 != (char **)0x0)) {
    if ((uint)((int)local_2c[0] - (int)local_18) < 0x81) {
      std::__node_alloc::_M_deallocate(local_18,(int)local_2c[0] - (int)local_18);
    }
    else {
      operator_delete(local_18);
    }
  }
  if (local_14 != **(int **)((int)&__DT_REL[0x473].r_info + unaff_EBX + 1)) {
                    /* WARNING: Subroutine does not return */
    FUN_0002e000();
  }
  return;
}

