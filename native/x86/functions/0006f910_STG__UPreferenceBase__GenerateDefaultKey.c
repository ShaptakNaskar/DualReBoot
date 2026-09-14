/* 0006f910 | STG::UPreferenceBase::GenerateDefaultKey */

/* STG::UPreferenceBase::GenerateDefaultKey() */

void __thiscall STG::UPreferenceBase::GenerateDefaultKey(UPreferenceBase *this)

{
  string *this_00;
  UStringBase<char,int> *this_01;
  char *pcVar1;
  int *piVar2;
  uint *puVar3;
  uint *__src;
  string *psVar4;
  string *psVar5;
  undefined1 uVar6;
  void *pvVar7;
  undefined1 *puVar8;
  char *pcVar9;
  int iVar10;
  size_t sVar11;
  uint uVar12;
  uint __n;
  char cVar13;
  undefined1 *puVar14;
  int unaff_EBX;
  uint local_100 [4];
  int local_f0;
  uint local_ec [4];
  uint *local_dc;
  uint *local_d8;
  int local_d0;
  string *local_cc [4];
  string *local_bc;
  string *local_b8;
  int local_b0;
  uint local_ac [4];
  uint *local_9c;
  uint *local_98;
  int local_90;
  undefined4 local_8c;
  int local_7c;
  undefined4 *local_78;
  int local_70;
  undefined4 local_6c;
  int local_5c;
  undefined4 *local_58;
  int local_50;
  undefined4 local_4c;
  int local_3c;
  undefined4 *local_38;
  int local_30;
  undefined4 local_2c;
  int local_1c;
  undefined4 *local_18;
  int local_14;
  
  local_14 = 0x6f91b;
  FUN_0002e044();
  local_ec[0] = local_ec[0] & 0xffffff00;
  local_14 = **(int **)((int)&__DT_REL[0x3d9].r_info + unaff_EBX + 1);
  iVar10 = *(int *)((int)&__DT_REL[0x3da].r_offset + unaff_EBX + 1) + 8;
  local_f0 = iVar10;
  local_dc = local_ec;
  local_d8 = local_ec;
  (**(code **)(*(int *)this + 0x10))(this,&local_f0);
  __src = local_d8;
  puVar3 = local_dc;
  sVar11 = (int)local_dc - (int)local_d8;
  uVar12 = sVar11 + 1;
  local_bc = (string *)local_cc;
  local_d0 = iVar10;
  local_b8 = (string *)local_cc;
  if (uVar12 == 0) {
                    /* WARNING: Subroutine does not return */
    std::__stl_throw_length_error("_ZSt24__stl_throw_out_of_rangePKc" + unaff_EBX + 0x11);
  }
  if (0x10 < uVar12) {
    local_100[0] = uVar12;
    if (uVar12 < 0x81) {
      local_bc = (string *)std::__node_alloc::_M_allocate(local_100);
    }
    else {
      local_bc = operator_new(uVar12);
    }
    local_cc[0] = local_bc + local_100[0];
  }
  local_b8 = local_bc;
  if (puVar3 != __src) {
    pvVar7 = memcpy(local_bc,__src,sVar11);
    local_bc = (string *)((int)pvVar7 + sVar11);
  }
  *local_bc = (string)0x0;
  std::string::_M_append
            ((string *)local_cc,
             "_ZNK3STG12FFileManager17GetPathComponentsERKNS_11UStringBaseIciEERS2_S5_S5_S5_" +
             unaff_EBX + 0x45,
             "_ZNK3STG12FFileManager17GetPathComponentsERKNS_11UStringBaseIciEERS2_S5_S5_S5_" +
             unaff_EBX + 0x46);
  psVar5 = local_b8;
  psVar4 = local_bc;
  this_00 = (string *)(this + 8);
  if (this_00 != (string *)local_cc) {
    puVar8 = *(undefined1 **)(this + 0x18);
    uVar12 = (int)local_bc - (int)local_b8;
    pvVar7 = *(void **)(this + 0x1c);
    __n = (int)puVar8 - (int)pvVar7;
    if (__n < uVar12) {
      iVar10 = 0;
      if (__n != 0) {
        memmove(pvVar7,local_b8,__n);
        iVar10 = *(int *)(this + 0x18) - *(int *)(this + 0x1c);
      }
      std::string::_M_append(this_00,(char *)(psVar5 + iVar10),(char *)psVar4);
    }
    else {
      if (uVar12 != 0) {
        memmove(pvVar7,local_b8,uVar12);
        puVar8 = *(undefined1 **)(this + 0x18);
        pvVar7 = *(void **)(this + 0x1c);
      }
      puVar14 = (undefined1 *)((int)pvVar7 + uVar12);
      if (puVar8 != puVar14) {
        *puVar14 = *puVar8;
        *(undefined1 **)(this + 0x18) = puVar14 + (*(int *)(this + 0x18) - (int)puVar8);
      }
    }
  }
  local_d0 = *(int *)((int)&__DT_REL[0x3da].r_offset + unaff_EBX + 1) + 8;
  if ((local_b8 != (string *)local_cc) && (local_b8 != (string *)0x0)) {
    if ((uint)((int)local_cc[0] - (int)local_b8) < 0x81) {
      std::__node_alloc::_M_deallocate(local_b8,(int)local_cc[0] - (int)local_b8);
    }
    else {
      operator_delete(local_b8);
    }
  }
  uVar6 = (**(code **)(*(int *)this + 8))(this,1);
  pcVar9 = *(char **)(this + 0x38);
  sVar11 = strlen(pcVar9);
  std::string::_M_append(this_00,pcVar9,pcVar9 + sVar11);
  (**(code **)(*(int *)this + 8))(this,uVar6);
  local_ac[0] = local_ac[0] & 0xffffff00;
  local_b0 = *(int *)((int)&__DT_REL[0x3da].r_offset + unaff_EBX + 1) + 8;
  local_9c = local_ac;
  local_98 = local_ac;
  (**(code **)(*(int *)this + 0x14))(this,&local_b0);
  puVar3 = local_98;
  sVar11 = strlen((char *)local_98);
  std::string::_M_append(this_00,(char *)puVar3,(char *)((int)puVar3 + sVar11));
  this_01 = (UStringBase<char,int> *)(this + 4);
  UStringBase<char,int>::Trim(this_01);
  pcVar9 = *(char **)(this + 0x1c);
  pcVar1 = *(char **)(this + 0x18);
  if (pcVar9 != pcVar1) {
    piVar2 = *(int **)((int)&__DT_REL[0x3dd].r_offset + unaff_EBX + 1);
    do {
      cVar13 = *pcVar9;
      if ((uint)(int)cVar13 < 0x100) {
        cVar13 = (char)*(undefined2 *)(*piVar2 + 2 + cVar13 * 2);
      }
      *pcVar9 = cVar13;
      pcVar9 = pcVar9 + 1;
    } while (pcVar9 != pcVar1);
  }
  iVar10 = *(int *)((int)&__DT_REL[0x3da].r_offset + unaff_EBX + 1) + 8;
  local_5c = (int)&local_6c + 1;
  local_7c = (int)&local_8c + 1;
  local_6c = CONCAT22(local_6c._2_2_,0x5f);
  local_8c = CONCAT22(local_8c._2_2_,0x20);
  local_90 = iVar10;
  local_78 = &local_8c;
  local_70 = iVar10;
  local_58 = &local_6c;
  UStringBase<char,int>::Replace(this_01,(UStringBase *)&local_90,(UStringBase *)&local_70);
  local_90 = iVar10;
  if ((local_78 != &local_8c) && (local_78 != (undefined4 *)0x0)) {
    if ((uint)(local_8c - (int)local_78) < 0x81) {
      std::__node_alloc::_M_deallocate(local_78,local_8c - (int)local_78);
    }
    else {
      operator_delete(local_78);
    }
  }
  local_70 = *(int *)((int)&__DT_REL[0x3da].r_offset + unaff_EBX + 1) + 8;
  if ((local_58 != &local_6c) && (local_58 != (undefined4 *)0x0)) {
    if ((uint)(local_6c - (int)local_58) < 0x81) {
      std::__node_alloc::_M_deallocate(local_58,local_6c - (int)local_58);
    }
    else {
      operator_delete(local_58);
    }
  }
  local_3c = (int)&local_4c + 1;
  iVar10 = *(int *)((int)&__DT_REL[0x3da].r_offset + unaff_EBX + 1) + 8;
  local_1c = (int)&local_2c + 1;
  local_2c = CONCAT22(local_2c._2_2_,0x5f);
  local_4c = CONCAT22(local_4c._2_2_,0x2c);
  local_50 = iVar10;
  local_38 = &local_4c;
  local_30 = iVar10;
  local_18 = &local_2c;
  UStringBase<char,int>::Replace(this_01,(UStringBase *)&local_50,(UStringBase *)&local_30);
  local_50 = iVar10;
  if ((local_38 != &local_4c) && (local_38 != (undefined4 *)0x0)) {
    if ((uint)(local_4c - (int)local_38) < 0x81) {
      std::__node_alloc::_M_deallocate(local_38,local_4c - (int)local_38);
    }
    else {
      operator_delete(local_38);
    }
  }
  local_30 = *(int *)((int)&__DT_REL[0x3da].r_offset + unaff_EBX + 1) + 8;
  if ((local_18 != &local_2c) && (local_18 != (undefined4 *)0x0)) {
    if ((uint)(local_2c - (int)local_18) < 0x81) {
      std::__node_alloc::_M_deallocate(local_18,local_2c - (int)local_18);
    }
    else {
      operator_delete(local_18);
    }
  }
  local_b0 = *(int *)((int)&__DT_REL[0x3da].r_offset + unaff_EBX + 1) + 8;
  if ((local_98 != local_ac) && (local_98 != (uint *)0x0)) {
    if (local_ac[0] - (int)local_98 < 0x81) {
      std::__node_alloc::_M_deallocate(local_98,local_ac[0] - (int)local_98);
    }
    else {
      operator_delete(local_98);
    }
  }
  local_f0 = *(int *)((int)&__DT_REL[0x3da].r_offset + unaff_EBX + 1) + 8;
  if ((local_d8 != local_ec) && (local_d8 != (uint *)0x0)) {
    if (local_ec[0] - (int)local_d8 < 0x81) {
      std::__node_alloc::_M_deallocate(local_d8,local_ec[0] - (int)local_d8);
    }
    else {
      operator_delete(local_d8);
    }
  }
  if (local_14 == **(int **)((int)&__DT_REL[0x3d9].r_info + unaff_EBX + 1)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0002e000();
}

