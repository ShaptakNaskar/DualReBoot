/* 0007bea0 | STG::UPreference_TimeOfDay::PrintValue */

/* STG::UPreference_TimeOfDay::PrintValue(unsigned long, STG::UStringBase<char, int>&) const */

void __thiscall
STG::UPreference_TimeOfDay::PrintValue
          (UPreference_TimeOfDay *this,ulong param_1,UStringBase *param_2)

{
  char **ppcVar1;
  char *__s;
  size_t sVar2;
  char **ppcVar3;
  void *pvVar4;
  int iVar5;
  undefined1 *puVar6;
  uint uVar7;
  size_t __n;
  undefined1 *puVar8;
  int unaff_EBX;
  uint __n_00;
  uint local_40 [4];
  int local_30;
  char *local_2c [4];
  char **local_1c;
  char **local_18;
  int local_14;
  
  local_14 = 0x7beab;
  FUN_0002e044();
  local_14 = **(int **)("_ZN3STG7MMatrix11MakeFrustumEffffff" + unaff_EBX + 0x11);
  __s = (char *)GETimeOfDay::GetName(*(undefined4 *)(*(int *)(this + 0x7c) + param_1 * 4));
  local_30 = *(int *)("_ZN3STG7MMatrix11MakeFrustumEffffff" + unaff_EBX + 0x15) + 8;
  local_1c = local_2c;
  local_18 = local_2c;
  sVar2 = strlen(__s);
  __n = (int)(__s + sVar2) - (int)__s;
  uVar7 = __n + 1;
  if (uVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    std::__stl_throw_length_error((char *)(unaff_EBX + 0xb461));
  }
  ppcVar3 = local_2c;
  if (0x10 < uVar7) {
    local_40[0] = uVar7;
    if (uVar7 < 0x81) {
      ppcVar3 = (char **)std::__node_alloc::_M_allocate(local_40);
    }
    else {
      ppcVar3 = operator_new(uVar7);
    }
    local_2c[0] = (char *)((int)ppcVar3 + local_40[0]);
    local_1c = ppcVar3;
    local_18 = ppcVar3;
  }
  if (__s != __s + sVar2) {
    pvVar4 = memcpy(ppcVar3,__s,__n);
    ppcVar3 = (char **)((int)pvVar4 + __n);
  }
  local_1c = ppcVar3;
  *(undefined1 *)ppcVar3 = 0;
  ppcVar1 = local_18;
  ppcVar3 = local_1c;
  puVar6 = *(undefined1 **)(param_2 + 0x14);
  __n_00 = (int)local_1c - (int)local_18;
  pvVar4 = *(void **)(param_2 + 0x18);
  uVar7 = (int)puVar6 - (int)pvVar4;
  if (uVar7 < __n_00) {
    iVar5 = 0;
    if (uVar7 != 0) {
      memmove(pvVar4,local_18,uVar7);
      iVar5 = *(int *)(param_2 + 0x14) - *(int *)(param_2 + 0x18);
    }
    std::string::_M_append((string *)(param_2 + 4),(char *)((int)ppcVar1 + iVar5),(char *)ppcVar3);
  }
  else {
    if (__n_00 != 0) {
      memmove(pvVar4,local_18,__n_00);
      puVar6 = *(undefined1 **)(param_2 + 0x14);
      pvVar4 = *(void **)(param_2 + 0x18);
    }
    puVar8 = (undefined1 *)((int)pvVar4 + __n_00);
    if (puVar8 != puVar6) {
      *puVar8 = *puVar6;
      *(undefined1 **)(param_2 + 0x14) = puVar8 + (*(int *)(param_2 + 0x14) - (int)puVar6);
    }
  }
  local_30 = *(int *)("_ZN3STG7MMatrix11MakeFrustumEffffff" + unaff_EBX + 0x15) + 8;
  if ((local_18 != local_2c) && (local_18 != (char **)0x0)) {
    if ((uint)((int)local_2c[0] - (int)local_18) < 0x81) {
      std::__node_alloc::_M_deallocate(local_18,(int)local_2c[0] - (int)local_18);
    }
    else {
      operator_delete(local_18);
    }
  }
  if (local_14 == **(int **)("_ZN3STG7MMatrix11MakeFrustumEffffff" + unaff_EBX + 0x11)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0002e000();
}

