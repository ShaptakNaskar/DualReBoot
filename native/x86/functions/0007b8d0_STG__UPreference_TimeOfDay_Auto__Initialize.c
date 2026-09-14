/* 0007b8d0 | STG::UPreference_TimeOfDay_Auto::Initialize */

/* STG::UPreference_TimeOfDay_Auto::Initialize(STG::UPreference_TimeOfDay&) */

void __thiscall
STG::UPreference_TimeOfDay_Auto::Initialize
          (UPreference_TimeOfDay_Auto *this,UPreference_TimeOfDay *param_1)

{
  char *pcVar1;
  void *__src;
  int iVar2;
  undefined1 *puVar3;
  uint uVar4;
  void *__dest;
  int unaff_EBX;
  uint __n;
  undefined1 *puVar5;
  int *piVar6;
  int *piVar7;
  bool bVar8;
  byte bVar9;
  int local_94;
  uint local_8c;
  uint local_74;
  int local_70;
  int local_6c [4];
  int *local_5c;
  int *local_58;
  int local_50;
  int local_4c [2];
  undefined2 local_44;
  undefined1 local_42;
  undefined1 local_41 [5];
  undefined1 *local_3c;
  int *local_38;
  int local_30;
  int local_2c [4];
  int *local_1c;
  int *local_18;
  int local_14;
  
  bVar9 = 0;
  local_14 = 0x7b8db;
  FUN_0002e044();
  local_74 = 0x4c;
  local_14 = **(int **)(
                       "_ZN3STG11UPreferenceINS_21UPreference_IAB_EntryELb1EE21SetSelectedValueIndexEm"
                       + unaff_EBX + 1);
  local_30 = *(int *)(
                     "_ZN3STG11UPreferenceINS_21UPreference_IAB_EntryELb1EE21SetSelectedValueIndexEm"
                     + unaff_EBX + 5);
  *(UPreference_TimeOfDay **)(this + 0x88) = param_1;
  local_30 = local_30 + 8;
  piVar6 = (int *)(unaff_EBX + 0xc1a9);
  local_1c = local_2c;
  local_18 = local_2c;
  local_18 = (int *)std::__node_alloc::_M_allocate(&local_74);
  local_2c[0] = local_74 + (int)local_18;
  bVar8 = ((uint)local_18 & 1) != 0;
  local_8c = 0x4b;
  piVar7 = local_18;
  if (bVar8) {
    piVar7 = (int *)((int)local_18 + 1);
    *(undefined1 *)local_18 = *(undefined1 *)(unaff_EBX + 0xc1a9);
    piVar6 = (int *)(unaff_EBX + 0xc1aa);
    local_8c = 0x4a;
  }
  if (((uint)piVar7 & 2) != 0) {
    iVar2 = *piVar6;
    piVar6 = (int *)((int)piVar6 + 2);
    *(short *)piVar7 = (short)iVar2;
    piVar7 = (int *)((int)piVar7 + 2);
    local_8c = local_8c - 2;
  }
  for (uVar4 = local_8c >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *piVar7 = *piVar6;
    piVar6 = piVar6 + (uint)bVar9 * -2 + 1;
    piVar7 = piVar7 + (uint)bVar9 * -2 + 1;
  }
  local_94 = 0;
  if ((local_8c & 2) != 0) {
    *(short *)piVar7 = (short)*piVar6;
    local_94 = 2;
  }
  if (!bVar8) {
    *(undefined1 *)((int)piVar7 + local_94) = *(undefined1 *)((int)piVar6 + local_94);
  }
  local_1c = (int *)((int)local_18 + 0x4b);
  local_70 = *(int *)(
                     "_ZN3STG11UPreferenceINS_21UPreference_IAB_EntryELb1EE21SetSelectedValueIndexEm"
                     + unaff_EBX + 5);
  *(undefined1 *)((int)local_18 + 0x4b) = 0;
  local_4c[0] = 0x6f747541;
  local_70 = local_70 + 8;
  local_4c[1] = 0x61684320;
  local_3c = local_41;
  local_44 = 0x676e;
  local_42 = 0x65;
  local_41[0] = 0;
  local_74 = 0x16;
  local_5c = local_6c;
  local_58 = local_6c;
  local_50 = local_70;
  local_38 = local_4c;
  local_58 = (int *)std::__node_alloc::_M_allocate(&local_74);
  local_6c[0] = local_74 + (int)local_58;
  *local_58 = 0x656d6974;
  local_58[1] = 0x6164666f;
  local_58[2] = 0x75615f79;
  local_58[3] = 0x635f6f74;
  local_58[4] = 0x676e6168;
  *(undefined1 *)(local_58 + 5) = 0x65;
  local_5c = (int *)((int)local_58 + 0x15);
  *(undefined1 *)((int)local_58 + 0x15) = 0;
  *(undefined4 *)(this + 0x80) = 2;
  UPreferenceBase::Initialize
            ((UPreferenceBase *)this,(UStringBase *)&local_70,(UStringBase *)&local_50,
             (UStringBase *)&local_30);
  if (*(uint *)(this + 0x80) == 0) {
    puVar3 = *(undefined1 **)(this + 0x7c);
  }
  else {
    puVar3 = operator_new__(*(uint *)(this + 0x80));
    *(undefined1 **)(this + 0x7c) = puVar3;
  }
  *puVar3 = 0;
  local_70 = *(int *)(
                     "_ZN3STG11UPreferenceINS_21UPreference_IAB_EntryELb1EE21SetSelectedValueIndexEm"
                     + unaff_EBX + 5);
  *(undefined1 *)(*(int *)(this + 0x7c) + 1) = 1;
  local_70 = local_70 + 8;
  if ((local_58 != local_6c) && (local_58 != (int *)0x0)) {
    if ((uint)(local_6c[0] - (int)local_58) < 0x81) {
      std::__node_alloc::_M_deallocate(local_58,local_6c[0] - (int)local_58);
    }
    else {
      operator_delete(local_58);
    }
  }
  local_50 = *(int *)(
                     "_ZN3STG11UPreferenceINS_21UPreference_IAB_EntryELb1EE21SetSelectedValueIndexEm"
                     + unaff_EBX + 5) + 8;
  if ((local_38 != local_4c) && (local_38 != (int *)0x0)) {
    if ((uint)(local_4c[0] - (int)local_38) < 0x81) {
      std::__node_alloc::_M_deallocate(local_38,local_4c[0] - (int)local_38);
    }
    else {
      operator_delete(local_38);
    }
  }
  local_30 = *(int *)(
                     "_ZN3STG11UPreferenceINS_21UPreference_IAB_EntryELb1EE21SetSelectedValueIndexEm"
                     + unaff_EBX + 5) + 8;
  if ((local_18 != local_2c) && (local_18 != (int *)0x0)) {
    if ((uint)(local_2c[0] - (int)local_18) < 0x81) {
      std::__node_alloc::_M_deallocate(local_18,local_2c[0] - (int)local_18);
    }
    else {
      operator_delete(local_18);
    }
  }
  if ((string *)(param_1 + 0x5c) != (string *)(this + 8)) {
    pcVar1 = *(char **)(this + 0x18);
    __src = *(void **)(this + 0x1c);
    __n = (int)pcVar1 - (int)__src;
    puVar3 = *(undefined1 **)(param_1 + 0x6c);
    __dest = *(void **)(param_1 + 0x70);
    uVar4 = (int)puVar3 - (int)__dest;
    if (uVar4 < __n) {
      iVar2 = 0;
      if (uVar4 != 0) {
        memmove(__dest,__src,uVar4);
        iVar2 = *(int *)(param_1 + 0x6c) - *(int *)(param_1 + 0x70);
      }
      std::string::_M_append((string *)(param_1 + 0x5c),(char *)((int)__src + iVar2),pcVar1);
    }
    else {
      if (__n != 0) {
        memmove(__dest,__src,__n);
        puVar3 = *(undefined1 **)(param_1 + 0x6c);
        __dest = *(void **)(param_1 + 0x70);
      }
      puVar5 = (undefined1 *)(__n + (int)__dest);
      if (puVar5 != puVar3) {
        *puVar5 = *puVar3;
        *(undefined1 **)(param_1 + 0x6c) = puVar5 + (*(int *)(param_1 + 0x6c) - (int)puVar3);
      }
    }
  }
  if (local_14 ==
      **(int **)("_ZN3STG11UPreferenceINS_21UPreference_IAB_EntryELb1EE21SetSelectedValueIndexEm" +
                unaff_EBX + 1)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0002e000();
}

