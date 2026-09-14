/* 00061118 | STG::UPreference_Uint32::PrintValue */

/* STG::UPreference_Uint32::PrintValue(unsigned long, STG::UStringBase<char, int>&) const */

void __thiscall
STG::UPreference_Uint32::PrintValue(UPreference_Uint32 *this,ulong param_1,UStringBase *param_2)

{
  char **ppcVar1;
  size_t sVar2;
  uint uVar3;
  void *pvVar4;
  char **ppcVar5;
  int iVar6;
  undefined1 *puVar7;
  char *__s;
  size_t __n;
  int *piVar8;
  int iVar9;
  uint local_44;
  int local_40;
  char *local_3c [4];
  char **local_2c;
  char **local_28;
  int local_24;
  
  iVar9 = DAT_00061300;
  piVar8 = *(int **)(DAT_000612f4 + 0x61138);
  local_24 = *piVar8;
  __s = (char *)(DAT_000612f8 + 0x6155c);
  snprintf(__s,0x20,(char *)(DAT_000612fc + 0x6115c),
           *(undefined4 *)(*(int *)(this + 0x7c) + param_1 * 4));
  iVar9 = *(int *)(iVar9 + 0x61174);
  local_40 = iVar9 + 8;
  local_2c = local_3c;
  local_28 = local_3c;
  sVar2 = strlen(__s);
  __n = (int)(__s + sVar2) - (int)__s;
  uVar3 = __n + 1;
  if (uVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    std::__stl_throw_length_error((char *)(DAT_00061308 + 0x61284));
  }
  ppcVar5 = local_3c;
  if (0x10 < uVar3) {
    local_44 = uVar3;
    if (uVar3 < 0x81) {
      local_2c = (char **)std::__node_alloc::_M_allocate(&local_44);
    }
    else {
      local_2c = operator_new(uVar3);
    }
    local_3c[0] = (char *)((int)local_2c + local_44);
    ppcVar5 = local_2c;
    local_28 = local_2c;
  }
  if (__s + sVar2 != (char *)(DAT_00061304 + 0x615f0)) {
    pvVar4 = memcpy(ppcVar5,(char *)(DAT_00061304 + 0x615f0),__n);
    ppcVar5 = (char **)((int)pvVar4 + __n);
  }
  local_2c = ppcVar5;
  *(undefined1 *)ppcVar5 = 0;
  ppcVar1 = local_28;
  ppcVar5 = local_2c;
  puVar7 = *(undefined1 **)(param_2 + 0x14);
  pvVar4 = *(void **)(param_2 + 0x18);
  uVar3 = (int)local_2c - (int)local_28;
  sVar2 = (int)puVar7 - (int)pvVar4;
  if (sVar2 < uVar3) {
    iVar6 = 0;
    if (sVar2 != 0) {
      memmove(pvVar4,local_28,sVar2);
      iVar6 = *(int *)(param_2 + 0x14) - *(int *)(param_2 + 0x18);
    }
    std::string::_M_append((string *)(param_2 + 4),(char *)((int)ppcVar1 + iVar6),(char *)ppcVar5);
  }
  else {
    if (uVar3 != 0) {
      memmove(pvVar4,local_28,uVar3);
      pvVar4 = *(void **)(param_2 + 0x18);
      puVar7 = *(undefined1 **)(param_2 + 0x14);
    }
    if ((undefined1 *)((int)pvVar4 + uVar3) != puVar7) {
      *(undefined1 *)((int)pvVar4 + uVar3) = *puVar7;
      *(undefined1 **)(param_2 + 0x14) =
           (undefined1 *)((int)pvVar4 + uVar3) + (*(int *)(param_2 + 0x14) - (int)puVar7);
    }
  }
  local_40 = iVar9 + 8;
  if ((local_28 != local_3c) && (local_28 != (char **)0x0)) {
    if ((uint)((int)local_3c[0] - (int)local_28) < 0x81) {
      std::__node_alloc::_M_deallocate(local_28,(int)local_3c[0] - (int)local_28);
    }
    else {
      operator_delete(local_28);
    }
  }
  if (local_24 == *piVar8) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

